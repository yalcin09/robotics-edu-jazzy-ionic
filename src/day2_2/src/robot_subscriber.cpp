// Dosya: ~/ros2_ws/src/advanced_robot/src/robot_status_subscriber.cpp

#include <memory>
#include <iomanip>
#include <sstream>

#include "rclcpp/rclcpp.hpp"
#include "day2/msg/robot_status.hpp"

/**
 * RobotStatusSubscriber sınıfı
 * Robot durumunu dinler ve analiz eder
 */
class RobotStatusSubscriber : public rclcpp::Node
{
public:
    RobotStatusSubscriber() : Node("robot_status_subscriber"), message_count_(0)
    {
        // Subscriber oluştur
        subscription_ = this->create_subscription<day2::msg::RobotStatus>(
            "robot_status_detailed", 10,
            std::bind(&RobotStatusSubscriber::status_callback, this, std::placeholders::_1));
        
        RCLCPP_INFO(this->get_logger(), "Robot Status Subscriber başlatıldı! Durumları dinliyor...");
    }

private:
    /**
     * Robot durumu callback fonksiyonu
     */
    void status_callback(const day2::msg::RobotStatus::SharedPtr msg)
    {
        message_count_++;
        
        // Temel bilgileri logla
        RCLCPP_INFO(this->get_logger(), ("\n" + create_status_report(msg)).c_str());
        
        // Kritik durumları kontrol et
        check_critical_conditions(msg);
        
        // İstatistikleri güncelle
        update_statistics(msg);
        
        // Her 10 mesajda bir özet göster
        if (message_count_ % 10 == 0) {
            show_statistics();
        }
    }
    
    /**
     * Detaylı durum raporu oluştur
     */
    std::string create_status_report(const day2::msg::RobotStatus::SharedPtr msg)
    {
        std::stringstream ss;
        
        ss << "=== ROBOT STATUS REPORT ===\n";
        ss << "Robot: " << msg->robot_name << " (ID: " << msg->robot_id << ")\n";
        ss << "Timestamp: " << format_timestamp(msg->timestamp) << "\n";
        ss << "Status: " << get_status_string(msg->status) << "\n";
        
        // Pozisyon bilgileri
        ss << std::fixed << std::setprecision(2);
        ss << "Position: (" << msg->position.x << ", " << msg->position.y << ", " << msg->position.z << ")\n";
        ss << "Orientation: R=" << msg->orientation.x << " P=" << msg->orientation.y << " Y=" << msg->orientation.z << "\n";
        
        // Hız bilgileri
        ss << "Linear Vel: (" << msg->velocity.linear.x << ", " << msg->velocity.linear.y << ", " << msg->velocity.linear.z << ")\n";
        ss << "Angular Vel: (" << msg->velocity.angular.x << ", " << msg->velocity.angular.y << ", " << msg->velocity.angular.z << ")\n";
        
        // Sistem durumu
        ss << "Battery: " << std::setprecision(1) << (msg->battery_level * 100.0) << "%\n";
        ss << "Temperature: " << std::setprecision(1) << msg->temperature << "°C\n";
        
        // Görev bilgileri
        ss << "Current Task: " << msg->current_task << "\n";
        ss << "Task Progress: " << std::setprecision(1) << (msg->task_progress * 100.0) << "%\n";
        
        // Sensör durumları
        ss << "Sensors: ";
        for (size_t i = 0; i < msg->sensor_names.size() && i < msg->sensor_status.size(); ++i) {
            ss << msg->sensor_names[i] << ":" << (msg->sensor_status[i] ? "✓" : "✗") << " ";
        }
        ss << "\n";
        
        // Hata mesajı varsa
        if (!msg->error_message.empty()) {
            ss << "⚠️ ERROR: " << msg->error_message << "\n";
        }
        
        return ss.str();
    }
    
    /**
     * Kritik durumları kontrol et
     */
    void check_critical_conditions(const day2::msg::RobotStatus::SharedPtr msg)
    {
        // Düşük batarya uyarısı
        if (msg->battery_level < 0.2) {
            RCLCPP_WARN(this->get_logger(), "🔋 DÜŞÜK BATARYA! Seviye: %.1f%%", msg->battery_level * 100.0);
        }
        
        // Yüksek sıcaklık uyarısı
        if (msg->temperature > 35.0) {
            RCLCPP_WARN(this->get_logger(), "🌡️ YÜKSEK SICAKLIK! Sıcaklık: %.1f°C", msg->temperature);
        }
        
        // Hata durumu
        if (msg->status == day2::msg::RobotStatus::STATUS_ERROR) {
            RCLCPP_ERROR(this->get_logger(), "❌ ROBOT HATA DURUMUNDA! Mesaj: %s", msg->error_message.c_str());
        }
        
        // Sensör arızası kontrolü
        for (size_t i = 0; i < msg->sensor_names.size() && i < msg->sensor_status.size(); ++i) {
            if (!msg->sensor_status[i]) {
                RCLCPP_WARN(this->get_logger(), "⚠️ SENSÖR ARIZASI: %s sensörü çalışmıyor!", msg->sensor_names[i].c_str());
            }
        }
        
        // Yüksek hız uyarısı
        double speed = std::sqrt(msg->velocity.linear.x * msg->velocity.linear.x + 
                                msg->velocity.linear.y * msg->velocity.linear.y);
        if (speed > 1.0) {
            RCLCPP_WARN(this->get_logger(), "⚡ YÜKSEK HIZ! Hız: %.2f m/s", speed);
        }
    }
    
    /**
     * İstatistikleri güncelle
     */
    void update_statistics(const day2::msg::RobotStatus::SharedPtr msg)
    {
        // Batarya istatistikleri
        if (msg->battery_level > max_battery_) max_battery_ = msg->battery_level;
        if (msg->battery_level < min_battery_) min_battery_ = msg->battery_level;
        
        // Sıcaklık istatistikleri  
        if (msg->temperature > max_temperature_) max_temperature_ = msg->temperature;
        if (msg->temperature < min_temperature_) min_temperature_ = msg->temperature;
        
        // Durum sayaçları
        status_counts_[msg->status]++;
        
        // Mesaj frekansi hesabı
        auto now = std::chrono::steady_clock::now();
        if (last_message_time_.time_since_epoch().count() > 0) {
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(now - last_message_time_);
            total_interval_ms_ += duration.count();
        }
        last_message_time_ = now;
    }
    
    /**
     * İstatistikleri göster
     */
    void show_statistics()
    {
        RCLCPP_INFO(this->get_logger(), "\n=== 📊 İSTATİSTİKLER ===");
        RCLCPP_INFO(this->get_logger(), "Toplam mesaj: %d", message_count_);
        
        // Ortalama mesaj frekansı
        if (message_count_ > 1 && total_interval_ms_ > 0) {
            double avg_freq = 1000.0 / (total_interval_ms_ / (message_count_ - 1));
            RCLCPP_INFO(this->get_logger(), "Ortalama frekans: %.2f Hz", avg_freq);
        }
        
        // Batarya istatistikleri
        RCLCPP_INFO(this->get_logger(), "Batarya - Min: %.1f%% Max: %.1f%%", 
                   min_battery_ * 100.0, max_battery_ * 100.0);
        
        // Sıcaklık istatistikleri
        RCLCPP_INFO(this->get_logger(), "Sıcaklık - Min: %.1f°C Max: %.1f°C", 
                   min_temperature_, max_temperature_);
        
        // Durum dağılımı
        RCLCPP_INFO(this->get_logger(), "Durum dağılımı:");
        for (const auto& [status, count] : status_counts_) {
            double percentage = (count * 100.0) / message_count_;
            RCLCPP_INFO(this->get_logger(), "  %s: %d (%.1f%%)", 
                       get_status_string(status).c_str(), count, percentage);
        }
    }
    
    /**
     * Zaman damgasını formatla
     */
    std::string format_timestamp(const builtin_interfaces::msg::Time& timestamp)
    {
        // Basit timestamp formatı - gerçek uygulamada daha gelişmiş olabilir
        return std::to_string(timestamp.sec) + "." + std::to_string(timestamp.nanosec / 1000000);
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
    
    // Member variables
    rclcpp::Subscription<day2::msg::RobotStatus>::SharedPtr subscription_;
    
    // İstatistik verileri
    int message_count_;
    float max_battery_ = 0.0;
    float min_battery_ = 1.0;
    float max_temperature_ = -100.0;
    float min_temperature_ = 100.0;
    std::map<uint8_t, int> status_counts_;
    
    // Timing verileri
    std::chrono::steady_clock::time_point last_message_time_;
    long long total_interval_ms_ = 0;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<RobotStatusSubscriber>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}