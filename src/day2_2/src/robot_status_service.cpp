// Dosya: ~/ros2_ws/src/advanced_robot/src/robot_status_service.cpp

#include <memory>
#include <vector>
#include <map>

#include "rclcpp/rclcpp.hpp"
#include "day2/srv/get_robot_status.hpp"
#include "day2/msg/robot_status.hpp"
#include "day2/msg/sensor_data.hpp"

/**
 * RobotStatusService sınıfı
 * Robot durumlarını sorgulayabilen service
 */
class RobotStatusService : public rclcpp::Node
{
public:
    RobotStatusService() : Node("robot_status_service")
    {
        // Status query service server
        status_service_ = this->create_service<day2::srv::GetRobotStatus>(
            "get_robot_status",
            std::bind(&RobotStatusService::handle_status_query, this,
                     std::placeholders::_1, std::placeholders::_2));
        
        // Robot status subscriber - gelen durumları kaydet
        robot_status_sub_ = this->create_subscription<day2::msg::RobotStatus>(
            "robot_status_detailed", 10,
            std::bind(&RobotStatusService::robot_status_callback, this, std::placeholders::_1));
        
        // Sensor data subscriber - sensör verilerini kaydet
        sensor_subs_.push_back(
            this->create_subscription<day2::msg::SensorData>(
                "sensor/lidar", 10,
                std::bind(&RobotStatusService::sensor_callback, this, std::placeholders::_1))
        );
        
        sensor_subs_.push_back(
            this->create_subscription<day2::msg::SensorData>(
                "sensor/camera", 10,
                std::bind(&RobotStatusService::sensor_callback, this, std::placeholders::_1))
        );
        
        sensor_subs_.push_back(
            this->create_subscription<day2::msg::SensorData>(
                "sensor/imu", 10,
                std::bind(&RobotStatusService::sensor_callback, this, std::placeholders::_1))
        );
        
        // Periyodik cleanup timer
        cleanup_timer_ = this->create_wall_timer(
            std::chrono::seconds(30),
            std::bind(&RobotStatusService::cleanup_old_data, this));
        
        RCLCPP_INFO(this->get_logger(), "🔍 Robot Status Service başlatıldı!");
        RCLCPP_INFO(this->get_logger(), "Service: /get_robot_status");
        RCLCPP_INFO(this->get_logger(), "Robot durumlarını toplamaya başladı...");
    }

private:
    /**
     * Robot status callback - gelen durumları sakla
     */
    void robot_status_callback(const day2::msg::RobotStatus::SharedPtr msg)
    {
        // Robot durumunu sakla
        robot_statuses_[msg->robot_id] = *msg;
        
        // Status history'e ekle
        status_history_[msg->robot_id].push_back(*msg);
        
        // History'yi limit et (son 20 entry)
        if (status_history_[msg->robot_id].size() > 20) {
            status_history_[msg->robot_id].erase(status_history_[msg->robot_id].begin());
        }
        
        // İstatistikleri güncelle
        update_robot_statistics(msg);
        
        RCLCPP_DEBUG(this->get_logger(), 
            "📊 Robot %d durumu güncellendi: %s", 
            msg->robot_id, get_status_string(msg->status).c_str());
    }
    
    /**
     * Sensor data callback - sensör verilerini sakla
     */
    void sensor_callback(const day2::msg::SensorData::SharedPtr msg)
    {
        // Son sensör verilerini sakla
        latest_sensor_data_[msg->sensor_name] = *msg;
        
        RCLCPP_DEBUG(this->get_logger(), 
            "📡 Sensör verisi güncellendi: %s", msg->sensor_name.c_str());
    }
    
    /**
     * Status query service handler
     */
    void handle_status_query(
        const std::shared_ptr<day2::srv::GetRobotStatus::Request> request,
        std::shared_ptr<day2::srv::GetRobotStatus::Response> response)
    {
        RCLCPP_INFO(this->get_logger(), 
            "🔍 Status sorgusu alındı - Robot ID: %d, Name: '%s'", 
            request->robot_id, request->robot_name.c_str());
        
        // Query timestamp'i ayarla
        response->query_timestamp = this->get_clock()->now();
        
        try {
            // Robot ID veya name'e göre robot bul
            auto robot_msg = find_robot(request->robot_id, request->robot_name);
            
            if (!robot_msg.has_value()) {
                // Robot bulunamadı
                response->success = false;
                response->message = "Robot bulunamadı: ID=" + std::to_string(request->robot_id) + 
                                  ", Name='" + request->robot_name + "'";
                return;
            }
            
            // Ana robot durumunu ayarla
            response->current_status = robot_msg.value();
            response->success = true;
            response->message = "Robot durumu başarıyla alındı";
            
            // Sensör verilerini ekle (istenirse)
            if (request->include_sensors) {
                add_sensor_data_to_response(response);
            }
            
            // Diagnostic bilgileri ekle (istenirse)
            if (request->include_diagnostics) {
                add_diagnostic_info_to_response(robot_msg.value().robot_id, response);
            }
            
            // History ekle (istenirse)
            if (request->include_history) {
                add_history_to_response(robot_msg.value().robot_id, response);
            }
            
            // İstatistikleri ekle
            add_statistics_to_response(robot_msg.value().robot_id, response);
            
            // Son güncelleme zamanını ayarla
            response->last_update_time = robot_msg.value().timestamp;
            
            RCLCPP_INFO(this->get_logger(), 
                "✅ Status sorgusu tamamlandı - Robot: %s (ID: %d)", 
                robot_msg.value().robot_name.c_str(), robot_msg.value().robot_id);
            
        } catch (const std::exception& e) {
            response->success = false;
            response->message = "Status sorgusu sırasında hata: " + std::string(e.what());
            RCLCPP_ERROR(this->get_logger(), 
                "❌ Status sorgusu hatası: %s", e.what());
        }
    }
    
    /**
     * Robot ID veya name'e göre robot bul
     */
    std::optional<day2::msg::RobotStatus> find_robot(uint32_t robot_id, const std::string& robot_name)
    {
        // Belirli robot ID isteniyorsa
        if (robot_id != 0) {
            auto it = robot_statuses_.find(robot_id);
            if (it != robot_statuses_.end()) {
                return it->second;
            }
            return std::nullopt;
        }
        
        // Robot name'e göre ara
        if (!robot_name.empty()) {
            for (const auto& [id, status] : robot_statuses_) {
                if (status.robot_name == robot_name) {
                    return status;
                }
            }
            return std::nullopt;
        }
        
        // İlk bulduğu robotu döndür (varsayılan)
        if (!robot_statuses_.empty()) {
            return robot_statuses_.begin()->second;
        }
        
        return std::nullopt;
    }
    
    /**
     * Response'a sensör verilerini ekle
     */
    void add_sensor_data_to_response(std::shared_ptr<day2::srv::GetRobotStatus::Response> response)
    {
        response->sensor_data.clear();
        
        for (const auto& [sensor_name, sensor_data] : latest_sensor_data_) {
            response->sensor_data.push_back(sensor_data);
        }
        
        RCLCPP_DEBUG(this->get_logger(), 
            "📡 %zu sensör verisi eklendi", response->sensor_data.size());
    }
    
    /**
     * Response'a diagnostic bilgileri ekle
     */
    void add_diagnostic_info_to_response(uint32_t robot_id, 
                                       std::shared_ptr<day2::srv::GetRobotStatus::Response> response)
    {
        response->diagnostic_messages.clear();
        
        // Sistem sağlık kontrolleri
        if (robot_statuses_.count(robot_id)) {
            const auto& status = robot_statuses_[robot_id];
            
            // Batarya uyarıları
            if (status.battery_level < 0.2) {
                response->diagnostic_messages.push_back("WARNING: Low battery level (" + 
                    std::to_string(static_cast<int>(status.battery_level * 100)) + "%)");
            }
            
            // Sıcaklık uyarıları
            if (status.temperature > 35.0) {
                response->diagnostic_messages.push_back("WARNING: High temperature (" + 
                    std::to_string(status.temperature) + "°C)");
            }
            
            // Hata durumu
            if (status.status == day2::msg::RobotStatus::STATUS_ERROR) {
                response->diagnostic_messages.push_back("ERROR: Robot in error state - " + 
                    status.error_message);
            }
            
            // Sensör arızaları
            for (size_t i = 0; i < status.sensor_names.size() && i < status.sensor_status.size(); ++i) {
                if (!status.sensor_status[i]) {
                    response->diagnostic_messages.push_back("WARNING: Sensor failure - " + 
                        status.sensor_names[i]);
                }
            }
        }
        
        // Genel sistem diagnostics
        response->diagnostic_messages.push_back("System: " + std::to_string(robot_statuses_.size()) + 
            " robots tracked");
        response->diagnostic_messages.push_back("Sensors: " + std::to_string(latest_sensor_data_.size()) + 
            " active sensors");
        
        RCLCPP_DEBUG(this->get_logger(), 
            "🔧 %zu diagnostic mesajı eklendi", response->diagnostic_messages.size());
    }
    
    /**
     * Response'a history ekle
     */
    void add_history_to_response(uint32_t robot_id, 
                               std::shared_ptr<day2::srv::GetRobotStatus::Response> response)
    {
        response->status_history.clear();
        
        if (status_history_.count(robot_id)) {
            const auto& history = status_history_[robot_id];
            
            // Son 10 status'ü ekle
            size_t start_idx = history.size() > 10 ? history.size() - 10 : 0;
            for (size_t i = start_idx; i < history.size(); ++i) {
                response->status_history.push_back(history[i]);
            }
        }
        
        RCLCPP_DEBUG(this->get_logger(), 
            "📜 %zu history entry eklendi", response->status_history.size());
    }
    
    /**
     * Response'a istatistikler ekle
     */
    void add_statistics_to_response(uint32_t robot_id, 
                                  std::shared_ptr<day2::srv::GetRobotStatus::Response> response)
    {
        if (robot_statistics_.count(robot_id)) {
            const auto& stats = robot_statistics_[robot_id];
            
            response->uptime_hours = stats.uptime_hours;
            response->total_commands_executed = stats.total_commands;
            response->total_distance_traveled = stats.total_distance;
            response->error_count_today = stats.error_count;
            response->average_response_time_ms = stats.avg_response_time;
            response->cpu_usage_percent = stats.cpu_usage;
            response->memory_usage_percent = stats.memory_usage;
            response->network_latency_ms = stats.network_latency;
        } else {
            // Default değerler
            response->uptime_hours = 0.0;
            response->total_commands_executed = 0;
            response->total_distance_traveled = 0.0;
            response->error_count_today = 0;
            response->average_response_time_ms = 0.0;
            response->cpu_usage_percent = 0.0;
            response->memory_usage_percent = 0.0;
            response->network_latency_ms = 0.0;
        }
    }
    
    /**
     * Robot istatistiklerini güncelle
     */
    void update_robot_statistics(const day2::msg::RobotStatus::SharedPtr msg)
    {
        auto& stats = robot_statistics_[msg->robot_id];
        
        // İlk kayıtsa başlangıç zamanını ayarla
        if (stats.first_seen.nanosec == 0){
            stats.first_seen = msg->timestamp;
        }
        
        // Uptime hesapla
        auto now = this->get_clock()->now();
        auto uptime_duration = now - rclcpp::Time(stats.first_seen);
        stats.uptime_hours = uptime_duration.seconds() / 3600.0;
        
        // Hata sayısını güncelle
        if (msg->status == day2::msg::RobotStatus::STATUS_ERROR) {
            stats.error_count++;
        }
        
        // Mesafe hesapla (basit)
        if (stats.last_position_set) {
            double distance = std::sqrt(
                std::pow(msg->position.x - stats.last_position.x, 2) +
                std::pow(msg->position.y - stats.last_position.y, 2) +
                std::pow(msg->position.z - stats.last_position.z, 2)
            );
            stats.total_distance += distance;
        }
        
        stats.last_position = msg->position;
        stats.last_position_set = true;
        
        // Simulated performance metrics
        stats.avg_response_time = 15.5 + (rand() % 10); // ms
        stats.cpu_usage = 25.0 + (rand() % 40); // %
        stats.memory_usage = 45.0 + (rand() % 20); // %
        stats.network_latency = 2.0 + (rand() % 8); // ms
    }
    
    /**
     * Eski verileri temizle
     */
    void cleanup_old_data()
    {
        auto now = this->get_clock()->now();
        const auto timeout_duration = std::chrono::seconds(300); // 5 dakika
        
        // Eski robot statuslerini temizle
        for (auto it = robot_statuses_.begin(); it != robot_statuses_.end();) {
            auto status_time = rclcpp::Time(it->second.timestamp);
            if ((now - status_time) > rclcpp::Duration(timeout_duration)) {
                RCLCPP_INFO(this->get_logger(), 
                    "🧹 Eski robot verisi temizlendi: ID %d", it->first);
                it = robot_statuses_.erase(it);
            } else {
                ++it;
            }
        }
        
        // Eski sensör verilerini temizle
        for (auto it = latest_sensor_data_.begin(); it != latest_sensor_data_.end();) {
            auto sensor_time = rclcpp::Time(it->second.header.stamp);
            if ((now - sensor_time) > rclcpp::Duration(timeout_duration)) {
                RCLCPP_INFO(this->get_logger(), 
                    "🧹 Eski sensör verisi temizlendi: %s", it->first.c_str());
                it = latest_sensor_data_.erase(it);
            } else {
                ++it;
            }
        }
        
        RCLCPP_DEBUG(this->get_logger(), 
            "🧹 Cleanup tamamlandı. Active robots: %zu, sensors: %zu", 
            robot_statuses_.size(), latest_sensor_data_.size());
    }
    
    /**
     * Status kodunu string'e çevir
     */
    std::string get_status_string(uint8_t status)
    {
        switch (status) {
            case day2::msg::RobotStatus::STATUS_IDLE: return "IDLE";
            case day2::msg::RobotStatus::STATUS_MOVING: return "MOVING";
            case day2::msg::RobotStatus::STATUS_WORKING: return "WORKING";
            case day2::msg::RobotStatus::STATUS_CHARGING: return "CHARGING";
            case day2::msg::RobotStatus::STATUS_ERROR: return "ERROR";
            default: return "UNKNOWN";
        }
    }
    
    /**
     * Robot istatistik yapısı
     */
    struct RobotStatistics {
        builtin_interfaces::msg::Time first_seen;
        float uptime_hours = 0.0;
        uint32_t total_commands = 0;
        float total_distance = 0.0;
        uint32_t error_count = 0;
        float avg_response_time = 0.0;
        float cpu_usage = 0.0;
        float memory_usage = 0.0;
        float network_latency = 0.0;
        geometry_msgs::msg::Point last_position;
        bool last_position_set = false;
    };
    
    // Member variables
    rclcpp::Service<day2::srv::GetRobotStatus>::SharedPtr status_service_;
    rclcpp::Subscription<day2::msg::RobotStatus>::SharedPtr robot_status_sub_;
    std::vector<rclcpp::Subscription<day2::msg::SensorData>::SharedPtr> sensor_subs_;
    rclcpp::TimerBase::SharedPtr cleanup_timer_;
    
    // Data storage
    std::map<uint32_t, day2::msg::RobotStatus> robot_statuses_;
    std::map<uint32_t, std::vector<day2::msg::RobotStatus>> status_history_;
    std::map<std::string, day2::msg::SensorData> latest_sensor_data_;
    std::map<uint32_t, RobotStatistics> robot_statistics_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<RobotStatusService>();
    
    RCLCPP_INFO(node->get_logger(), "Robot Status Service hazır!");
    RCLCPP_INFO(node->get_logger(), "Sorgu örneği:");
    RCLCPP_INFO(node->get_logger(), "  ros2 service call /get_robot_status day2/srv/GetRobotStatus \"{}\"");
    
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}