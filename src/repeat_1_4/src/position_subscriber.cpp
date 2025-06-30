#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "repeat_1_4/msg/position.hpp"

class PositionSubscriber : public rclcpp::Node
{
public:
    PositionSubscriber() : Node("position_subscriber")
    {
        // Subscriber oluştur
        subscription_ = this->create_subscription<repeat_1_4::msg::Position>(
            "robot_position", 10,
            std::bind(&PositionSubscriber::position_callback, this, std::placeholders::_1));
        
        RCLCPP_INFO(this->get_logger(), "👂 Position Subscriber başladı!");
    }

private:
    void position_callback(const repeat_1_4::msg::Position::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), 
            "📨 Robot pozisyonu: (%.2f, %.2f) - Durum: %s", 
            msg->x, msg->y, msg->status.c_str());
        
        // Basit analiz
        double distance_from_origin = std::sqrt(msg->x * msg->x + msg->y * msg->y);
        if (distance_from_origin > 5.0) {
            RCLCPP_WARN(this->get_logger(), "⚠️ Robot merkeze çok uzak!");
        }
    }
    
    rclcpp::Subscription<repeat_1_4::msg::Position>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PositionSubscriber>());
    rclcpp::shutdown();
    return 0;
}