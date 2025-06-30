#include <memory>
#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "repeat_1_4/srv/move_robot.hpp"

class MoveServiceClient : public rclcpp::Node
{
public:
    MoveServiceClient() : Node("move_service_client")
    {
        // Service client oluştur
        client_ = this->create_client<repeat_1_4::srv::MoveRobot>("move_robot");
        
        // Service'i bekle
        while (!client_->wait_for_service(std::chrono::seconds(1))) {
            if (!rclcpp::ok()) {
                RCLCPP_ERROR(this->get_logger(), "Client interrupted");
                return;
            }
            RCLCPP_INFO(this->get_logger(), "⏳ Service bekleniyor...");
        }
        
        RCLCPP_INFO(this->get_logger(), "✅ Move Service Client hazır!");
    }
    
    void send_move_request(double x, double y, double speed = 1.0)
    {
        auto request = std::make_shared<repeat_1_4::srv::MoveRobot::Request>();
        request->target_x = x;
        request->target_y = y;
        request->speed = speed;
        
        RCLCPP_INFO(this->get_logger(), 
            "📤 Hareket isteği gönderiliyor: (%.2f, %.2f)", x, y);
        
        // Async call
        auto future = client_->async_send_request(request);
        
        // Response'u bekle
        if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), future) ==
            rclcpp::FutureReturnCode::SUCCESS) {
            
            auto response = future.get();
            if (response->success) {
                RCLCPP_INFO(this->get_logger(), 
                    "✅ Başarılı: %s (mesafe: %.2f)", 
                    response->message.c_str(), response->distance);
            } else {
                RCLCPP_ERROR(this->get_logger(), 
                    "❌ Başarısız: %s", response->message.c_str());
            }
        } else {
            RCLCPP_ERROR(this->get_logger(), "❌ Service call timeout!");
        }
    }

private:
    rclcpp::Client<repeat_1_4::srv::MoveRobot>::SharedPtr client_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto client_node = std::make_shared<MoveServiceClient>();
    
    // Basit test komutları
    client_node->send_move_request(3.0, 4.0, 1.5);  // İlk hareket
    std::this_thread::sleep_for(std::chrono::seconds(1));
    
    client_node->send_move_request(-2.0, 1.0, 0.8); // İkinci hareket
    std::this_thread::sleep_for(std::chrono::seconds(1));
    
    client_node->send_move_request(15.0, 20.0, 2.0); // Hatalı hareket (çok uzak)
    
    rclcpp::shutdown();
    return 0;
}