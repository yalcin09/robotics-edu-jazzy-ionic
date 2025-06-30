// Dosya: ~/ros2_ws/src/repeat_1_4/src/move_service_server.cpp

#include <memory>
#include <cmath>
#include "rclcpp/rclcpp.hpp"
#include "repeat_1_4/srv/move_robot.hpp"

class MoveServiceServer : public rclcpp::Node
{
public:
    MoveServiceServer() : Node("move_service_server"), current_x_(0.0), current_y_(0.0)
    {
        // Service server oluştur
        service_ = this->create_service<repeat_1_4::srv::MoveRobot>(
            "move_robot",
            std::bind(&MoveServiceServer::handle_move_request, this,
                     std::placeholders::_1, std::placeholders::_2));
        
        RCLCPP_INFO(this->get_logger(), "🚚 Move Service Server başladı!");
        RCLCPP_INFO(this->get_logger(), "Service: /move_robot");
    }

private:
    void handle_move_request(
        const std::shared_ptr<repeat_1_4::srv::MoveRobot::Request> request,
        std::shared_ptr<repeat_1_4::srv::MoveRobot::Response> response)
    {
        RCLCPP_INFO(this->get_logger(), 
            "📥 Hareket isteği: (%.2f, %.2f) hız: %.2f", 
            request->target_x, request->target_y, request->speed);
        
        // Mesafe hesapla
        double distance = std::sqrt(
            std::pow(request->target_x - current_x_, 2) + 
            std::pow(request->target_y - current_y_, 2)
        );
        
        // Basit validation
        if (distance > 10.0) {
            response->success = false;
            response->message = "Hedef çok uzak! (max 10 birim)";
            response->distance = distance;
            RCLCPP_WARN(this->get_logger(), "❌ Hedef reddedildi: çok uzak");
            return;
        }
        
        if (request->speed <= 0 || request->speed > 5.0) {
            response->success = false;
            response->message = "Geçersiz hız! (0-5 arası olmalı)";
            response->distance = distance;
            RCLCPP_WARN(this->get_logger(), "❌ Geçersiz hız");
            return;
        }
        
        // Başarılı response
        response->success = true;
        response->message = "Hareket komutu kabul edildi";
        response->distance = distance;
        
        // Robot pozisyonunu güncelle (simulated)
        current_x_ = request->target_x;
        current_y_ = request->target_y;
        
        RCLCPP_INFO(this->get_logger(), 
            "✅ Hareket tamamlandı: (%.2f, %.2f) mesafe: %.2f", 
            current_x_, current_y_, distance);
    }
    
    rclcpp::Service<repeat_1_4::srv::MoveRobot>::SharedPtr service_;
    double current_x_, current_y_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MoveServiceServer>());
    rclcpp::shutdown();
    return 0;
}