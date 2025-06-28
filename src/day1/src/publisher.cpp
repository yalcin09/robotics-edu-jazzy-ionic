#include <chrono>
#include <memory>
#include <string>


// ROS2 temel dosyaları
#include "rclcpp/rclcpp.hpp"           // ROS2 C++ client library
#include "std_msgs/msg/string.hpp"     // String message türü için

using namespace std::chrono_literals;  //1s, 500ms gibi time literals için

/***
 * SimplePublisher sınıfı - rclcpp::Node'dan inherit eder
 * Bu sınıf bir ROS2 node'u temsil eder ve publisher functionality'si sağlar
 */

 class SimplePublisher : public rclcpp::Node{

    public:
        SimplePublisher() : Node("publisher"), count_(0){
            // Publisher oluştur
            // Template parametresi: std_msgs::msg::Stirng(messsage türü)
            // Topic adı: "robot_info"
            // Queue size : 10 (Gönderilmeyen mesajları buffer'da tut)
            publisher_ = this->create_publisher<std_msgs::msg::String>("robot_info", 10);

            // Timer oluşturma - her 500ms'de bir publisher_message() fonksiyonu çağır
            // Bu timer callback-based asenkron çalışır
            timer_ = this->create_wall_timer(
                500ms,                                              // Timer periyodu
                std::bind(&SimplePublisher::publish_message, this)  // callback fonksiyonu
            );

            // Node başladığında log mesajı yazdır.
            RCLCPP_INFO(this->get_logger(), "Publisher Node başlatird....");
        }

        private:
            /***
             * Timer callback fonksiyonunu - periyodik olarak çağılır
             * Burada message oluşturup publish edilir
             */

            void publish_message(){
                // Yeni bir string message oluştur
                auto message = std_msgs::msg::String();

                // Message içeriğini oluştur
                message.data = "Robot Durumu: Aktif - Mesaj #" + std::to_string(count_++);

                // Message publish et.
                publisher_->publish(message);

                // Console'a log yazdır - hangi mesajın gönderildiğini göster
                RCLCPP_INFO(this->get_logger(), "Gönderilen Mesaj: '%s'", message.data.c_str());
            }

            // Private member variales
            rclcpp::TimerBase::SharedPtr timer_;
            rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
            size_t count_;
 };

 int main(int argc, char *argv[]){

    // ROS2 sistemini initialize et
    // argc, argv: command line arguments (ROS2 parametreleri için)
    rclcpp::init(argc, argv);

    // SimplePublisher node'undan bir instance oluştur
    // make_shared: shared_ptr ile memory management
    auto node = std::make_shared<SimplePublisher>();

    // Node'u çalıştır - bu blocking call'dur
    // Node kapatılana kadar burada bekler ve callback'leri işler
    rclcpp::spin(node);

    //Program sonlandılırken ROS2 sistemini temizle
    rclcpp::shutdown();

    return 0;
 }