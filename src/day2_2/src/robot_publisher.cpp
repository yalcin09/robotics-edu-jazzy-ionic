// Dosya: ~/ros2_ws/src/advanced_robot/src/robot_status_publisher.cpp

#include <chrono>
#include <memory>
#include <random>

#include "rclcpp/rclcpp.hpp"
#include "day2/msg/robot_status.hpp"    // Custom message include
#include "geometry_msgs/msg/point.hpp"
#include "geometry_msgs/msg/vector3.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;

/**
 * RobotStatusPublisher sınıfı
 * Robot durumunu periyodik olarak yayınlar
 */
class RobotStatusPublisher : public rclcpp::Node
{
public:
    RobotStatusPublisher() : Node("robot_status_publisher"), 
                           x_pos_(0.0), y_pos_(0.0), 
                           battery_level_(1.0), 
                           current_status_(day2::msg::RobotStatus::STATUS_IDLE)
    {
        // Publisher oluştur - custom message türü kullanıyor
        publisher_ = this->create_publisher<day2::msg::RobotStatus>(
            "robot_status_detailed", 10);
        
        // Timer - her 1 saniyede bir status güncelle
        timer_ = this->create_wall_timer(
            1000ms, std::bind(&RobotStatusPublisher::publish_status, this));
        
        // Random number generator - simülasyon için
        rng_.seed(std::chrono::steady_clock::now().time_since_epoch().count());
        
        RCLCPP_INFO(this->get_logger(), "Robot Status Publisher başlatıldı!");
    }

private:
    /**
     * Robot durumunu yayınla
     */
    void publish_status()
    {
        // Yeni RobotStatus message oluştur
        auto status_msg = day2::msg::RobotStatus();
        
        // Temel robot bilgileri
        status_msg.robot_name = "MobileRobot_Alpha";
        status_msg.robot_id = 1001;
        status_msg.timestamp = this->get_clock()->now();  // Şu anki zaman
        
        // Pozisyon bilgilerini güncelle (simülasyon)
        update_robot_simulation();
        
        // Pozisyon bilgileri
        status_msg.position.x = x_pos_;
        status_msg.position.y = y_pos_;
        status_msg.position.z = 0.0;  // 2D robot varsayımı
        
        // Oryantasyon (yönelim)
        status_msg.orientation.x = 0.0;
        status_msg.orientation.y = 0.0;
        status_msg.orientation.z = current_heading_;  // Yaw açısı
        
        // Hız bilgileri
        status_msg.velocity.linear.x = linear_vel_;
        status_msg.velocity.linear.y = 0.0;
        status_msg.velocity.linear.z = 0.0;
        status_msg.velocity.angular.x = 0.0;
        status_msg.velocity.angular.y = 0.0;
        status_msg.velocity.angular.z = angular_vel_;
        
        // Robot durumu
        status_msg.status = current_status_;
        
        // Sensör bilgileri
        status_msg.battery_level = battery_level_;
        status_msg.temperature = 25.0 + get_random_float(-5.0, 5.0);  // Sıcaklık simülasyonu
        
        // Sensör durumları (örnek sensörler)
        status_msg.sensor_status = {true, true, false, true};  // 4 sensör
        status_msg.sensor_names = {"camera", "lidar", "gps", "imu"};
        
        // Görev bilgileri
        status_msg.current_task = get_current_task_name();
        status_msg.task_progress = task_progress_;
        
        // Hata durumu kontrolü
        if (current_status_ == day2::msg::RobotStatus::STATUS_ERROR) {
            status_msg.error_message = "Simulated error for testing";
        } else {
            status_msg.error_message = "";
        }
        
        // Message'ı publish et
        publisher_->publish(status_msg);
        
        // Log bilgisi
        RCLCPP_INFO(this->get_logger(), 
            "Status: %s | Pos: (%.2f, %.2f) | Battery: %.1f%% | Task: %s", 
            get_status_string(current_status_).c_str(),
            x_pos_, y_pos_, battery_level_ * 100.0,
            status_msg.current_task.c_str());
    }
    
    /**
     * Robot simülasyonunu güncelle
     */
    void update_robot_simulation()
    {
        // Basit robot hareketi simülasyonu
        switch (current_status_) {
            case day2::msg::RobotStatus::STATUS_MOVING:
                // Hareket halinde - pozisyon güncelle
                x_pos_ += linear_vel_ * std::cos(current_heading_);
                y_pos_ += linear_vel_ * std::sin(current_heading_);
                
                // Batarya tüket
                battery_level_ -= 0.001;
                
                // Görev ilerlemesi
                task_progress_ = std::min(1.0f, task_progress_ + 0.05f);
                break;
                
            case day2::msg::RobotStatus::STATUS_CHARGING:
                // Şarj durumunda - batarya doldur
                battery_level_ = std::min(1.0f, battery_level_ + 0.01f);
                break;
                
            case day2::msg::RobotStatus::STATUS_WORKING:
                // Çalışma durumunda - görev ilerlet
                task_progress_ = std::min(1.0f, task_progress_ + 0.02f);
                battery_level_ -= 0.0005;
                break;
                
            default:
                // Idle durumunda çok az batarya tüket
                battery_level_ -= 0.0001;
                break;
        }
        
        // Durum geçişleri (basit state machine)
        update_robot_state();
        
        // Hız değerleri güncelle
        if (current_status_ == day2::msg::RobotStatus::STATUS_MOVING) {
            linear_vel_ = 0.5 + get_random_float(-0.1, 0.1);
            angular_vel_ = get_random_float(-0.2, 0.2);
        } else {
            linear_vel_ = 0.0;
            angular_vel_ = 0.0;
        }
    }
    
    /**
     * Robot durumunu güncelle (basit state machine)
     */
    void update_robot_state()
    {
        // Düşük batarya kontrolü
        if (battery_level_ < 0.2 && current_status_ != day2::msg::RobotStatus::STATUS_CHARGING) {
            current_status_ = day2::msg::RobotStatus::STATUS_CHARGING;
            task_progress_ = 0.0;
            return;
        }
        
        // Batarya dolu mu?
        if (battery_level_ > 0.95 && current_status_ == day2::msg::RobotStatus::STATUS_CHARGING) {
            current_status_ = day2::msg::RobotStatus::STATUS_IDLE;
            return;
        }
        
        // Görev tamamlandı mı?
        if (task_progress_ >= 1.0) {
            current_status_ = day2::msg::RobotStatus::STATUS_IDLE;
            task_progress_ = 0.0;
            return;
        }
        
        // Random durum değişiklikleri
        if (current_status_ == day2::msg::RobotStatus::STATUS_IDLE) {
            if (get_random_float(0, 1) < 0.1) {  // %10 şans
                current_status_ = day2::msg::RobotStatus::STATUS_MOVING;
            }
        }
    }
    
    /**
     * Durum adını string olarak döndür
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
     * Şu anki görev adını döndür
     */
    std::string get_current_task_name()
    {
        switch (current_status_) {
            case day2::msg::RobotStatus::STATUS_MOVING: return "Navigation to target";
            case day2::msg::RobotStatus::STATUS_WORKING: return "Object manipulation";
            case day2::msg::RobotStatus::STATUS_CHARGING: return "Battery charging";
            default: return "Standby";
        }
    }
    
    /**
     * Random float değer üret
     */
    float get_random_float(float min, float max)
    {
        std::uniform_real_distribution<float> dist(min, max);
        return dist(rng_);
    }
    
    // Member variables
    rclcpp::Publisher<day2::msg::RobotStatus>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    
    // Robot simulation state
    double x_pos_, y_pos_;           // Pozisyon
    double current_heading_;         // Yönelim
    double linear_vel_, angular_vel_; // Hızlar
    float battery_level_;            // Batarya seviyesi
    uint8_t current_status_;         // Robot durumu
    float task_progress_;            // Görev ilerleme oranı
    
    // Random number generator
    std::mt19937 rng_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<RobotStatusPublisher>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}