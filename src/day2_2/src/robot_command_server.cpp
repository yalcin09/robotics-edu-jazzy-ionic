// Dosya: ~/ros2_ws/src/advanced_robot/src/robot_command_server.cpp

#include <memory>
#include <chrono>
#include <thread>

#include "rclcpp/rclcpp.hpp"
#include "day2/srv/robot_command.hpp"
#include "day2/msg/robot_status.hpp"
#include "geometry_msgs/msg/point.hpp"

using namespace std::chrono_literals;

/**
 * RobotCommandServer sınıfı
 * Robot komutlarını işleyen service server
 */
class RobotCommandServer : public rclcpp::Node
{
public:
    RobotCommandServer() : Node("robot_command_server"), command_counter_(0)
    {
        // Service server oluştur
        service_ = this->create_service<day2::srv::RobotCommand>(
            "robot_command",  // Service adı
            std::bind(&RobotCommandServer::handle_command, this, 
                     std::placeholders::_1, std::placeholders::_2));
        
        // Robot durumunu publish eden publisher (komut sonuçları için)
        status_publisher_ = this->create_publisher<day2::msg::RobotStatus>(
            "robot_status_detailed", 10);
        
        // Periyodik status update timer
        status_timer_ = this->create_wall_timer(
            1s, std::bind(&RobotCommandServer::publish_status, this));
        
        // Robot başlangıç durumu
        initialize_robot_state();
        
        RCLCPP_INFO(this->get_logger(), "🤖 Robot Command Server başlatıldı!");
        RCLCPP_INFO(this->get_logger(), "Service: /robot_command");
        RCLCPP_INFO(this->get_logger(), "Komutları kabul etmeye hazır...");
    }

private:
    /**
     * Service callback fonksiyonu - gelen komutları işler
     * @param request: Gelen komut request'i
     * @param response: Gönderilecek response
     */
    void handle_command(
        const std::shared_ptr<day2::srv::RobotCommand::Request> request,
        std::shared_ptr<day2::srv::RobotCommand::Response> response)
    {
        RCLCPP_INFO(this->get_logger(), 
            "📨 Yeni komut alındı: '%s'", request->command_type.c_str());
        
        // Komut ID oluştur
        response->command_id = ++command_counter_;
        
        // Komut türüne göre işlem yap
        if (request->command_type == "move_to") {
            handle_move_to_command(request, response);
        }
        else if (request->command_type == "rotate") {
            handle_rotate_command(request, response);
        }
        else if (request->command_type == "stop") {
            handle_stop_command(request, response);
        }
        else if (request->command_type == "home") {
            handle_home_command(request, response);
        }
        else if (request->command_type == "status") {
            handle_status_command(request, response);
        }
        else {
            // Bilinmeyen komut
            handle_unknown_command(request, response);
        }
        
        // Response zamanını ayarla
        response->estimated_completion = this->get_clock()->now();
        response->estimated_completion.sec += static_cast<int>(response->estimated_duration);
        
        // Log response
        RCLCPP_INFO(this->get_logger(), 
            "✅ Komut işlendi: ID=%d, Success=%s, Duration=%.1fs", 
            response->command_id, 
            response->success ? "true" : "false",
            response->estimated_duration);
    }
    
    /**
     * Move to command işleme
     */
    void handle_move_to_command(
        const std::shared_ptr<day2::srv::RobotCommand::Request> request,
        std::shared_ptr<day2::srv::RobotCommand::Response> response)
    {
        // Hedef pozisyonu kontrol et
        if (!is_position_valid(request->target_position)) {
            response->success = false;
            response->error_code = day2::srv::RobotCommand::Response::ERROR_OUT_OF_BOUNDS;
            response->message = "Hedef pozisyon erişilebilir alanda değil!";
            response->estimated_duration = 0.0;
            return;
        }
        
        // Robot meşgul mü kontrol et
        if (current_status_ == day2::msg::RobotStatus::STATUS_MOVING) {
            response->success = false;
            response->error_code = day2::srv::RobotCommand::Response::ERROR_ROBOT_BUSY;
            response->message = "Robot şu anda hareket halinde. Mevcut komutu durdurun.";
            response->estimated_duration = 0.0;
            return;
        }
        
        // Mesafe ve süre hesapla
        double distance = calculate_distance(current_position_, request->target_position);
        double max_vel = std::min(static_cast<double>(request->max_velocity), max_robot_velocity_);
        
        // Başarılı response oluştur
        response->success = true;
        response->error_code = day2::srv::RobotCommand::Response::ERROR_NONE;
        response->message = "Hareket komutu kabul edildi. Hedefe gidiliyor...";
        response->estimated_duration = distance / max_vel + 2.0; // +2s güvenlik
        response->actual_target = request->target_position; // Güvenlik kontrolü sonrası
        
        // Robot durumunu güncelle
        target_position_ = request->target_position;
        current_status_ = day2::msg::RobotStatus::STATUS_MOVING;
        current_task_ = "Moving to target position";
        
        // Async olarak hareketi simüle et
        std::thread([this, request]() {
            simulate_movement_to_target(request->target_position);
        }).detach();
        
        RCLCPP_INFO(this->get_logger(), 
            "🚀 Hareket başlatıldı: (%.2f, %.2f, %.2f) → (%.2f, %.2f, %.2f)",
            current_position_.x, current_position_.y, current_position_.z,
            request->target_position.x, request->target_position.y, request->target_position.z);
    }
    
    /**
     * Rotate command işleme
     */
    void handle_rotate_command(
        const std::shared_ptr<day2::srv::RobotCommand::Request> request,
        std::shared_ptr<day2::srv::RobotCommand::Response> response)
    {
        // Robot meşgul mü kontrol et
        if (current_status_ == day2::msg::RobotStatus::STATUS_MOVING) {
            response->success = false;
            response->error_code = day2::srv::RobotCommand::Response::ERROR_ROBOT_BUSY;
            response->message = "Robot hareket halinde. Dönüş komutu reddedildi.";
            return;
        }
        
        // Dönüş açısını hesapla
        double rotation_angle = std::abs(request->target_orientation.z - current_orientation_.z);
        double max_angular_vel = 1.0; // rad/s
        
        response->success = true;
        response->error_code = day2::srv::RobotCommand::Response::ERROR_NONE;
        response->message = "Dönüş komutu kabul edildi.";
        response->estimated_duration = rotation_angle / max_angular_vel + 1.0;
        
        // Dönüşü simüle et
        target_orientation_ = request->target_orientation;
        current_status_ = day2::msg::RobotStatus::STATUS_MOVING;
        current_task_ = "Rotating to target orientation";
        
        std::thread([this]() {
            simulate_rotation();
        }).detach();
    }
    
    /**
     * Stop command işleme
     */
    void handle_stop_command(
        const std::shared_ptr<day2::srv::RobotCommand::Request> request,
        std::shared_ptr<day2::srv::RobotCommand::Response> response)
    {
        // Her zaman başarılı (acil durum komutu)
        response->success = true;
        response->error_code = day2::srv::RobotCommand::Response::ERROR_NONE;
        response->message = "Robot durduruldu.";
        response->estimated_duration = 0.5; // Durma süresi
        
        // Robot durumunu güncelle
        current_status_ = day2::msg::RobotStatus::STATUS_IDLE;
        current_task_ = "Stopped by command";
        
        RCLCPP_WARN(this->get_logger(), "🛑 Robot durduruldu!");
    }
    
    /**
     * Home command işleme
     */
    void handle_home_command(
        const std::shared_ptr<day2::srv::RobotCommand::Request> request,
        std::shared_ptr<day2::srv::RobotCommand::Response> response)
    {
        // Home position: (0, 0, 0)
        geometry_msgs::msg::Point home_pos;
        home_pos.x = 0.0;
        home_pos.y = 0.0;
        home_pos.z = 0.0;
        
        double distance = calculate_distance(current_position_, home_pos);
        
        response->success = true;
        response->error_code = day2::srv::RobotCommand::Response::ERROR_NONE;
        response->message = "Home pozisyonuna gidiliyor...";
        response->estimated_duration = distance / max_robot_velocity_ + 2.0;
        response->actual_target = home_pos;
        
        // Home hareketini başlat
        target_position_ = home_pos;
        current_status_ = day2::msg::RobotStatus::STATUS_MOVING;
        current_task_ = "Going to home position";
        
        std::thread([this, home_pos]() {
            simulate_movement_to_target(home_pos);
        }).detach();
    }
    
    /**
     * Status command işleme
     */
    void handle_status_command(
        const std::shared_ptr<day2::srv::RobotCommand::Request> request,
        std::shared_ptr<day2::srv::RobotCommand::Response> response)
    {
        response->success = true;
        response->error_code = day2::srv::RobotCommand::Response::ERROR_NONE;
        response->message = "Robot durumu: " + get_status_string(current_status_);
        response->estimated_duration = 0.0;
    }
    
    /**
     * Bilinmeyen komut işleme
     */
    void handle_unknown_command(
        const std::shared_ptr<day2::srv::RobotCommand::Request> request,
        std::shared_ptr<day2::srv::RobotCommand::Response> response)
    {
        response->success = false;
        response->error_code = day2::srv::RobotCommand::Response::ERROR_INVALID_COMMAND;
        response->message = "Bilinmeyen komut: " + request->command_type;
        response->estimated_duration = 0.0;
        
        RCLCPP_ERROR(this->get_logger(), 
            "❌ Bilinmeyen komut: '%s'", request->command_type.c_str());
    }
    
    /**
     * Pozisyon geçerlilik kontrolü
     */
    bool is_position_valid(const geometry_msgs::msg::Point& position)
    {
        // Basit workspace sınırları: -10 ile +10 arası
        return (std::abs(position.x) <= 10.0 && 
                std::abs(position.y) <= 10.0 && 
                std::abs(position.z) <= 5.0);
    }
    
    /**
     * İki nokta arası mesafe hesaplama
     */
    double calculate_distance(const geometry_msgs::msg::Point& p1, 
                            const geometry_msgs::msg::Point& p2)
    {
        return std::sqrt(
            std::pow(p2.x - p1.x, 2) + 
            std::pow(p2.y - p1.y, 2) + 
            std::pow(p2.z - p1.z, 2)
        );
    }
    
    /**
     * Hareket simülasyonu
     */
    void simulate_movement_to_target(const geometry_msgs::msg::Point& target)
    {
        RCLCPP_INFO(this->get_logger(), "🎯 Hedefe hareket simülasyonu başladı...");
        
        auto start_time = std::chrono::steady_clock::now();
        double total_distance = calculate_distance(current_position_, target);
        
        // Hareket adımları
        int steps = static_cast<int>(total_distance * 10); // Her 0.1m için bir adım
        steps = std::max(10, std::min(steps, 100)); // 10-100 adım arası
        
        for (int i = 0; i <= steps; ++i) {
            double progress = static_cast<double>(i) / steps;
            
            // Linear interpolation
            current_position_.x = current_position_.x * (1 - progress) + target.x * progress;
            current_position_.y = current_position_.y * (1 - progress) + target.y * progress;
            current_position_.z = current_position_.z * (1 - progress) + target.z * progress;
            
            // Progress güncelle
            task_progress_ = progress;
            
            // Kısa bekle
            std::this_thread::sleep_for(100ms);
        }
        
        // Hareket tamamlandı
        current_position_ = target;
        current_status_ = day2::msg::RobotStatus::STATUS_IDLE;
        current_task_ = "Movement completed";
        task_progress_ = 1.0;
        
        auto end_time = std::chrono::steady_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
        
        RCLCPP_INFO(this->get_logger(), 
            "✅ Hareket tamamlandı! Süre: %ld ms, Hedef: (%.2f, %.2f, %.2f)",
            duration.count(), target.x, target.y, target.z);
    }
    
    /**
     * Dönüş simülasyonu
     */
    void simulate_rotation()
    {
        RCLCPP_INFO(this->get_logger(), "🔄 Dönüş simülasyonu başladı...");
        
        auto start_orientation = current_orientation_;
        int steps = 20;
        
        for (int i = 0; i <= steps; ++i) {
            double progress = static_cast<double>(i) / steps;
            
            // Angular interpolation
            current_orientation_.z = start_orientation.z * (1 - progress) + 
                                   target_orientation_.z * progress;
            
            task_progress_ = progress;
            std::this_thread::sleep_for(100ms);
        }
        
        current_orientation_ = target_orientation_;
        current_status_ = day2::msg::RobotStatus::STATUS_IDLE;
        current_task_ = "Rotation completed";
        task_progress_ = 1.0;
        
        RCLCPP_INFO(this->get_logger(), "✅ Dönüş tamamlandı!");
    }
    
    /**
     * Robot durumunu publish et
     */
    void publish_status()
    {
        auto status_msg = day2::msg::RobotStatus();
        
        // Temel bilgiler
        status_msg.robot_name = "CommandControlledRobot";
        status_msg.robot_id = 2001;
        status_msg.timestamp = this->get_clock()->now();
        
        // Pozisyon ve oryantasyon
        status_msg.position = current_position_;
        status_msg.orientation = current_orientation_;
        
        // Durum bilgileri
        status_msg.status = current_status_;
        status_msg.current_task = current_task_;
        status_msg.task_progress = task_progress_;
        
        // Sistem bilgileri
        status_msg.battery_level = 0.85; // Sabit değer (demo için)
        status_msg.temperature = 28.0;
        
        // Sensör durumları
        status_msg.sensor_status = {true, true, true, true};
        status_msg.sensor_names = {"main_camera", "lidar", "imu", "encoders"};
        
        status_publisher_->publish(status_msg);
    }
    
    /**
     * Robot başlangıç durumunu ayarla
     */
    void initialize_robot_state()
    {
        // Başlangıç pozisyonu
        current_position_.x = 0.0;
        current_position_.y = 0.0;
        current_position_.z = 0.0;
        
        // Başlangıç oryantasyonu
        current_orientation_.x = 0.0;
        current_orientation_.y = 0.0;
        current_orientation_.z = 0.0;
        
        // Durum bilgileri
        current_status_ = day2::msg::RobotStatus::STATUS_IDLE;
        current_task_ = "Waiting for commands";
        task_progress_ = 0.0;
        
        // Robot kabiliyetleri
        max_robot_velocity_ = 2.0; // m/s
        
        RCLCPP_INFO(this->get_logger(), "🔧 Robot durumu initialize edildi");
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
    
    // Member variables
    rclcpp::Service<day2::srv::RobotCommand>::SharedPtr service_;
    rclcpp::Publisher<day2::msg::RobotStatus>::SharedPtr status_publisher_;
    rclcpp::TimerBase::SharedPtr status_timer_;
    
    // Robot state
    geometry_msgs::msg::Point current_position_;
    geometry_msgs::msg::Point target_position_;
    geometry_msgs::msg::Vector3 current_orientation_;
    geometry_msgs::msg::Vector3 target_orientation_;
    uint8_t current_status_;
    std::string current_task_;
    float task_progress_;
    
    // Robot capabilities
    double max_robot_velocity_;
    
    // Command tracking
    std::atomic<uint32_t> command_counter_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<RobotCommandServer>();
    
    RCLCPP_INFO(node->get_logger(), "Robot Command Server hazır!");
    RCLCPP_INFO(node->get_logger(), "Komut örnekleri:");
    RCLCPP_INFO(node->get_logger(), "  - move_to: Belirli pozisyona git");
    RCLCPP_INFO(node->get_logger(), "  - rotate: Belirli açıya dön"); 
    RCLCPP_INFO(node->get_logger(), "  - stop: Hareketi durdur");
    RCLCPP_INFO(node->get_logger(), "  - home: Home pozisyonuna dön");
    RCLCPP_INFO(node->get_logger(), "  - status: Mevcut durumu al");
    
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}