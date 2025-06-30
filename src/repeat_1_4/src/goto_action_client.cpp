#include <memory>
#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "repeat_1_4/action/go_to_point.hpp"

using namespace std::chrono_literals;
using GoToPointAction = repeat_1_4::action::GoToPoint;
using GoalHandle = rclcpp_action::ClientGoalHandle<GoToPointAction>;

class GoToActionClient : public rclcpp::Node
{
public:
    GoToActionClient() : Node("goto_action_client")
    {
        // Action client oluştur
        action_client_ = rclcpp_action::create_client<GoToPointAction>(this, "go_to_point");
        
        // Action server'ı bekle
        if (!action_client_->wait_for_action_server(10s)) {
            RCLCPP_ERROR(this->get_logger(), "❌ Action server bulunamadı!");
            return;
        }
        
        RCLCPP_INFO(this->get_logger(), "✅ GoTo Action Client hazır!");
    }
    
    void send_goal(double x, double y)
    {
        auto goal = GoToPointAction::Goal();
        goal.target_x = x;
        goal.target_y = y;
        
        RCLCPP_INFO(this->get_logger(), "🎯 Goal gönderiliyor: (%.2f, %.2f)", x, y);
        
        // Send goal options
        auto send_goal_options = rclcpp_action::Client<GoToPointAction>::SendGoalOptions();
        
        // Feedback callback
        send_goal_options.feedback_callback = 
            [this](GoalHandle::SharedPtr, const std::shared_ptr<const GoToPointAction::Feedback> feedback) {
                std::cout << "\r🚀 Progress: " << static_cast<int>(feedback->progress) 
                         << "% - Position: (" << feedback->current_x << ", " << feedback->current_y << ")";
                std::cout.flush();
            };
        
        // Result callback
        send_goal_options.result_callback = 
            [this](const GoalHandle::WrappedResult & result) {
                std::cout << std::endl;
                switch (result.code) {
                    case rclcpp_action::ResultCode::SUCCEEDED:
                        RCLCPP_INFO(this->get_logger(), 
                            "✅ Başarılı: %s - Final: (%.2f, %.2f)", 
                            result.result->message.c_str(),
                            result.result->final_x, result.result->final_y);
                        break;
                    case rclcpp_action::ResultCode::CANCELED:
                        RCLCPP_INFO(this->get_logger(), "🛑 İptal edildi");
                        break;
                    case rclcpp_action::ResultCode::ABORTED:
                        RCLCPP_ERROR(this->get_logger(), "❌ Başarısız");
                        break;
                }
            };
        
        // Goal gönder
        action_client_->async_send_goal(goal, send_goal_options);
    }

private:
    rclcpp_action::Client<GoToPointAction>::SharedPtr action_client_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto client_node = std::make_shared<GoToActionClient>();
    
    // Test goal'ları gönder
    client_node->send_goal(5.0, 3.0);
    
    // Action tamamlanana kadar spin et
    rclcpp::spin(client_node);
    
    rclcpp::shutdown();
    return 0;
}