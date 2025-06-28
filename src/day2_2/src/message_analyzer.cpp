// Dosya: ~/ros2_ws/src/advanced_robot/src/message_analyzer.cpp

#include <memory>
#include <map>
#include <vector>
#include <algorithm>

#include "rclcpp/rclcpp.hpp"
#include "day2/msg/robot_status.hpp"
#include "day2/msg/sensor_data.hpp"

/**
 * MessageAnalyzer sınıfı
 * Gelen mesajları analiz eder ve istatistik toplar
 */
class MessageAnalyzer : public rclcpp::Node
{
public:
    MessageAnalyzer() : Node("message_analyzer")
    {
        // Robot status subscriber
        robot_status_sub_ = this->create_subscription<day2::msg::RobotStatus>(
            "robot_status_detailed", 10,
            std::bind(&MessageAnalyzer::robot_status_callback, this, std::placeholders::_1));
        
        // Sensör data subscriber'ları - farklı sensörler için
        sensor_subs_.push_back(
            this->create_subscription<day2::msg::SensorData>(
                "sensor/lidar", 10,
                std::bind(&MessageAnalyzer::sensor_callback, this, std::placeholders::_1))
        );
        
        sensor_subs_.push_back(
            this->create_subscription<day2::msg::SensorData>(
                "sensor/camera", 10,
                std::bind(&MessageAnalyzer::sensor_callback, this, std::placeholders::_1))
        );
        
        sensor_subs_.push_back(
            this->create_subscription<day2::msg::SensorData>(
                "sensor/imu", 10,
                std::bind(&MessageAnalyzer::sensor_callback, this, std::placeholders::_1))
        );
        
        sensor_subs_.push_back(
            this->create_subscription<day2::msg::SensorData>(
                "sensor/gps", 10,
                std::bind(&MessageAnalyzer::sensor_callback, this, std::placeholders::_1))
        );
        
        sensor_subs_.push_back(
            this->create_subscription<day2::msg::SensorData>(
                "sensor/battery", 10,
                std::bind(&MessageAnalyzer::sensor_callback, this, std::placeholders::_1))
        );
        
        // Periyodik rapor timer'ı - her 10 saniyede bir rapor üret
        report_timer_ = this->create_wall_timer(
            std::chrono::seconds(10),
            std::bind(&MessageAnalyzer::generate_report, this));
        
        RCLCPP_INFO(this->get_logger(), "Message Analyzer başlatıldı! Mesajları analiz ediyor...");
    }

private:
    /**
     * Robot durumu mesajı callback'i
     */
    void robot_status_callback(const day2::msg::RobotStatus::SharedPtr msg)
    {
        // Mesaj sayacını artır
        robot_status_count_++;
        
        // Durum dağılımını güncelle
        status_distribution_[msg->status]++;
        
        // Batarya istatistikleri
        battery_levels_.push_back(msg->battery_level);
        
        // Sıcaklık istatistikleri
        temperatures_.push_back(msg->temperature);
        
        // Pozisyon verileri (basit)
        positions_.push_back({msg->position.x, msg->position.y});
        
        // Hız verileri
        double speed = std::sqrt(
            msg->velocity.linear.x * msg->velocity.linear.x +
            msg->velocity.linear.y * msg->velocity.linear.y
        );
        speeds_.push_back(speed);
        
        // Sensör arıza analizi
        for (size_t i = 0; i < msg->sensor_names.size() && i < msg->sensor_status.size(); ++i) {
            if (!msg->sensor_status[i]) {
                sensor_failures_[msg->sensor_names[i]]++;
            }
        }
        
        // En son 100 mesajı tut (memory management)
        keep_last_n_elements(battery_levels_, 100);
        keep_last_n_elements(temperatures_, 100);
        keep_last_n_elements(positions_, 100);
        keep_last_n_elements(speeds_, 100);
    }
    
    /**
     * Sensör verisi mesajı callback'i
     */
    void sensor_callback(const day2::msg::SensorData::SharedPtr msg)
    {
        // Sensör mesaj sayacını artır
        sensor_message_counts_[msg->sensor_name]++;
        
        // Sensör doğruluk oranları
        sensor_accuracies_[msg->sensor_name].push_back(msg->accuracy);
        
        // Hata kodları
        if (msg->error_code != 0) {
            sensor_error_codes_[msg->sensor_name][msg->error_code]++;
        }
        
        // Sensör değer aralıkları (ilk değer için)
        if (!msg->values.empty()) {
            sensor_value_ranges_[msg->sensor_name].push_back(msg->values[0]);
        }
        
        // Memory management - son 50 değeri tut
        keep_last_n_elements(sensor_accuracies_[msg->sensor_name], 50);
        keep_last_n_elements(sensor_value_ranges_[msg->sensor_name], 50);
    }
    
    /**
     * Periyodik rapor üret
     */
    void generate_report()
    {
        RCLCPP_INFO(this->get_logger(), "\n%s", create_analysis_report().c_str());
    }
    
    /**
     * Analiz raporu oluştur
     */
    std::string create_analysis_report()
    {
        std::stringstream ss;
        
        ss << "=== MESSAGE ANALYSIS RAPORU ===\n";
        
        // Robot Status Analizi
        ss << "\n📊 ROBOT STATUS ANALİZİ:\n";
        ss << "Toplam mesaj: " << robot_status_count_ << "\n";
        
        // Durum dağılımı
        if (!status_distribution_.empty()) {
            ss << "Durum dağılımı:\n";
            for (const auto& [status, count] : status_distribution_) {
                double percentage = (count * 100.0) / robot_status_count_;
                ss << "  " << get_status_string(status) << ": " << count 
                   << " (%.1f%%)\n" << percentage;
            }
        }
        
        // Batarya analizi
        if (!battery_levels_.empty()) {
            auto [min_bat, max_bat] = std::minmax_element(battery_levels_.begin(), battery_levels_.end());
            double avg_bat = calculate_average(battery_levels_);
            ss << "Batarya - Min: " << (*min_bat * 100.0) << "% Max: " << (*max_bat * 100.0) 
               << "% Ort: " << (avg_bat * 100.0) << "%\n";
        }
        
        // Sıcaklık analizi
        if (!temperatures_.empty()) {
            auto [min_temp, max_temp] = std::minmax_element(temperatures_.begin(), temperatures_.end());
            double avg_temp = calculate_average(temperatures_);
            ss << "Sıcaklık - Min: " << *min_temp << "°C Max: " << *max_temp 
               << "°C Ort: " << avg_temp << "°C\n";
        }
        
        // Hız analizi
        if (!speeds_.empty()) {
            auto [min_speed, max_speed] = std::minmax_element(speeds_.begin(), speeds_.end());
            double avg_speed = calculate_average(speeds_);
            ss << "Hız - Min: " << *min_speed << " m/s Max: " << *max_speed 
               << " m/s Ort: " << avg_speed << " m/s\n";
        }
        
        // Sensör arıza analizi
        if (!sensor_failures_.empty()) {
            ss << "Sensör arızaları:\n";
            for (const auto& [sensor_name, failure_count] : sensor_failures_) {
                ss << "  " << sensor_name << ": " << failure_count << " arıza\n";
            }
        }
        
        // Sensör Mesaj Analizi
        ss << "\n📡 SENSÖR MESAJ ANALİZİ:\n";
        for (const auto& [sensor_name, count] : sensor_message_counts_) {
            ss << sensor_name << ": " << count << " mesaj";
            
            // Ortalama doğruluk
            if (sensor_accuracies_.count(sensor_name) && !sensor_accuracies_[sensor_name].empty()) {
                double avg_accuracy = calculate_average(sensor_accuracies_[sensor_name]);
                ss << " (Ort. doğruluk: " << (avg_accuracy * 100.0) << "%)";
            }
            
            // Hata sayısı
            if (sensor_error_codes_.count(sensor_name)) {
                int total_errors = 0;
                for (const auto& [error_code, error_count] : sensor_error_codes_[sensor_name]) {
                    total_errors += error_count;
                }
                if (total_errors > 0) {
                    ss << " (" << total_errors << " hata)";
                }
            }
            
            ss << "\n";
        }
        
        // Mesaj frekansları
        ss << "\n⏱️ PERFORMANS BİLGİSİ:\n";
        auto now = std::chrono::steady_clock::now();
        if (last_report_time_.time_since_epoch().count() > 0) {
            auto duration = std::chrono::duration_cast<std::chrono::seconds>(now - last_report_time_);
            if (duration.count() > 0) {
                double robot_freq = (robot_status_count_ - last_robot_count_) / (double)duration.count();
                ss << "Robot status frekansı: " << robot_freq << " Hz\n";
                
                for (const auto& [sensor_name, count] : sensor_message_counts_) {
                    int prev_count = last_sensor_counts_.count(sensor_name) ? last_sensor_counts_[sensor_name] : 0;
                    double sensor_freq = (count - prev_count) / (double)duration.count();
                    ss << sensor_name << " frekansı: " << sensor_freq << " Hz\n";
                }
            }
        }
        
        // Sonraki rapor için değerleri sakla
        last_report_time_ = now;
        last_robot_count_ = robot_status_count_;
        last_sensor_counts_ = sensor_message_counts_;
        
        return ss.str();
    }
    
    /**
     * Durum kodunu string'e çevir
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
     * Vector'ün ortalamasını hesapla
     */
    template<typename T>
    double calculate_average(const std::vector<T>& vec)
    {
        if (vec.empty()) return 0.0;
        double sum = 0.0;
        for (const auto& val : vec) {
            sum += static_cast<double>(val);
        }
        return sum / vec.size();
    }
    
    /**
     * Vector'de sadece son N elemanı tut
     */
    template<typename T>
    void keep_last_n_elements(std::vector<T>& vec, size_t n)
    {
        if (vec.size() > n) {
            vec.erase(vec.begin(), vec.end() - n);
        }
    }
    
    // Subscriber'lar
    rclcpp::Subscription<day2::msg::RobotStatus>::SharedPtr robot_status_sub_;
    std::vector<rclcpp::Subscription<day2::msg::SensorData>::SharedPtr> sensor_subs_;
    
    // Timer
    rclcpp::TimerBase::SharedPtr report_timer_;
    
    // Robot status istatistikleri
    int robot_status_count_ = 0;
    std::map<uint8_t, int> status_distribution_;
    std::vector<float> battery_levels_;
    std::vector<float> temperatures_;
    std::vector<std::pair<double, double>> positions_;
    std::vector<double> speeds_;
    std::map<std::string, int> sensor_failures_;
    
    // Sensör istatistikleri
    std::map<std::string, int> sensor_message_counts_;
    std::map<std::string, std::vector<float>> sensor_accuracies_;
    std::map<std::string, std::map<uint32_t, int>> sensor_error_codes_;
    std::map<std::string, std::vector<double>> sensor_value_ranges_;
    
    // Performans tracking
    std::chrono::steady_clock::time_point last_report_time_;
    int last_robot_count_ = 0;
    std::map<std::string, int> last_sensor_counts_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MessageAnalyzer>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}