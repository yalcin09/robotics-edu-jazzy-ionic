// Dosya: ~/ros2_ws/src/advanced_robot/src/robot_command_client.cpp

#include <chrono>
#include <memory>
#include <string>
#include <iostream>
#include <sstream>

#include "rclcpp/rclcpp.hpp"
#include "day2/srv/robot_command.hpp"
#include "geometry_msgs/msg/point.hpp"
#include "geometry_msgs/msg/vector3.hpp"

using namespace std::chrono_literals;

/**
 * RobotCommandClient sınıfı
 * Interactive command line interface ile robot komutları gönderir
 */
class RobotCommandClient : public rclcpp::Node
{
public:
    RobotCommandClient() : Node("robot_command_client")
    {
        // Service client oluştur
        client_ = this->create_client<day2::srv::RobotCommand>("robot_command");
        
        // Service server'ın hazır olmasını bekle
        while (!client_->wait_for_service(1s)) {
            if (!rclcpp::ok()) {
                RCLCPP_ERROR(this->get_logger(), "Client interrupted while waiting for service");
                return;
            }
            RCLCPP_INFO(this->get_logger(), "⏳ Waiting for robot_command service...");
        }
        
        RCLCPP_INFO(this->get_logger(), "✅ Robot Command Client hazır!");
        RCLCPP_INFO(this->get_logger(), "Interactive mode başlatılıyor...");
        
        // Interactive command loop başlat
        start_interactive_mode();
    }

private:
    /**
     * Interactive mode - kullanıcıdan komut al
     */
    void start_interactive_mode()
    {
        std::cout << "\n🤖 === ROBOT COMMAND INTERFACE ===" << std::endl;
        std::cout << "Kullanılabilir komutlar:" << std::endl;
        std::cout << "  1. move <x> <y> <z>     - Pozisyona git" << std::endl;
        std::cout << "  2. rotate <yaw>         - Belirtilen açıya dön (radyan)" << std::endl;
        std::cout << "  3. stop                 - Robotu durdur" << std::endl;
        std::cout << "  4. home                 - Home pozisyonuna git" << std::endl;
        std::cout << "  5. status               - Robot durumunu al" << std::endl;
        std::cout << "  6. help                 - Bu yardımı göster" << std::endl;
        std::cout << "  7. exit                 - Çık" << std::endl;
        std::cout << "\nÖrnekler:" << std::endl;
        std::cout << "  move 2.5 3.0 0.0" << std::endl;
        std::cout << "  rotate 1.57" << std::endl;
        std::cout << "  stop" << std::endl;
        std::cout << "\n" << std::endl;
        
        std::string input_line;
        while (rclcpp::ok()) {
            std::cout << "robot> ";
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
            std::cout << "👋 Robot Command Client kapatılıyor..." << std::endl;
            return false;
        }
        else if (command == "help") {
            show_help();
        }
        else if (command == "move") {
            handle_move_command(iss);
        }
        else if (command == "rotate") {
            handle_rotate_command(iss);
        }
        else if (command == "stop") {
            handle_stop_command();
        }
        else if (command == "home") {
            handle_home_command();
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
     * Move komutunu işle
     */
    void handle_move_command(std::istringstream& iss)
    {
        double x, y, z;
        if (!(iss >> x >> y >> z)) {
            std::cout << "❌ Hatalı format! Kullanım: move <x> <y> <z>" << std::endl;
            return;
        }
        
        auto request = std::make_shared<day2::srv::RobotCommand::Request>();
        request->command_type = "move_to";
        request->target_position.x = x;
        request->target_position.y = y;
        request->target_position.z = z;
        request->max_velocity = 1.0; // Default hız
        request->max_acceleration = 0.5;
        request->timeout_seconds = 30.0;
        request->force_execution = false;
        
        send_command_async(request, "move");
    }
    
    /**
     * Rotate komutunu işle
     */
    void handle_rotate_command(std::istringstream& iss)
    {
        double yaw;
        if (!(iss >> yaw)) {
            std::cout << "❌ Hatalı format! Kullanım: rotate <yaw_radyan>" << std::endl;
            return;
        }
        
        auto request = std::make_shared<day2::srv::RobotCommand::Request>();
        request->command_type = "rotate";
        request->target_orientation.z = yaw;
        request->max_velocity = 1.0;
        request->timeout_seconds = 15.0;
        
        send_command_async(request, "rotate");
    }
    
    /**
     * Stop komutunu işle
     */
    void handle_stop_command()
    {
        auto request = std::make_shared<day2::srv::RobotCommand::Request>();
        request->command_type = "stop";
        request->force_execution = true; // Acil durdurma
        
        send_command_async(request, "stop");
    }
    
    /**
     * Home komutunu işle
     */
    void handle_home_command()
    {
        auto request = std::make_shared<day2::srv::RobotCommand::Request>();
        request->command_type = "home";
        request->max_velocity = 1.0;
        request->timeout_seconds = 30.0;
        
        send_command_async(request, "home");
    }
    
    /**
     * Status komutunu işle
     */
    void handle_status_command()
    {
        auto request = std::make_shared<day2::srv::RobotCommand::Request>();
        request->command_type = "status";
        
        send_command_async(request, "status");
    }
    
    /**
     * Komutu asynchronous olarak gönder
     */
    void send_command_async(
        std::shared_ptr<day2::srv::RobotCommand::Request> request,
        const std::string& command_name)
    {
        std::cout << "📤 " << command_name << " komutu gönderiliyor..." << std::endl;
        
        // Timestamp ekle
        request->deadline = this->get_clock()->now();
        request->deadline.sec += static_cast<int>(request->timeout_seconds);
        
        // Async call
        auto future = client_->async_send_request(request);
        
        // Response'u bekle (non-blocking için spin_until_future_complete kullan)
        if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), future) ==
            rclcpp::FutureReturnCode::SUCCESS) {
            
            auto response = future.get();
            handle_service_response(response, command_name);
        } else {
            std::cout << "❌ Service call timeout! Robot yanıt vermiyor." << std::endl;
        }
    }
    
    /**
     * Service response'unu işle ve göster
     */
    void handle_service_response(
        std::shared_ptr<day2::srv::RobotCommand::Response> response,
        const std::string& command_name)
    {
        std::cout << "\n📨 === " << command_name << " KOMUTU YANITI ===" << std::endl;
        
        if (response->success) {
            std::cout << "✅ Durum: BAŞARILI" << std::endl;
            std::cout << "🆔 Komut ID: " << response->command_id << std::endl;
            std::cout << "⏱️  Tahmini süre: " << response->estimated_duration << " saniye" << std::endl;
            std::cout << "💬 Mesaj: " << response->message << std::endl;
            
            // Hedef pozisyon varsa göster
            if (command_name == "move" || command_name == "home") {
                std::cout << "🎯 Hedef pozisyon: (" 
                         << response->actual_target.x << ", "
                         << response->actual_target.y << ", "
                         << response->actual_target.z << ")" << std::endl;
            }
            
            // Completion time göster
            auto completion_time = rclcpp::Time(response->estimated_completion);
            auto now = this->get_clock()->now();
            auto time_diff = completion_time - now;
            std::cout << "🕐 Tahmini tamamlanma: " << time_diff.seconds() << " saniye sonra" << std::endl;
            
        } else {
            std::cout << "❌ Durum: BAŞARISIZ" << std::endl;
            std::cout << "🔢 Hata kodu: " << response->error_code << std::endl;
            std::cout << "💬 Hata mesajı: " << response->message << std::endl;
            
            // Hata kodunu açıkla
            std::cout << "📋 Hata açıklaması: " << get_error_description(response->error_code) << std::endl;
        }
        
        std::cout << "========================================\n" << std::endl;
    }
    
    /**
     * Hata kodunu açıklayıcı metne çevir
     */
    std::string get_error_description(uint32_t error_code)
    {
        switch (error_code) {
            case day2::srv::RobotCommand::Response::ERROR_NONE:
                return "Hata yok";
            case day2::srv::RobotCommand::Response::ERROR_INVALID_COMMAND:
                return "Geçersiz komut türü";
            case day2::srv::RobotCommand::Response::ERROR_OUT_OF_BOUNDS:
                return "Hedef pozisyon erişilebilir alan dışında";
            case day2::srv::RobotCommand::Response::ERROR_ROBOT_BUSY:
                return "Robot şu anda meşgul (başka komut çalışıyor)";
            case day2::srv::RobotCommand::Response::ERROR_SAFETY_VIOLATION:
                return "Güvenlik kuralları ihlali";
            case day2::srv::RobotCommand::Response::ERROR_HARDWARE_FAILURE:
                return "Donanım arızası";
            case day2::srv::RobotCommand::Response::ERROR_TIMEOUT:
                return "Komut zaman aşımına uğradı";
            default:
                return "Bilinmeyen hata kodu: " + std::to_string(error_code);
        }
    }
    
    /**
     * Yardım mesajını göster
     */
    void show_help()
    {
        std::cout << "\n🆘 === YARDIM ===" << std::endl;
        std::cout << "Komut formatları:" << std::endl;
        std::cout << "  move <x> <y> <z>       - Robotu (x,y,z) pozisyonuna hareket ettir" << std::endl;
        std::cout << "                           Örnek: move 2.0 3.5 0.0" << std::endl;
        std::cout << "  rotate <yaw>           - Robotu belirtilen açıya döndür (radyan)" << std::endl;
        std::cout << "                           Örnek: rotate 1.57 (90 derece)" << std::endl;
        std::cout << "  stop                   - Robotu anında durdur" << std::endl;
        std::cout << "  home                   - Robotu home pozisyonuna (0,0,0) gönder" << std::endl;
        std::cout << "  status                 - Robot durumunu sorgula" << std::endl;
        std::cout << "  help                   - Bu yardımı göster" << std::endl;
        std::cout << "  exit                   - Programdan çık" << std::endl;
        std::cout << "\nNotlar:" << std::endl;
        std::cout << "  - Pozisyon limitleri: x,y ∈ [-10,10], z ∈ [-5,5]" << std::endl;
        std::cout << "  - Açı birimi radyan (π = 3.14159)" << std::endl;
        std::cout << "  - Robot bir seferde bir komut çalıştırabilir" << std::endl;
        std::cout << "============================\n" << std::endl;
    }
    
    // Member variables
    rclcpp::Client<day2::srv::RobotCommand>::SharedPtr client_;
};

/**
 * Synchronous client örneği - command line'dan direkt kullanım
 */
void send_single_command(int argc, char* argv[])
{
    if (argc < 3) {
        std::cout << "Kullanım: " << argv[0] << " <command> [args...]" << std::endl;
        std::cout << "Örnek: " << argv[0] << " move 2.0 3.0 0.0" << std::endl;
        return;
    }
    
    rclcpp::init(argc, argv);
    auto node = std::make_shared<rclcpp::Node>("robot_command_client_sync");
    auto client = node->create_client<day2::srv::RobotCommand>("robot_command");
    
    // Service'i bekle
    if (!client->wait_for_service(10s)) {
        RCLCPP_ERROR(node->get_logger(), "Service not available");
        return;
    }
    
    // Command'ı parse et
    auto request = std::make_shared<day2::srv::RobotCommand::Request>();
    std::string command = argv[1];
    
    if (command == "move" && argc >= 5) {
        request->command_type = "move_to";
        request->target_position.x = std::stod(argv[2]);
        request->target_position.y = std::stod(argv[3]);
        request->target_position.z = std::stod(argv[4]);
        request->max_velocity = 1.0;
    } else if (command == "stop") {
        request->command_type = "stop";
    } else if (command == "home") {
        request->command_type = "home";
    } else {
        std::cout << "Desteklenmeyen komut: " << command << std::endl;
        return;
    }
    
    // Synchronous call
    auto future = client->async_send_request(request);
    if (rclcpp::spin_until_future_complete(node, future) == rclcpp::FutureReturnCode::SUCCESS) {
        auto response = future.get();
        std::cout << "Response: " << (response->success ? "SUCCESS" : "FAILED") << std::endl;
        std::cout << "Message: " << response->message << std::endl;
    } else {
        std::cout << "Service call failed" << std::endl;
    }
    
    rclcpp::shutdown();
}

int main(int argc, char * argv[])
{
    // Command line'dan direkt komut varsa synchronous mode
    if (argc > 1) {
        send_single_command(argc, argv);
        return 0;
    }
    
    // Interactive mode
    rclcpp::init(argc, argv);
    auto client_node = std::make_shared<RobotCommandClient>();
    // Interactive mode kendi loop'unu yönetir, spin gerek yok
    rclcpp::shutdown();
    return 0;
}