#include <memory>
#include <string>
#include <iostream>
#include <sstream>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "day2/action/navigate.hpp"

using namespace std::chrono_literals;
using NavigateAction = day2::action::Navigate;
using GoalHandleNavigate = rclcpp_action::ClientGoalHandle<NavigateAction>;

/**
 * NavigateActionClient sınıfı
 * Interactive navigation action client
 */
class NavigateActionClient : public rclcpp::Node
{
public:
    NavigateActionClient() : Node("navigate_action_client")
    {
        // Action client oluştur
        action_client_ = rclcpp_action::create_client<NavigateAction>(this, "navigate");
        
        // Action server'ın hazır olmasını bekle
        if (!action_client_->wait_for_action_server(10s)) {
            RCLCPP_ERROR(this->get_logger(), "❌ Navigate action server bulunamadı!");
            return;
        }
        
        RCLCPP_INFO(this->get_logger(), "✅ Navigate Action Client hazır!");
        RCLCPP_INFO(this->get_logger(), "Interactive mode başlatılıyor...");
        
        // Interactive command loop başlat
        start_interactive_mode();
    }

private:
    /**
     * Interactive mode - kullanıcıdan navigation komutları al
     */
    void start_interactive_mode()
    {
        std::cout << "\n🧭 === NAVIGATION ACTION INTERFACE ===" << std::endl;
        std::cout << "Kullanılabilir komutlar:" << std::endl;
        std::cout << "  goto <x> <y> [z] [speed]    - Pozisyona git" << std::endl;
        std::cout << "  cancel                      - Mevcut navigasyonu iptal et" << std::endl;
        std::cout << "  status                      - Mevcut goal durumunu göster" << std::endl;
        std::cout << "  help                        - Bu yardımı göster" << std::endl;
        std::cout << "  exit                        - Çık" << std::endl;
        std::cout << "\nÖrnekler:" << std::endl;
        std::cout << "  goto 5.0 3.0               # (5,3,0) pozisyonuna git" << std::endl;
        std::cout << "  goto 2.0 4.0 1.0 0.5       # (2,4,1) pozisyonuna 0.5 m/s hızla git" << std::endl;
        std::cout << "  cancel                      # Mevcut navigasyonu durdur" << std::endl;
        std::cout << "\n" << std::endl;
        
        std::string input_line;
        while (rclcpp::ok()) {
            std::cout << "nav> ";
            std::getline(std::cin, input_line);
            
            if (input_line.empty()) continue;
            
            // Command'ı parse et ve çalıştır
            if (!process_command(input_line)) {
                break; // exit komutu
            }
        }
    }
    
    /**
     * Kullanıcı komutunu parse et ve çalıştır
     */
    bool process_command(const std::string& input)
    {
        std::istringstream iss(input);
        std::string command;
        iss >> command;
        
        if (command == "exit" || command == "quit") {
            std::cout << "👋 Navigate Action Client kapatılıyor..." << std::endl;
            return false;
        }
        else if (command == "help") {
            show_help();
        }
        else if (command == "goto") {
            handle_goto_command(iss);
        }
        else if (command == "cancel") {
            handle_cancel_command();
        }
        else if (command == "status") {
            handle_status_command();
        }
        else {
            std::cout << "❌ Bilinmeyen komut: " << command << std::endl;
            std::cout << "Yardım için 'help' yazın." << std::endl;
        }
        
        return true;
    }
    
    /**
     * Goto komutunu işle
     */
    void handle_goto_command(std::istringstream& iss)
    {
        double x, y, z = 0.0;
        float speed = 1.0;
        
        if (!(iss >> x >> y)) {
            std::cout << "❌ Hatalı format! Kullanım: goto <x> <y> [z] [speed]" << std::endl;
            return;
        }
        
        // Opsiyonel z ve speed parametreleri
        iss >> z >> speed;
        
        // Goal oluştur
        auto goal = NavigateAction::Goal();
        goal.target_pose.header.frame_id = "map";
        goal.target_pose.header.stamp = this->get_clock()->now();
        goal.target_pose.pose.position.x = x;
        goal.target_pose.pose.position.y = y;
        goal.target_pose.pose.position.z = z;
        goal.target_pose.pose.orientation.w = 1.0; // No rotation
        
        goal.max_speed = speed;
        goal.tolerance_distance = 0.1; // 10cm tolerance
        goal.tolerance_angle = 0.1; // ~6 degree tolerance
        goal.use_obstacle_avoidance = true;
        goal.planning_algorithm = "A*";
        goal.timeout_seconds = 60.0;
        goal.behavior_on_failure = "stop";
        
        send_navigation_goal(goal);
    }
    
    /**
     * Cancel komutunu işle
     */
    void handle_cancel_command()
    {
        if (!current_goal_handle_) {
            std::cout << "ℹ️ Aktif navigation goal yok" << std::endl;
            return;
        }
        
        std::cout << "🛑 Navigation iptal ediliyor..." << std::endl;
        
        auto cancel_future = action_client_->async_cancel_goal(current_goal_handle_);
        
        // Cancel result'ını bekle
        if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), cancel_future) ==
            rclcpp::FutureReturnCode::SUCCESS) {
            
            auto cancel_response = cancel_future.get();
            if (cancel_response->return_code == action_msgs::srv::CancelGoal::Response::ERROR_NONE) {
                std::cout << "✅ Navigation başarıyla iptal edildi" << std::endl;
            } else {
                std::cout << "❌ Navigation iptal edilemedi" << std::endl;
            }
        } else {
            std::cout << "❌ Cancel timeout!" << std::endl;
        }
        
        current_goal_handle_.reset();
    }
    
    /**
     * Status komutunu işle
     */
    void handle_status_command()
    {
        if (!current_goal_handle_) {
            std::cout << "ℹ️ Aktif navigation goal yok" << std::endl;
            return;
        }
        
        auto status = current_goal_handle_->get_status();
        std::cout << "📊 Navigation Status: " << get_status_string(status) << std::endl;
        
        // Son feedback'i göster
        if (last_feedback_) {
            std::cout << "  📍 Mevcut pozisyon: (" 
                     << last_feedback_->current_pose.pose.position.x << ", "
                     << last_feedback_->current_pose.pose.position.y << ", "
                     << last_feedback_->current_pose.pose.position.z << ")" << std::endl;
            std::cout << "  🎯 Hedefe mesafe: " << last_feedback_->distance_to_goal << " m" << std::endl;
            std::cout << "  📈 İlerleme: " << last_feedback_->completion_percentage << "%" << std::endl;
            std::cout << "  ⏱️ Tahmini kalan süre: " << last_feedback_->estimated_time_remaining << " s" << std::endl;
            std::cout << "  🚀 Mevcut hız: " << last_feedback_->current_speed << " m/s" << std::endl;
        }
    }
    
    /**
     * Navigation goal'ını gönder
     */
    void send_navigation_goal(const NavigateAction::Goal& goal)
    {
        std::cout << "🎯 Navigation goal gönderiliyor..." << std::endl;

        auto send_goal_options = rclcpp_action::Client<NavigateAction>::SendGoalOptions();

        // Yeni sürüme uygun callback tanımları:
        send_goal_options.goal_response_callback =
            [this](const GoalHandleNavigate::SharedPtr & goal_handle) {
                this->handle_goal_response(goal_handle);
            };

        send_goal_options.feedback_callback =
            [this](
                GoalHandleNavigate::SharedPtr,
                const std::shared_ptr<const NavigateAction::Feedback> feedback) {
                this->handle_feedback(feedback);
            };

        send_goal_options.result_callback =
            [this](const GoalHandleNavigate::WrappedResult & result) {
                this->handle_result(result);
            };

        auto goal_future = action_client_->async_send_goal(goal, send_goal_options);
    }
    
    /**
     * Goal response callback
     */
    void handle_goal_response(const GoalHandleNavigate::SharedPtr & goal_handle)
    {
        if (!goal_handle) {
            std::cout << "❌ Goal reddedildi!" << std::endl;
            return;
        }
        std::cout << "✅ Goal kabul edildi!" << std::endl;
        current_goal_handle_ = goal_handle;
    }
    
    /**
     * Feedback callback
     */
    void handle_feedback(const std::shared_ptr<const NavigateAction::Feedback> feedback)
    {
        last_feedback_ = feedback;
        
        // Progress bar göster
        show_progress_bar(feedback->completion_percentage);
        
        // Detaylı feedback (her %25'te bir)
        int progress_int = static_cast<int>(feedback->completion_percentage);
        if (progress_int > 0 && progress_int % 25 == 0 && progress_int != last_progress_shown_) {
            std::cout << "\n📊 Navigation Progress:" << std::endl;
            std::cout << "  📍 Pozisyon: (" 
                     << feedback->current_pose.pose.position.x << ", "
                     << feedback->current_pose.pose.position.y << ")" << std::endl;
            std::cout << "  🎯 Hedefe mesafe: " << feedback->distance_to_goal << " m" << std::endl;
            std::cout << "  🚀 Hız: " << feedback->current_speed << " m/s" << std::endl;
            std::cout << "  ⏱️ Kalan süre: " << feedback->estimated_time_remaining << " s" << std::endl;
            std::cout << "  📋 Durum: " << feedback->current_status << std::endl;
            
            last_progress_shown_ = progress_int;
        }
    }
    
    /**
     * Result callback
     */
    void handle_result(const GoalHandleNavigate::WrappedResult & result)
    {
        current_goal_handle_.reset();
        last_feedback_.reset();
        last_progress_shown_ = -1;
        
        std::cout << "\n\n🏁 === NAVIGATION TAMAMLANDI ===" << std::endl;
        
        switch (result.code) {
            case rclcpp_action::ResultCode::SUCCEEDED:
                std::cout << "✅ Durum: BAŞARILI" << std::endl;
                break;
            case rclcpp_action::ResultCode::ABORTED:
                std::cout << "❌ Durum: İPTAL EDİLDİ" << std::endl;
                break;
            case rclcpp_action::ResultCode::CANCELED:
                std::cout << "🛑 Durum: KULLANICI İPTALİ" << std::endl;
                break;
            default:
                std::cout << "❓ Durum: BİLİNMEYEN" << std::endl;
                break;
        }
        
        if (result.result) {
            auto res = result.result;
            std::cout << "💬 Mesaj: " << res->result_message << std::endl;
            std::cout << "📏 Kat edilen mesafe: " << res->total_distance_traveled << " m" << std::endl;
            std::cout << "⏱️ Toplam süre: " << res->total_time_elapsed << " s" << std::endl;
            std::cout << "📊 Ortalama hız: " << res->average_speed << " m/s" << std::endl;
            std::cout << "📈 Yol verimliliği: " << (res->path_efficiency * 100) << "%" << std::endl;
            std::cout << "🎯 Hareket yumuşaklığı: " << (res->smoothness_score * 100) << "%" << std::endl;
            
            if (res->error_code != NavigateAction::Result::ERROR_NONE) {
                std::cout << "⚠️ Hata kodu: " << res->error_code << std::endl;
            }
        }
        
        std::cout << "========================================\n" << std::endl;
    }
    
    /**
     * Progress bar göster
     */
    void show_progress_bar(float percentage)
    {
        const int bar_width = 30;
        std::cout << "\r🚀 [";
        
        int pos = static_cast<int>(bar_width * percentage / 100.0);
        for (int i = 0; i < bar_width; ++i) {
            if (i < pos) std::cout << "=";
            else if (i == pos) std::cout << ">";
            else std::cout << " ";
        }
        
        std::cout << "] " << std::fixed << std::setprecision(1) << percentage << "%";
        std::cout.flush();
    }
    
    /**
     * Status kodunu string'e çevir
     */
    std::string get_status_string(int8_t status)
    {
        switch (status) {
            case action_msgs::msg::GoalStatus::STATUS_UNKNOWN: return "UNKNOWN";
            case action_msgs::msg::GoalStatus::STATUS_ACCEPTED: return "ACCEPTED";
            case action_msgs::msg::GoalStatus::STATUS_EXECUTING: return "EXECUTING";
            case action_msgs::msg::GoalStatus::STATUS_CANCELING: return "CANCELING";
            case action_msgs::msg::GoalStatus::STATUS_SUCCEEDED: return "SUCCEEDED";
            case action_msgs::msg::GoalStatus::STATUS_CANCELED: return "CANCELED";
            case action_msgs::msg::GoalStatus::STATUS_ABORTED: return "ABORTED";
            default: return "INVALID";
        }
    }
    
    /**
     * Yardım mesajını göster
     */
    void show_help()
    {
        std::cout << "\n🆘 === NAVIGATION YARDIM ===" << std::endl;
        std::cout << "Komut formatları:" << std::endl;
        std::cout << "  goto <x> <y> [z] [speed]   - Robotu belirtilen pozisyona gönder" << std::endl;
        std::cout << "                               z: yükseklik (varsayılan: 0.0)" << std::endl;
        std::cout << "                               speed: hız m/s (varsayılan: 1.0)" << std::endl;
        std::cout << "  cancel                     - Mevcut navigasyonu iptal et" << std::endl;
        std::cout << "  status                     - Mevcut goal durumunu göster" << std::endl;
        std::cout << "  help                       - Bu yardımı göster" << std::endl;
        std::cout << "  exit                       - Programdan çık" << std::endl;
        std::cout << "\nÖrnekler:" << std::endl;
        std::cout << "  goto 10.0 5.0             # (10,5,0) pozisyonuna git" << std::endl;
        std::cout << "  goto 3.0 2.0 1.0 0.5      # (3,2,1) pozisyonuna 0.5 m/s hızla" << std::endl;
        std::cout << "  cancel                     # Navigasyonu durdur" << std::endl;
        std::cout << "============================\n" << std::endl;
    }
    
    // Member variables
    rclcpp_action::Client<NavigateAction>::SharedPtr action_client_;
    GoalHandleNavigate::SharedPtr current_goal_handle_;
    std::shared_ptr<const NavigateAction::Feedback> last_feedback_;
    int last_progress_shown_ = -1;
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    auto client_node = std::make_shared<NavigateActionClient>();
    // Interactive mode kendi loop'unu yönetir
    rclcpp::shutdown();
    return 0;
}