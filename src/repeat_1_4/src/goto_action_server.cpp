#include <memory>
#include <thread>
#include <chrono>
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "repeat_1_4/action/go_to_point.hpp"

using namespace std::chrono_literals;
using GoToPointAction = repeat_1_4::action::GoToPoint;
using GoalHandle = rclcpp_action::ServerGoalHandle<GoToPointAction>;

class GoToActionServer : public rclcpp::Node
{
public:
    GoToActionServer() : Node("goto_action_server"), current_x_(0.0), current_y_(0.0)
    {
        // Action server oluştur
        /*action_server_ = rclcpp_action::create_server<GoToPointAction>(
            this, "go_to_point",
            std::bind(&GoToActionServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            std::bind(&GoToActionServer::handle_cancel, this, std::placeholders::_1),
            std::bind(&GoToActionServer::handle_accepted, this, std::placeholders::_2));*/

        action_server_ = rclcpp_action::create_server<GoToPointAction>(
            this,
            "go_to_point",
            std::bind(&GoToActionServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            std::bind(&GoToActionServer::handle_cancel, this, std::placeholders::_1),
            std::bind(&GoToActionServer::handle_accepted, this, std::placeholders::_1),
            rcl_action_server_get_default_options(),
            nullptr
        );

        
        RCLCPP_INFO(this->get_logger(), "🎯 GoTo Action Server başladı!");
    }

private:
    rclcpp_action::GoalResponse handle_goal(
        const rclcpp_action::GoalUUID & uuid,
        std::shared_ptr<const GoToPointAction::Goal> goal)
    {
        (void)uuid;
        
        RCLCPP_INFO(this->get_logger(), 
            "🎯 Yeni goal: (%.2f, %.2f)", goal->target_x, goal->target_y);
        
        // Basit validation
        double distance = std::sqrt(goal->target_x * goal->target_x + goal->target_y * goal->target_y);
        if (distance > 10.0) {
            RCLCPP_WARN(this->get_logger(), "❌ Goal çok uzak, reddedildi");
            return rclcpp_action::GoalResponse::REJECT;
        }
        
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }
    
    rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<GoalHandle> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "🛑 Cancel isteği");
        (void)goal_handle;
        return rclcpp_action::CancelResponse::ACCEPT;
    }
    
    void handle_accepted(const std::shared_ptr<GoalHandle> goal_handle)
    {
        // Execution'ı ayrı thread'de başlat
        std::thread{std::bind(&GoToActionServer::execute_goto, this, goal_handle)}.detach();
    }
    
    void execute_goto(const std::shared_ptr<GoalHandle> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "🚀 GoTo execution başladı");
        
        const auto goal = goal_handle->get_goal();
        auto feedback = std::make_shared<GoToPointAction::Feedback>();
        auto result = std::make_shared<GoToPointAction::Result>();
        
        // Başlangıç ve hedef pozisyonları
        double start_x = current_x_;
        double start_y = current_y_;
        double target_x = goal->target_x;
        double target_y = goal->target_y;
        
        // 10 adımda hedefe git
        for (int step = 0; step <= 10; ++step) {
            // Cancel check
            if (goal_handle->is_canceling()) {
                result->success = false;
                result->message = "Goal cancelled";
                result->final_x = current_x_;
                result->final_y = current_y_;
                goal_handle->canceled(result);
                RCLCPP_INFO(this->get_logger(), "🛑 Goal cancelled");
                return;
            }
            
            // Progress hesapla
            double progress = static_cast<double>(step) / 10.0;
            
            // Linear interpolation ile pozisyon güncelle
            current_x_ = start_x + (target_x - start_x) * progress;
            current_y_ = start_y + (target_y - start_y) * progress;
            
            // Feedback gönder
            feedback->current_x = current_x_;
            feedback->current_y = current_y_;
            feedback->progress = progress * 100.0;
            goal_handle->publish_feedback(feedback);
            
            RCLCPP_INFO(this->get_logger(), 
                "📊 Progress: %.0f%% - Position: (%.2f, %.2f)", 
                feedback->progress, current_x_, current_y_);
            
            // Simulated delay
            std::this_thread::sleep_for(500ms);
        }
        
        // Başarılı sonuç
        result->success = true;
        result->message = "Hedefe ulaşıldı!";
        result->final_x = current_x_;
        result->final_y = current_y_;
        goal_handle->succeed(result);
        
        RCLCPP_INFO(this->get_logger(), "🎉 GoTo tamamlandı!");
    }
    
    rclcpp_action::Server<GoToPointAction>::SharedPtr action_server_;
    double current_x_, current_y_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<GoToActionServer>());
    rclcpp::shutdown();
    return 0;
}