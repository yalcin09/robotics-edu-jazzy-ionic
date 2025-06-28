// Dosya: ~/ros2_ws/src/advanced_robot/src/filtering_subscriber.cpp

#include <memory>
#include <vector>
#include <functional>

#include "rclcpp/rclcpp.hpp"
#include "day2/msg/robot_status.hpp"

/**
 * FilteringSubscriber sınıfı
 * Gelen robot status mesajlarını belirli kriterlere göre filtreler
 */
class FilteringSubscriber : public rclcpp::Node
{
public:
    FilteringSubscriber() : Node("filtering_subscriber"), filtered_count_(0), total_count_(0)
    {
        // Subscriber oluştur
        subscription_ = this->create_subscription<day2::msg::RobotStatus>(
            "robot_status_detailed", 10,
            std::bind(&FilteringSubscriber::message_callback, this, std::placeholders::_1));
        
        // Filtrelenmiş mesajları publish eden publisher
        filtered_publisher_ = this->create_publisher<day2::msg::RobotStatus>(
            "robot_status_filtered", 10);
        
        // Filter kriterlerini ayarla
        setup_filters();
        
        // Periyodik istatistik raporu
        stats_timer_ = this->create_wall_timer(
            std::chrono::seconds(5),
            std::bind(&FilteringSubscriber::print_statistics, this));
        
        RCLCPP_INFO(this->get_logger(), "Filtering Subscriber başlatildi!");
        RCLCPP_INFO(this->get_logger(), "Aktif filter sayisi: %zu", filters_.size());
    }

private:
    /**
     * Filter function türü - mesajı alır, bool döner
     */
    using FilterFunction = std::function<bool(const day2::msg::RobotStatus::SharedPtr)>;
    
    /**
     * Filter entry - isim ve fonksiyon
     */
    struct FilterEntry {
        std::string name;
        FilterFunction function;
        int match_count = 0;
    };
    
    /**
     * Filter'ları ayarla
     */
    void setup_filters()
    {
        // Filter 1: Sadece hareket halindeki robotlar
        filters_.push_back({
            "moving_robots",
            [](const auto& msg) { 
                return msg->status == day2::msg::RobotStatus::STATUS_MOVING; 
            }
        });
        
        // Filter 2: Düşük bataryalı robotlar (<%20)
        filters_.push_back({
            "low_battery",
            [](const auto& msg) { 
                return msg->battery_level < 0.2; 
            }
        });
        
        // Filter 3: Hata durumundaki robotlar
        filters_.push_back({
            "error_status",
            [](const auto& msg) { 
                return msg->status == day2::msg::RobotStatus::STATUS_ERROR; 
            }
        });
        
        // Filter 4: Yüksek sıcaklık (>30°C)
        filters_.push_back({
            "high_temperature",
            [](const auto& msg) { 
                return msg->temperature > 30.0; 
            }
        });
        
        // Filter 5: Hızlı hareket eden robotlar (>0.5 m/s)
        filters_.push_back({
            "high_speed",
            [](const auto& msg) {
                double speed = std::sqrt(
                    msg->velocity.linear.x * msg->velocity.linear.x +
                    msg->velocity.linear.y * msg->velocity.linear.y
                );
                return speed > 0.5;
            }
        });
        
        // Filter 6: Sensör arızası olan robotlar
        filters_.push_back({
            "sensor_failure",
            [](const auto& msg) {
                // En az bir sensörün arızalı olması
                for (bool status : msg->sensor_status) {
                    if (!status) return true;
                }
                return false;
            }
        });
        
        // Filter 7: Belirli robot ID'si (demo için)
        filters_.push_back({
            "specific_robot_id",
            [](const auto& msg) {
                return msg->robot_id == 1001;  // Sadece robot ID 1001
            }
        });
        
        // Filter 8: Görev ilerlemesi yüksek robotlar (>80%)
        filters_.push_back({
            "high_task_progress",
            [](const auto& msg) {
                return msg->task_progress > 0.8;
            }
        });
    }
    
    /**
     * Ana message callback - tüm filter'ları uygula
     */
    void message_callback(const day2::msg::RobotStatus::SharedPtr msg)
    {
        total_count_++;
        bool message_passed = false;
        
        // Her filter'ı kontrol et
        for (auto& filter : filters_) {
            if (filter.function(msg)) {
                filter.match_count++;
                message_passed = true;
                
                // Filter'a uyan mesajı logla
                RCLCPP_INFO(this->get_logger(), 
                    "✅ Filter '%s' matched: Robot %d (%s)", 
                    filter.name.c_str(), 
                    msg->robot_id,
                    msg->robot_name.c_str());
            }
        }
        
        // En az bir filter'dan geçen mesajları publish et
        if (message_passed) {
            filtered_count_++;
            filtered_publisher_->publish(*msg);
            
            // Detaylı analiz göster
            show_message_analysis(msg);
        }
    }
    
    /**
     * Mesaj detaylarını analiz et ve göster
     */
    void show_message_analysis(const day2::msg::RobotStatus::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), 
            "📊 Analiz - Robot: %s | Status: %s | Battery: %.1f%% | Temp: %.1f°C | Speed: %.2f m/s",
            msg->robot_name.c_str(),
            get_status_string(msg->status).c_str(),
            msg->battery_level * 100.0,
            msg->temperature,
            calculate_speed(msg));
    }
    
    /**
     * Robot hızını hesapla
     */
    double calculate_speed(const day2::msg::RobotStatus::SharedPtr msg)
    {
        return std::sqrt(
            msg->velocity.linear.x * msg->velocity.linear.x +
            msg->velocity.linear.y * msg->velocity.linear.y
        );
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
     * İstatistikleri yazdır
     */
    void print_statistics()
    {
        if (total_count_ == 0) {
            RCLCPP_INFO(this->get_logger(), "Henüz mesaj alınmadı...");
            return;
        }
        
        double filter_rate = (filtered_count_ * 100.0) / total_count_;
        
        RCLCPP_INFO(this->get_logger(), "\n=== FİLTRE İSTATİSTİKLERİ ===");
        RCLCPP_INFO(this->get_logger(), "Toplam mesaj: %d", total_count_);
        RCLCPP_INFO(this->get_logger(), "Filtreden geçen: %d (%.1f%%)", filtered_count_, filter_rate);
        
        RCLCPP_INFO(this->get_logger(), "\nFilter detayları:");
        for (const auto& filter : filters_) {
            double match_rate = (filter.match_count * 100.0) / total_count_;
            RCLCPP_INFO(this->get_logger(), "  %s: %d eşleşme (%.1f%%)", 
                       filter.name.c_str(), filter.match_count, match_rate);
        }
        
        // En aktif filter'ı bul
        auto max_filter = std::max_element(filters_.begin(), filters_.end(),
            [](const FilterEntry& a, const FilterEntry& b) {
                return a.match_count < b.match_count;
            });
        
        if (max_filter != filters_.end() && max_filter->match_count > 0) {
            RCLCPP_INFO(this->get_logger(), "🏆 En aktif filter: %s (%d eşleşme)", 
                       max_filter->name.c_str(), max_filter->match_count);
        }
    }
    
    // Member variables
    rclcpp::Subscription<day2::msg::RobotStatus>::SharedPtr subscription_;
    rclcpp::Publisher<day2::msg::RobotStatus>::SharedPtr filtered_publisher_;
    rclcpp::TimerBase::SharedPtr stats_timer_;
    
    std::vector<FilterEntry> filters_;   // Tüm filter'lar
    int filtered_count_;                 // Filtreden geçen mesaj sayısı
    int total_count_;                    // Toplam mesaj sayısı
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<FilteringSubscriber>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}