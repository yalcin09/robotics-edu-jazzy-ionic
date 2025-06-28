#include <memory>

// ROS2 temel header dosyaları
#include "rclcpp/rclcpp.hpp"              // ROS2 C++ client library
#include "std_msgs/msg/string.hpp"        // String message türü için

/**
 * SimpleSubscriber sınıfı - rclcpp::Node'dan inherit eder
 * Bu sınıf gelen mesajları dinler ve işler
 */
class SimpleSubscriber : public rclcpp::Node
{
public:
    /**
     * Constructor - Node'u initialize eder
     */
    SimpleSubscriber() : Node("subscriber")
    {
        // Subscriber oluştur
        // Template parametresi: std_msgs::msg::String (beklenen message türü)
        // Topic adı: "robot_status" (publisher ile aynı topic)
        // Queue size: 10 (işlenemeyen mesajları buffer'da tut)
        // Callback fonksiyonu: message_callback (gelen mesaj işlenir)
        subscription_ = this->create_subscription<std_msgs::msg::String>(
            "robot_info",                             // Topic adı
            10,                                       // QoS queue size
            std::bind(&SimpleSubscriber::message_callback, this, std::placeholders::_1)
        );
        
        // Node başladığında log mesajı yazdır
        RCLCPP_INFO(this->get_logger(), "Simple Subscriber Node başlatildi! Mesajlari dinliyor...");
    }

private:
    /**
     * Message callback fonksiyonu - yeni mesaj geldiğinde çağrılır
     * @param msg: Gelen mesajın const referansı (shared_ptr)
     */
    void message_callback(const std_msgs::msg::String::SharedPtr msg)
    {
        // Gelen mesajı console'a yazdır
        RCLCPP_INFO(this->get_logger(), "Alinan mesaj: '%s'", msg->data.c_str());
        
        // Burada mesajla ilgili işlemler yapılabilir:
        // - Mesajı parse etme
        // - Robot komutlarına çevirme  
        // - Başka topic'lere mesaj gönderme
        // - Dosyaya log yazma vb.
        
        // Örnek: Mesaj içeriğini analiz et
        if (msg->data.find("Aktif") != std::string::npos) {
            RCLCPP_INFO(this->get_logger(), "✅ Robot aktif durumda!");
        } else {
            RCLCPP_WARN(this->get_logger(), "⚠️ Robot durumu belirsiz!");
        }
    }
    
    // Private member variable
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;  // Subscription pointer'ı
};

/**
 * Main fonksiyonu - programın giriş noktası
 */
int main(int argc, char * argv[])
{
    // ROS2 sistemini initialize et
    rclcpp::init(argc, argv);
    
    // SimpleSubscriber node'undan bir instance oluştur
    auto node = std::make_shared<SimpleSubscriber>();
    
    // Node'u çalıştır - gelen mesajları dinle
    // Bu blocking call'dur, node kapatılana kadar çalışır
    rclcpp::spin(node);
    
    // Program sonlandırılırken ROS2 sistemini temizle
    rclcpp::shutdown();
    
    return 0;
}