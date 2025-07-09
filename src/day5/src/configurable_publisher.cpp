// =============================================================================
// DOSYA: src/configurable_publisher.cpp
// AMAÇ: Birden fazla topic'e farklı mesaj türleri yayınlayan gelişmiş publisher
// KULLANIM: ros2 run day5 configurable_publisher
// ÖĞRENME: Multi-topic publishing, geometry_msgs, complex parameters
// =============================================================================

#include <rclcpp/rclcpp.hpp>              // ROS2 temel kütüphanesi
#include <std_msgs/msg/string.hpp>        // String mesaj türü
#include <std_msgs/msg/int32.hpp>         // Integer mesaj türü
#include <geometry_msgs/msg/twist.hpp>    // Robot hareket komutları için
#include <chrono>                         // Zaman işlemleri
#include <memory>                         // Smart pointer'lar
#include <random>                         // Rastgele sayı üretimi

using namespace std::chrono_literals;

// =============================================================================
// CONFIGURABLE PUBLISHER CLASS TANIMI
// =============================================================================

/**
 * @brief ConfigurablePublisher sınıfı - Çoklu topic'e yayın yapan gelişmiş publisher
 * 
 * Bu sınıf aynı anda birden fazla topic'e farklı türde mesajlar yayınlar:
 * - String mesajları (sistem durumu)
 * - Integer mesajları (sensör değerleri) 
 * - Twist mesajları (robot hareket komutları)
 */
class ConfigurablePublisher : public rclcpp::Node
{
public:
    /**
     * @brief Constructor - Multi-publisher node'u yapılandırır
     */
    ConfigurablePublisher() : Node("configurable_publisher")
    {
        // =====================================================================
        // TOPIC ADLARI PARAMETRELER
        // =====================================================================
        
        // String mesajlar için topic
        this->declare_parameter("string_topic", "robot/status");
        
        // Sayısal mesajlar için topic  
        this->declare_parameter("number_topic", "sensor/data");
        
        // Robot hareket komutları için topic
        this->declare_parameter("cmd_vel_topic", "robot/cmd_vel");
        
        // =====================================================================
        // YAYIN FREKANSI PARAMETRELER (Her topic için farklı)
        // =====================================================================
        
        // String mesajlar için frekans
        this->declare_parameter("string_frequency", 1.0);
        
        // Sayısal mesajlar için frekans (daha hızlı olabilir)
        this->declare_parameter("number_frequency", 5.0);
        
        // Robot komutları için frekans (güvenlik için kontrollü)
        this->declare_parameter("cmd_vel_frequency", 10.0);
        
        // =====================================================================
        // MESAJ İÇERİK PARAMETRELER
        // =====================================================================
        
        // String mesaj template'i
        this->declare_parameter("string_template", "Robot durumu: %s | Zaman: %.2f");
        
        // Sayısal mesaj aralığı
        this->declare_parameter("number_min", 0);
        this->declare_parameter("number_max", 100);
        
        // Robot hareket ayarları
        this->declare_parameter("linear_speed", 0.5);    // m/s
        this->declare_parameter("angular_speed", 1.0);   // rad/s
        
        // =====================================================================
        // GÜVENLİK PARAMETRELER
        // =====================================================================
        
        // Maksimum güvenli hızlar
        this->declare_parameter("max_linear_speed", 2.0);
        this->declare_parameter("max_angular_speed", 3.14);  // 180 derece/saniye
        
        // Acil durum modu
        this->declare_parameter("emergency_stop", false);
        
        // =====================================================================
        // QUEUE SIZE PARAMETRELER
        // =====================================================================
        
        this->declare_parameter("string_queue_size", 10);
        this->declare_parameter("number_queue_size", 50);    // Sayısal data için büyük buffer
        this->declare_parameter("cmd_vel_queue_size", 5);    // Robot komutları için küçük buffer
        
        // =====================================================================
        // PARAMETRE OKUMA VE VALİDASYON
        // =====================================================================
        
        // Topic adları
        string_topic_ = this->get_parameter("string_topic").as_string();
        number_topic_ = this->get_parameter("number_topic").as_string();
        cmd_vel_topic_ = this->get_parameter("cmd_vel_topic").as_string();
        
        // Frekanslar
        string_frequency_ = this->get_parameter("string_frequency").as_double();
        number_frequency_ = this->get_parameter("number_frequency").as_double();
        cmd_vel_frequency_ = this->get_parameter("cmd_vel_frequency").as_double();
        
        // Mesaj içerikleri
        string_template_ = this->get_parameter("string_template").as_string();
        number_min_ = this->get_parameter("number_min").as_int();
        number_max_ = this->get_parameter("number_max").as_int();
        
        // Hareket parametreleri
        linear_speed_ = this->get_parameter("linear_speed").as_double();
        angular_speed_ = this->get_parameter("angular_speed").as_double();
        
        // Güvenlik parametreleri
        max_linear_speed_ = this->get_parameter("max_linear_speed").as_double();
        max_angular_speed_ = this->get_parameter("max_angular_speed").as_double();
        emergency_stop_ = this->get_parameter("emergency_stop").as_bool();
        
        // Queue sizes
        string_queue_size_ = this->get_parameter("string_queue_size").as_int();
        number_queue_size_ = this->get_parameter("number_queue_size").as_int();
        cmd_vel_queue_size_ = this->get_parameter("cmd_vel_queue_size").as_int();
        
        // =====================================================================
        // PARAMETRELERİ VALİDE ETME
        // =====================================================================
        
        validate_parameters();
        
        // =====================================================================
        // PUBLISHER'LARI OLUŞTURMA
        // =====================================================================
        
        // String mesaj publisher'ı
        string_publisher_ = this->create_publisher<std_msgs::msg::String>(
            string_topic_, string_queue_size_);
        
        // Integer mesaj publisher'ı  
        number_publisher_ = this->create_publisher<std_msgs::msg::Int32>(
            number_topic_, number_queue_size_);
        
        // Twist (robot hareket) publisher'ı
        cmd_vel_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>(
            cmd_vel_topic_, cmd_vel_queue_size_);
        
        // =====================================================================
        // TIMER'LARI OLUŞTURMA (Her topic için ayrı timer)
        // =====================================================================
        
        // String mesajları için timer
        auto string_period = std::chrono::milliseconds(static_cast<int>(1000.0 / string_frequency_));
        string_timer_ = this->create_wall_timer(string_period,
            std::bind(&ConfigurablePublisher::string_timer_callback, this));
        
        // Number mesajları için timer
        auto number_period = std::chrono::milliseconds(static_cast<int>(1000.0 / number_frequency_));
        number_timer_ = this->create_wall_timer(number_period,
            std::bind(&ConfigurablePublisher::number_timer_callback, this));
        
        // Cmd_vel mesajları için timer (emergency_stop kontrolü ile)
        if (!emergency_stop_) {
            auto cmd_vel_period = std::chrono::milliseconds(static_cast<int>(1000.0 / cmd_vel_frequency_));
            cmd_vel_timer_ = this->create_wall_timer(cmd_vel_period,
                std::bind(&ConfigurablePublisher::cmd_vel_timer_callback, this));
        }
        
        // =====================================================================
        // RASTGELE SAYI ÜRETICI BAŞLATMA
        // =====================================================================
        
        // Rastgele sayı üretici için seed
        random_generator_.seed(std::chrono::steady_clock::now().time_since_epoch().count());
        number_distribution_ = std::uniform_int_distribution<int>(number_min_, number_max_);
        
        // =====================================================================
        // BAŞLATMA BİLGİ MESAJLARI
        // =====================================================================
        
        RCLCPP_INFO(this->get_logger(), "✅ ConfigurablePublisher node başlatıldı!");
        RCLCPP_INFO(this->get_logger(), "📊 Konfigürasyon:");
        RCLCPP_INFO(this->get_logger(), "   📝 String topic: %s (%.1f Hz)", 
                   string_topic_.c_str(), string_frequency_);
        RCLCPP_INFO(this->get_logger(), "   🔢 Number topic: %s (%.1f Hz)", 
                   number_topic_.c_str(), number_frequency_);
        
        if (!emergency_stop_) {
            RCLCPP_INFO(this->get_logger(), "   🚗 Cmd_vel topic: %s (%.1f Hz)", 
                       cmd_vel_topic_.c_str(), cmd_vel_frequency_);
        } else {
            RCLCPP_WARN(this->get_logger(), "   🛑 EMERGENCY STOP AKTİF - Robot hareket komutları kapalı!");
        }
    }

private:
    // =========================================================================
    // PARAMETRE VALİDASYON FONKSİYONU
    // =========================================================================
    
    void validate_parameters()
    {
        // Frekans kontrolü
        if (string_frequency_ <= 0) {
            RCLCPP_ERROR(this->get_logger(), "String frequency invalid, using default 1.0");
            string_frequency_ = 1.0;
        }
        
        if (number_frequency_ <= 0) {
            RCLCPP_ERROR(this->get_logger(), "Number frequency invalid, using default 5.0");
            number_frequency_ = 5.0;
        }
        
        if (cmd_vel_frequency_ <= 0) {
            RCLCPP_ERROR(this->get_logger(), "Cmd_vel frequency invalid, using default 10.0");
            cmd_vel_frequency_ = 10.0;
        }
        
        // Number range kontrolü
        if (number_min_ >= number_max_) {
            RCLCPP_ERROR(this->get_logger(), "Invalid number range, using default 0-100");
            number_min_ = 0;
            number_max_ = 100;
        }
        
        // Hız limitleri kontrolü
        if (linear_speed_ > max_linear_speed_) {
            RCLCPP_WARN(this->get_logger(), "Linear speed %.2f > max %.2f, capping to max", 
                       linear_speed_, max_linear_speed_);
            linear_speed_ = max_linear_speed_;
        }
        
        if (angular_speed_ > max_angular_speed_) {
            RCLCPP_WARN(this->get_logger(), "Angular speed %.2f > max %.2f, capping to max", 
                       angular_speed_, max_angular_speed_);
            angular_speed_ = max_angular_speed_;
        }
        
        // Queue size kontrolü
        if (string_queue_size_ < 1) string_queue_size_ = 10;
        if (number_queue_size_ < 1) number_queue_size_ = 50;
        if (cmd_vel_queue_size_ < 1) cmd_vel_queue_size_ = 5;
    }
    
    // =========================================================================
    // STRING TIMER CALLBACK - Sistem durumu mesajları
    // =========================================================================
    
    void string_timer_callback()
    {
        auto message = std_msgs::msg::String();
        
        // Sistem durumunu belirleme (basit state machine)
        std::string system_state;
        if (emergency_stop_) {
            system_state = "EMERGENCY_STOP";
        } else if (string_count_ % 10 == 0) {
            system_state = "SELF_CHECK";
        } else if (string_count_ % 5 == 0) {
            system_state = "MONITORING";
        } else {
            system_state = "NORMAL";
        }
        
        // String template kullanarak mesaj oluşturma
        char buffer[256];
        snprintf(buffer, sizeof(buffer), string_template_.c_str(), 
                system_state.c_str(), this->get_clock()->now().seconds());
        
        message.data = std::string(buffer) + " | ID: " + std::to_string(string_count_++);
        
        // Mesajı yayınla
        string_publisher_->publish(message);
        
        RCLCPP_INFO(this->get_logger(), "📝 String yayınlandı: %s", system_state.c_str());
    }
    
    // =========================================================================
    // NUMBER TIMER CALLBACK - Sensör verileri simülasyonu
    // =========================================================================
    
    void number_timer_callback()
    {
        auto message = std_msgs::msg::Int32();
        
        // Rastgele sensör değeri üret
        message.data = number_distribution_(random_generator_);
        
        // Sensör değerlerine göre uyarı seviyesi belirle
        std::string severity = "NORMAL";
        if (message.data > (number_max_ * 0.9)) {
            severity = "HIGH";
            RCLCPP_WARN(this->get_logger(), "⚠️  Yüksek sensör değeri: %d", message.data);
        } else if (message.data < (number_max_ * 0.1)) {
            severity = "LOW";
            RCLCPP_WARN(this->get_logger(), "⚠️  Düşük sensör değeri: %d", message.data);
        }
        
        // Mesajı yayınla
        number_publisher_->publish(message);
        
        RCLCPP_INFO(this->get_logger(), "🔢 Sensör değeri: %d [%s] (#%zu)", 
                   message.data, severity.c_str(), number_count_++);
    }
    
    // =========================================================================
    // CMD_VEL TIMER CALLBACK - Robot hareket komutları
    // =========================================================================
    
    void cmd_vel_timer_callback()
    {
        // Emergency stop kontrolü
        if (emergency_stop_) {
            RCLCPP_WARN(this->get_logger(), "🛑 Emergency stop aktif - hareket komutu gönderilmedi!");
            return;
        }
        
        auto message = geometry_msgs::msg::Twist();
        
        // Hareket paternini belirleme (basit hareket döngüsü)
        // 0-40: İleri git
        // 41-50: Sola dön
        // 51-90: İleri git
        // 91-100: Sağa dön
        
        int pattern_step = cmd_vel_count_ % 100;
        
        if (pattern_step < 40 || (pattern_step >= 51 && pattern_step < 90)) {
            // İleri hareket
            message.linear.x = linear_speed_;
            message.angular.z = 0.0;
            RCLCPP_INFO(this->get_logger(), "🚗 İleri: %.2f m/s", linear_speed_);
            
        } else if (pattern_step >= 40 && pattern_step < 50) {
            // Sola dönüş
            message.linear.x = 0.0;
            message.angular.z = angular_speed_;
            RCLCPP_INFO(this->get_logger(), "↺ Sola dön: %.2f rad/s", angular_speed_);
            
        } else if (pattern_step >= 91) {
            // Sağa dönüş
            message.linear.x = 0.0;
            message.angular.z = -angular_speed_;
            RCLCPP_INFO(this->get_logger(), "↻ Sağa dön: %.2f rad/s", angular_speed_);
        }
        
        // Güvenlik kontrolü - son kez hızları kontrol et
        message.linear.x = std::clamp(message.linear.x, -max_linear_speed_, max_linear_speed_);
        message.angular.z = std::clamp(message.angular.z, -max_angular_speed_, max_angular_speed_);
        
        // Mesajı yayınla
        cmd_vel_publisher_->publish(message);
        
        cmd_vel_count_++;
        
        // Her 50 komutta bir özet bilgi
        if (cmd_vel_count_ % 50 == 0) {
            RCLCPP_INFO(this->get_logger(), "📊 Toplam %zu hareket komutu gönderildi", cmd_vel_count_);
        }
    }
    
    // =========================================================================
    // ÜYE DEĞİŞKENLER
    // =========================================================================
    
    // Publisher'lar
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr string_publisher_;
    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr number_publisher_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_publisher_;
    
    // Timer'lar
    rclcpp::TimerBase::SharedPtr string_timer_;
    rclcpp::TimerBase::SharedPtr number_timer_;
    rclcpp::TimerBase::SharedPtr cmd_vel_timer_;
    
    // Topic adları
    std::string string_topic_;
    std::string number_topic_;
    std::string cmd_vel_topic_;
    
    // Frekanslar
    double string_frequency_;
    double number_frequency_;
    double cmd_vel_frequency_;
    
    // Mesaj içerik parametreleri
    std::string string_template_;
    int number_min_;
    int number_max_;
    
    // Hareket parametreleri
    double linear_speed_;
    double angular_speed_;
    double max_linear_speed_;
    double max_angular_speed_;
    bool emergency_stop_;
    
    // Queue sizes
    int string_queue_size_;
    int number_queue_size_;
    int cmd_vel_queue_size_;
    
    // Sayaçlar
    size_t string_count_ = 0;
    size_t number_count_ = 0;
    size_t cmd_vel_count_ = 0;
    
    // Rastgele sayı üretici
    std::mt19937 random_generator_;
    std::uniform_int_distribution<int> number_distribution_;
};

// =============================================================================
// MAIN FONKSIYON
// =============================================================================

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ConfigurablePublisher>();
    
    RCLCPP_INFO(node->get_logger(), "🎯 ConfigurablePublisher çalışıyor... Durdurmak için Ctrl+C basın");
    RCLCPP_INFO(node->get_logger(), "📊 Sistem birden fazla topic'e mesaj yayınlıyor...");
    
    rclcpp::spin(node);
    
    RCLCPP_INFO(node->get_logger(), "🛑 ConfigurablePublisher durduruluyor...");
    rclcpp::shutdown();
    return 0;
}