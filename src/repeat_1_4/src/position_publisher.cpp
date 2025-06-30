#include <chrono>
#include <memory>
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "repeat_1_4/msg/position.hpp"

using namespace std::chrono_literals;

class PositionPublisher : public rclcpp::Node
{
public:
    PositionPublisher() : Node("position_publisher"), x_(0.0), y_(0.0)
    {
        // Publisher oluştur
        publisher_ = this->create_publisher<repeat_1_4::msg::Position>("robot_position", 10);
        
        // Timer - her saniye position publish et
        timer_ = this->create_wall_timer(
            1s, std::bind(&PositionPublisher::publish_position, this));
        
        RCLCPP_INFO(this->get_logger(), "🤖 Position Publisher başladı!");
    }

private:
    void publish_position()
    {
        // Basit robot hareketi simüle et (daire çizer)
        static double angle = 0.0;
        x_ = 3.0 * std::cos(angle);  // 3 birim yarıçapta daire
        y_ = 3.0 * std::sin(angle);
        angle += 0.1;  // Her adımda 0.1 radian artır
        
        // Position message oluştur
        auto msg = repeat_1_4::msg::Position();
        msg.x = x_;
        msg.y = y_;
        msg.status = "moving";
        msg.timestamp = this->get_clock()->now();
        
        // Publish et
        publisher_->publish(msg);
        
        RCLCPP_INFO(this->get_logger(), "📍 Position: (%.2f, %.2f)", x_, y_);
    }
    
    rclcpp::Publisher<repeat_1_4::msg::Position>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    float x_, y_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PositionPublisher>());
    rclcpp::shutdown();
    return 0;
}