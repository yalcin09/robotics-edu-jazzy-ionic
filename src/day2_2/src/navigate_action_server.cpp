#include <memory>
#include <thread>
#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "day2/action/navigate.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "geometry_msgs/msg/point.hpp"

using namespace std::chrono_literals;
using NavigateAction = day2::action::Navigate;
using GoalHandleNavigate = rclcpp_action::ServerGoalHandle<NavigateAction>;

/**
 * NavigateActionServer sınıfı
 * Robot navigation için action server implementation
 */
class NavigateActionServer : public rclcpp::Node
{
public:
    NavigateActionServer() : Node("navigate_action_server")
    {
        // Action server oluştur
        /*action_server_ = rclcpp_action::create_server<NavigateAction>(
            this,
            "navigate",  // Action adı
            std::bind(&NavigateActionServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            std::bind(&NavigateActionServer::handle_cancel, this, std::placeholders::_1),
            std::bind(&NavigateActionServer::handle_accepted, this, std::placeholders::_2));*/

        action_server_ = rclcpp_action::create_server<NavigateAction>(
            this->get_node_base_interface(),
            this->get_node_clock_interface(),
            this->get_node_logging_interface(),
            this->get_node_waitables_interface(),
            "navigate",
            std::bind(&NavigateActionServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            std::bind(&NavigateActionServer::handle_cancel, this, std::placeholders::_1),
            std::bind(&NavigateActionServer::handle_accepted, this, std::placeholders::_1)  // dikkat: _2 değil _1 olacak
        );

        
        // Robot başlangıç pozisyonu
        current_pose_.header.frame_id = "map";
        current_pose_.pose.position.x = 0.0;
        current_pose_.pose.position.y = 0.0;
        current_pose_.pose.position.z = 0.0;
        current_pose_.pose.orientation.w = 1.0;
        
        RCLCPP_INFO(this->get_logger(), "🧭 Navigate Action Server başlatıldı!");
        RCLCPP_INFO(this->get_logger(), "Action: /navigate");
        RCLCPP_INFO(this->get_logger(), "Navigasyon komutlarını kabul etmeye hazır...");
    }

private:
    /**
     * Goal handling - yeni navigation goal'ı geldiğinde çağrılır
     */
    rclcpp_action::GoalResponse handle_goal(
        const rclcpp_action::GoalUUID & uuid,
        std::shared_ptr<const NavigateAction::Goal> goal)
    {
        (void)uuid;  // Unused parameter warning'i önlemek için
        
        RCLCPP_INFO(this->get_logger(), 
            "🎯 Yeni navigation goal'ı alındı: (%.2f, %.2f, %.2f)", 
            goal->target_pose.pose.position.x,
            goal->target_pose.pose.position.y, 
            goal->target_pose.pose.position.z);
        
        // Goal validation
        if (!is_goal_valid(goal)) {
            RCLCPP_WARN(this->get_logger(), "❌ Geçersiz goal reddedildi");
            return rclcpp_action::GoalResponse::REJECT;
        }
        
        // Goal kabul et
        RCLCPP_INFO(this->get_logger(), "✅ Goal kabul edildi");
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }
    
    /**
     * Cancel handling - navigation iptal edildiğinde çağrılır
     */
    rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<GoalHandleNavigate> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "🛑 Navigation cancel isteği alındı");
        (void)goal_handle;
        
        // Cancel'ı kabul et
        return rclcpp_action::CancelResponse::ACCEPT;
    }
    
    /**
     * Goal accepted - goal kabul edildikten sonra execution başlar
     */
    void handle_accepted(const std::shared_ptr<GoalHandleNavigate> goal_handle)
    {
        // Execution'ı ayrı thread'de başlat (non-blocking)
        std::thread{std::bind(&NavigateActionServer::execute_navigation, this, goal_handle)}.detach();
    }
    
    /**
     * Ana navigation execution fonksiyonu
     */
    void execute_navigation(const std::shared_ptr<GoalHandleNavigate> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "🚀 Navigation execution başladı");
        
        const auto goal = goal_handle->get_goal();
        auto feedback = std::make_shared<NavigateAction::Feedback>();
        auto result = std::make_shared<NavigateAction::Result>();
        
        // Navigation parametrelerini ayarla
        auto start_time = std::chrono::steady_clock::now();
        auto target_pose = goal->target_pose;
        double total_distance = calculate_distance(current_pose_.pose.position, target_pose.pose.position);
        double max_speed = goal->max_speed > 0 ? goal->max_speed : 1.0; // Default 1.0 m/s
        
        RCLCPP_INFO(this->get_logger(), 
            "📏 Toplam mesafe: %.2f m, Maksimum hız: %.2f m/s", total_distance, max_speed);
        
        // Navigation simülasyonu
        const int total_steps = 100;  // 100 adımda hedefe ulaş
        double traveled_distance = 0.0;
        
        for (int step = 0; step <= total_steps; ++step) {
            // Cancel check
            if (goal_handle->is_canceling()) {
                handle_navigation_cancel(goal_handle, result);
                return;
            }
            
            // Progress hesapla
            double progress = static_cast<double>(step) / total_steps;
            
            // Pozisyonu güncelle (linear interpolation)
            update_current_position(target_pose, progress);
            
            // Feedback oluştur ve gönder
            create_and_send_feedback(goal_handle, feedback, progress, total_distance, start_time);
            
            // Simulation delay
            std::this_thread::sleep_for(100ms);  // 100ms per step = ~10 second total
            
            // Distance tracking
            if (step > 0) {
                traveled_distance += total_distance / total_steps;
            }
        }
        
        // Navigation completed successfully
        complete_navigation_success(goal_handle, result, traveled_distance, start_time);
    }
    
    /**
     * Navigation cancel handling
     */
    void handle_navigation_cancel(
        const std::shared_ptr<GoalHandleNavigate> goal_handle,
        std::shared_ptr<NavigateAction::Result> result)
    {
        result->success = false;
        result->result_message = "Navigation cancelled by user request";
        result->error_code = NavigateAction::Result::ERROR_PREEMPTED;
        result->final_pose = current_pose_;
        
        goal_handle->canceled(result);
        RCLCPP_INFO(this->get_logger(), "🛑 Navigation cancelled");
    }
    
    /**
     * Navigation başarılı completion
     */
    void complete_navigation_success(
        const std::shared_ptr<GoalHandleNavigate> goal_handle,
        std::shared_ptr<NavigateAction::Result> result,
        double traveled_distance,
        std::chrono::steady_clock::time_point start_time)
    {
        auto end_time = std::chrono::steady_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
        double elapsed_seconds = duration.count() / 1000.0;
        
        // Result oluştur
        result->success = true;
        result->result_message = "Navigation completed successfully";
        result->final_pose = current_pose_;
        result->total_distance_traveled = traveled_distance;
        result->total_time_elapsed = elapsed_seconds;
        result->average_speed = traveled_distance / elapsed_seconds;
        result->obstacle_encounters = 0; // Simulated
        result->path_efficiency = 0.95; // Simulated
        result->smoothness_score = 0.88; // Simulated
        result->replanning_count = 0;
        result->error_code = NavigateAction::Result::ERROR_NONE;
        
        goal_handle->succeed(result);
        
        RCLCPP_INFO(this->get_logger(), 
            "🎉 Navigation başarıyla tamamlandı! Süre: %.1fs, Mesafe: %.2fm, Hız: %.2fm/s", 
            elapsed_seconds, traveled_distance, result->average_speed);
    }
    
    /**
     * Feedback oluştur ve gönder
     */
    void create_and_send_feedback(
        const std::shared_ptr<GoalHandleNavigate> goal_handle,
        std::shared_ptr<NavigateAction::Feedback> feedback,
        double progress,
        double total_distance,
        std::chrono::steady_clock::time_point start_time)
    {
        // Current pose
        feedback->current_pose = current_pose_;
        
        // Distance calculations
        feedback->distance_to_goal = total_distance * (1.0 - progress);
        feedback->completion_percentage = progress * 100.0;
        
        // Time estimates
        auto now = std::chrono::steady_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(now - start_time);
        double elapsed_seconds = elapsed.count() / 1000.0;
        
        if (progress > 0.1) {  // Avoid division by very small numbers
            double estimated_total_time = elapsed_seconds / progress;
            feedback->estimated_time_remaining = estimated_total_time - elapsed_seconds;
        } else {
            feedback->estimated_time_remaining = 10.0; // Default estimate
        }
        
        // Speed calculation
        if (elapsed_seconds > 0) {
            feedback->current_speed = (total_distance * progress) / elapsed_seconds;
        } else {
            feedback->current_speed = 0.0;
        }
        
        // Status information
        feedback->obstacle_detected = false; // Simulated
        feedback->current_status = get_navigation_status(progress);
        feedback->path_deviation = 0.1 * (rand() % 10) / 10.0; // Random small deviation
        feedback->battery_consumption_rate = 0.02; // Simulated
        
        // Performance metrics (simulated)
        feedback->cpu_usage = 25.0 + (rand() % 20);
        feedback->memory_usage = 40.0 + (rand() % 15);
        feedback->last_update_time = this->get_clock()->now();
        
        // Send feedback
        goal_handle->publish_feedback(feedback);
        
        // Debug log (occasional)
        if (static_cast<int>(progress * 100) % 20 == 0) {  // Every 20%
            RCLCPP_INFO(this->get_logger(), 
                "📊 Progress: %.0f%%, Distance to goal: %.2fm, Speed: %.2fm/s", 
                feedback->completion_percentage, 
                feedback->distance_to_goal, 
                feedback->current_speed);
        }
    }
    
    /**
     * Current position güncelle (simulation)
     */
    void update_current_position(const geometry_msgs::msg::PoseStamped& target, double progress)
    {
        // Linear interpolation between current and target
        geometry_msgs::msg::Point start = current_pose_.pose.position;
        geometry_msgs::msg::Point end = target.pose.position;
        
        current_pose_.pose.position.x = start.x + (end.x - start.x) * progress;
        current_pose_.pose.position.y = start.y + (end.y - start.y) * progress;
        current_pose_.pose.position.z = start.z + (end.z - start.z) * progress;
        
        // Update timestamp
        current_pose_.header.stamp = this->get_clock()->now();
    }
    
    /**
     * Goal validation
     */
    bool is_goal_valid(std::shared_ptr<const NavigateAction::Goal> goal)
    {
        // Workspace limits check
        const double workspace_limit = 50.0; // 50m limit
        
        if (std::abs(goal->target_pose.pose.position.x) > workspace_limit ||
            std::abs(goal->target_pose.pose.position.y) > workspace_limit ||
            std::abs(goal->target_pose.pose.position.z) > 10.0) {
            RCLCPP_WARN(this->get_logger(), "❌ Goal workspace sınırları dışında");
            return false;
        }
        
        // Speed limit check
        if (goal->max_speed > 5.0) {
            RCLCPP_WARN(this->get_logger(), "❌ Maksimum hız limiti aşıldı");
            return false;
        }
        
        // Distance check
        double distance = calculate_distance(current_pose_.pose.position, goal->target_pose.pose.position);
        if (distance < 0.01) {
            RCLCPP_WARN(this->get_logger(), "❌ Hedef çok yakın (mevcut pozisyon)");
            return false;
        }
        
        return true;
    }
    
    /**
     * İki nokta arası mesafe hesaplama
     */
    double calculate_distance(const geometry_msgs::msg::Point& p1, const geometry_msgs::msg::Point& p2)
    {
        return std::sqrt(
            std::pow(p2.x - p1.x, 2) + 
            std::pow(p2.y - p1.y, 2) + 
            std::pow(p2.z - p1.z, 2)
        );
    }
    
    /**
     * Navigation status açıklaması
     */
    std::string get_navigation_status(double progress)
    {
        if (progress < 0.1) return "Starting navigation";
        else if (progress < 0.3) return "Initial movement";
        else if (progress < 0.7) return "Cruising to target";
        else if (progress < 0.9) return "Approaching target";
        else return "Final positioning";
    }
    
    // Member variables
    rclcpp_action::Server<NavigateAction>::SharedPtr action_server_;
    geometry_msgs::msg::PoseStamped current_pose_;
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<NavigateActionServer>();
    
    RCLCPP_INFO(node->get_logger(), "Navigate Action Server hazır!");
    RCLCPP_INFO(node->get_logger(), "Test komutu:");
    RCLCPP_INFO(node->get_logger(), "  ros2 action send_goal /navigate day2/action/Navigate \"{}\"");
    
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}