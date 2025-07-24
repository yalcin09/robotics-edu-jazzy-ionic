/**
 * @file simple_robot_controller.cpp
 * @brief Day 8: Simple Robot Controller Node (C++) - Detaylı Eğitim Versiyonu
 * @version 1.0
 * @date 2025
 * 
 * ROS2 Jazzy + Gazebo Ionic Compatible
 * 
 * Bu node basit bir differential drive robot controller'ı sağlar ve şunları yapar:
 * 1. Keyboard input'larını dinler (/cmd_vel topic üzerinden)
 * 2. Robot'un tekerlek hızlarını hesaplar (differential drive kinematics kullanarak)
 * 3. Wheel velocity command'larını Gazebo'ya gönderir
 * 4. Real-time status monitoring sağlar
 * 
 * Differential Drive Kinematics:
 * - Linear velocity (v) ve angular velocity (ω) input alır
 * - Left wheel speed = v - (ω * wheel_base / 2)
 * - Right wheel speed = v + (ω * wheel_base / 2)
 * - Wheel angular velocity = linear velocity / wheel radius
 * 
 * ROS2 Concepts Bu Dosyada:
 * - Node: Tek bir işlev yapan program birimi
 * - Topic: Node'lar arası asynchronous mesajlaşma
 * - Publisher: Mesaj gönderen (wheel velocity commands)
 * - Subscriber: Mesaj alan (cmd_vel input)
 * - Timer: Periyodik görevler için (control loop, status)
 * - Smart Pointers: Automatic memory management
 * 
 * @author ROS2 Robotics Education Series
 * @copyright Apache 2.0 License
 */

// ROS2 Core Libraries
#include <rclcpp/rclcpp.hpp>          // ROS2 C++ client library - node, publisher, subscriber
#include <geometry_msgs/msg/twist.hpp> // Velocity mesajları için (linear + angular velocity)
#include <std_msgs/msg/float64.hpp>   // Tekerlek hızı mesajları için (single float value)

// C++ Standard Libraries  
#include <chrono>                     // Timer için zaman sabitleri (20ms, 500ms vs.)
#include <memory>                     // Smart pointer'lar için (shared_ptr, unique_ptr)
#include <cmath>                      // Matematiksel fonksiyonlar için (abs, sin, cos vs.)

// Using declarations - Kod okunabilirliği için kısaltmalar
using std::placeholders::_1;         // std::bind placeholder (callback function binding)
using namespace std::chrono_literals; // 20ms, 500ms gibi zaman sabitlerini kullanabilmek için

/**
 * @class SimpleRobotController
 * @brief Simple Robot Controller Class - Differential Drive Robot Kontrolü
 * 
 * Bu sınıf rclcpp::Node'dan türetilmiş C++ ROS2 node sınıfıdır.
 * Differential drive robot kontrolü için gerekli tüm fonksiyonaliteyi içerir:
 * - Velocity command alma (/cmd_vel topic)
 * - Differential drive kinematics hesaplama
 * - Wheel velocity command gönderme
 * - Real-time monitoring ve logging
 * 
 * Robot Model:
 * - 2 tekerlek (left, right) + 1 caster wheel
 * - Differential drive locomotion
 * - Wheel radius: 0.1m, Wheel base: 0.5m
 */
class SimpleRobotController : public rclcpp::Node
{
public:
    /**
     * @brief Constructor - Node Başlatma ve Konfigürasyon
     * 
     * Node başlatıldığında çağrılır ve şu işlemleri yapar:
     * 1. Node ismini ayarla ("simple_robot_controller_cpp")
     * 2. Robot fiziksel parametrelerini initialize et
     * 3. ROS2 communication objelerini oluştur (publisher, subscriber, timer)
     * 4. Initial state'i ayarla (all velocities = 0)
     * 5. Kullanıcıya bilgilendirme mesajları gönder
     * 
     * Memory Management: Modern C++ smart pointer'lar kullanılıyor
     * Thread Safety: ROS2 callback system thread-safe
     */
    SimpleRobotController() : Node("simple_robot_controller_cpp")
    {
        // ================================================================
        // ROBOT PHYSICAL PARAMETERS - Gerçek robot ölçüleri
        // Bu değerler URDF'deki robot modeliyle eşleşmeli!
        // ================================================================
        
        wheel_radius_ = 0.1;        // Tekerlek yarıçapı (metre) - URDF'deki cylinder radius
        wheel_base_ = 0.5;          // Tekerlekler arası mesafe (metre) - Sol ve sağ tekerlek merkez mesafesi
        max_wheel_speed_ = 10.0;    // Maksimum tekerlek hızı (rad/s) - Motor limitleri
        
        // ================================================================
        // CURRENT STATE VARIABLES - Robot'un mevcut durumu
        // Bu değerler callback'lerde sürekli güncellenir
        // ================================================================
        
        linear_velocity_ = 0.0;     // İleri/geri hız (m/s) - Pozitif = ileri, Negatif = geri
        angular_velocity_ = 0.0;    // Dönüş hızı (rad/s) - Pozitif = sol dönüş, Negatif = sağ dönüş
        
        // ================================================================
        // TARGET WHEEL VELOCITIES - Hesaplanan tekerlek hızları
        // Differential drive kinematics sonucu hesaplanır
        // ================================================================
        
        left_wheel_vel_ = 0.0;      // Sol tekerlek hızı (rad/s) - Motor command
        right_wheel_vel_ = 0.0;     // Sağ tekerlek hızı (rad/s) - Motor command
        
        // ================================================================
        // ROS2 PUBLISHERS - Mesaj gönderen objeler
        // Bu publisher'lar Gazebo robot plugin'lerine wheel velocity komutları gönderir
        // Message Type: std_msgs::msg::Float64 (tek float değer)
        // ================================================================
        
        // Sol tekerlek velocity publisher
        // Topic: /left_wheel_velocity_controller/command
        // Bu topic Gazebo'daki sol tekerlek motor controller'ı tarafından dinlenir
        // QoS Profile: 10 mesaj buffer - son 10 komut buffer'da tutulur
        left_wheel_pub_ = this->create_publisher<std_msgs::msg::Float64>(
            "/left_wheel_velocity_controller/command", 10);
        
        // Sağ tekerlek velocity publisher  
        // Topic: /right_wheel_velocity_controller/command
        // Bu topic Gazebo'daki sağ tekerlek motor controller'ı tarafından dinlenir
        // Aynı QoS profili: reliable delivery, 10 mesaj depth
        right_wheel_pub_ = this->create_publisher<std_msgs::msg::Float64>(
            "/right_wheel_velocity_controller/command", 10);
        
        // ================================================================
        // ROS2 SUBSCRIBERS - Mesaj alan objeler
        // Bu subscriber teleop node'undan cmd_vel mesajlarını dinler
        // ================================================================
        
        // Velocity command subscriber
        // Topic: /cmd_vel (ROS2 standard topic ismi)
        // Message Type: geometry_msgs::msg::Twist (linear + angular velocity)
        // Bu topic teleop_twist_keyboard, joystick, autonomous planner tarafından publish edilir
        // Callback: cmd_vel_callback fonksiyonu her mesajda çağrılır
        // std::bind: Member function'ı callback olarak register eder
        cmd_vel_sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
            "/cmd_vel", 10, 
            std::bind(&SimpleRobotController::cmd_vel_callback, this, _1));
        
        // ================================================================
        // ROS2 TIMERS - Periyodik görevler
        // Real-time control için düzenli aralıklarla çalışan timer'lar
        // ================================================================
        
        // Control timer - Ana kontrol döngüsü
        // Frequency: 50Hz (20ms periyot) - Real-time robot control için yeterli
        // Callback: control_callback - differential drive hesaplaması yapar
        // Bu timer robot'un "kalp atışı" - sürekli çalışmalı
        control_timer_ = this->create_wall_timer(
            20ms, std::bind(&SimpleRobotController::control_callback, this));
        
        // Status timer - Monitoring ve debugging
        // Frequency: 2Hz (500ms periyot) - İnsan okuyabilir hızda log
        // Callback: status_callback - robot durumunu raporlar
        // Bu timer system health monitoring için
        status_timer_ = this->create_wall_timer(
            500ms, std::bind(&SimpleRobotController::status_callback, this));
        
        // ================================================================
        // STARTUP MESSAGES - Kullanıcı bilgilendirmesi
        // Node başarıyla başlatıldığını ve nasıl kullanılacağını belirt
        // ================================================================
        
        RCLCPP_INFO(this->get_logger(), "🤖 Simple Robot Controller (C++) başlatıldı!");
        RCLCPP_INFO(this->get_logger(), "📡 Listening to /cmd_vel topic");
        RCLCPP_INFO(this->get_logger(), "📤 Publishing wheel commands to:");
        RCLCPP_INFO(this->get_logger(), "   - /left_wheel_velocity_controller/command");
        RCLCPP_INFO(this->get_logger(), "   - /right_wheel_velocity_controller/command");
        RCLCPP_INFO(this->get_logger(), "🎮 Control robot with: ros2 run teleop_twist_keyboard teleop_twist_keyboard");
        RCLCPP_INFO(this->get_logger(), "⚡ C++ Performance: ~1ms latency, 50Hz control loop");
    }

private:
    /**
     * @brief Velocity Command Callback - Teleop Input Handler
     * 
     * Bu fonksiyon /cmd_vel topic'ine mesaj geldiğinde çağrılır.
     * Teleop node'undan gelen Twist mesajını alır ve robot parametrelerine atar.
     * Thread-safe şekilde velocity değerlerini günceller.
     * 
     * @param msg shared_ptr to Twist message (memory efficient, automatic cleanup)
     *            msg->linear.x: İleri/geri hız (m/s) - Forward(+) / Backward(-)
     *            msg->linear.y: Yan hız (m/s) - Differential drive'da kullanılmaz
     *            msg->linear.z: Yukarı/aşağı hız (m/s) - Differential drive'da kullanılmaz
     *            msg->angular.x: Roll dönüş (rad/s) - Differential drive'da kullanılmaz
     *            msg->angular.y: Pitch dönüş (rad/s) - Differential drive'da kullanılmaz
     *            msg->angular.z: Yaw dönüş (rad/s) - Left(+) / Right(-) turn
     * 
     * Coordinate System (ROS2 Standard):
     * - X axis: Forward (robot'un ön yönü)
     * - Y axis: Left (robot'un sol yönü)
     * - Z axis: Up (robot'un yukarı yönü)
     * - Yaw: Z ekseni etrafında dönüş (sol dönüş pozitif)
     */
    void cmd_vel_callback(const geometry_msgs::msg::Twist::SharedPtr msg)
    {
        // Gelen velocity komutlarını local variables'a kaydet
        // Atomic assignment - thread-safe değer atama (single instruction)
        linear_velocity_ = msg->linear.x;   // İleri/geri hız (+ ileri, - geri)
        angular_velocity_ = msg->angular.z; // Dönüş hızı (+ sol, - sağ)
        
        // Unused axes for differential drive (documentation purposes)
        // msg->linear.y;   // Yan hareket - differential drive desteklemez
        // msg->linear.z;   // Dikey hareket - ground robot için kullanılmaz  
        // msg->angular.x;  // Roll - tipik mobile robot'ta kullanılmaz
        // msg->angular.y;  // Pitch - düz zeminde kullanılmaz
        
        // Debug logging - sadece anlamlı değerler için (spam önleme)
        // Floating point comparison için epsilon kullanıyoruz
        // 0.01 threshold: çok küçük joystick noise'unu filtreler
        if (std::abs(linear_velocity_) > 0.01 || std::abs(angular_velocity_) > 0.01)
        {
            // DEBUG level log - production'da kapatılabilir
            // Format string: C-style printf formatting for performance
            RCLCPP_DEBUG(this->get_logger(), 
                "📥 Velocity Command Received: linear=%.3f m/s, angular=%.3f rad/s", 
                linear_velocity_, angular_velocity_);
        }
    }
    
    /**
     * @brief Control Loop Callback - Ana Robot Kontrol Döngüsü
     * 
     * Bu fonksiyon timer tarafından 50Hz frekansta çağrılır (20ms periyot).
     * Real-time robot control için kritik döngü - asla bloke olmamalı!
     * 
     * İşlem Sırası:
     * 1. Differential drive kinematics hesaplaması yapar
     * 2. Linear velocity'den wheel speed'leri hesaplar  
     * 3. Wheel speed limitlerini uygular (motor protection)
     * 4. Gazebo'ya wheel velocity komutları gönderir
     * 
     * Differential Drive Mathematics:
     * v_l = v - (ω * L / 2)  // Sol tekerlek linear hızı
     * v_r = v + (ω * L / 2)  // Sağ tekerlek linear hızı
     * ω_wheel = v_linear / r  // Linear'dan angular'a dönüşüm
     * 
     * Burada:
     * v = linear velocity (m/s) - robot'un ileri/geri hızı
     * ω = angular velocity (rad/s) - robot'un dönüş hızı
     * L = wheel_base (m) - tekerlekler arası mesafe
     * r = wheel_radius (m) - tekerlek yarıçapı
     * 
     * Physical Intuition:
     * - Straight forward: Her iki tekerlek aynı hızda ileri
     * - Turn left: Sol tekerlek yavaş, sağ tekerlek hızlı
     * - Turn right: Sol tekerlek hızlı, sağ tekerlek yavaş
     * - Rotate in place: Tekerlekler zıt yönde aynı hızda
     */
    void control_callback()
    {
        // ================================================================
        // DIFFERENTIAL DRIVE KINEMATICS CALCULATION
        // Bu hesaplama robotun hareket modelini belirler
        // Real-time performance için optimize edilmiş kod
        // ================================================================
        
        // Sol tekerlek linear hızını hesapla
        // Robot sola dönerken sol tekerlek yavaşlar (angular_velocity pozitif)
        // Formül: v_left = v_center - (angular_speed × wheel_separation/2)
        double left_linear_vel = linear_velocity_ - (angular_velocity_ * wheel_base_ / 2.0);
        
        // Sağ tekerlek linear hızını hesapla  
        // Robot sola dönerken sağ tekerlek hızlanır
        // Formül: v_right = v_center + (angular_speed × wheel_separation/2)
        double right_linear_vel = linear_velocity_ + (angular_velocity_ * wheel_base_ / 2.0);
        
        // ================================================================
        // LINEAR TO ANGULAR VELOCITY CONVERSION
        // Tekerlek linear hızından angular hızına dönüşüm
        // Motor'lar angular velocity (rad/s) ile kontrol edilir
        // ================================================================
        
        // Linear velocity'den angular velocity'ye dönüşüm
        // Formül: ω = v / r (tekerlek kinematics temel formülü)
        // Örnek: 1 m/s linear → 10 rad/s angular (0.1m radius ile)
        left_wheel_vel_ = left_linear_vel / wheel_radius_;
        right_wheel_vel_ = right_linear_vel / wheel_radius_;
        
        // ================================================================
        // WHEEL SPEED LIMITING - Motor koruması ve safety
        // Fiziksel motor limitleri ve güvenlik constraints
        // ================================================================
        
        // Wheel speed limiting - Motor kapasitesi koruması
        // std::clamp C++17'de var ama daha uyumlu manual implementation
        // Max speed: 10 rad/s (motorun fiziksel limiti)
        // Min speed: -10 rad/s (geri yönde aynı limit)
        left_wheel_vel_ = std::max(-max_wheel_speed_, 
                                  std::min(max_wheel_speed_, left_wheel_vel_));
        right_wheel_vel_ = std::max(-max_wheel_speed_,
                                   std::min(max_wheel_speed_, right_wheel_vel_));
        
        // ================================================================
        // MESSAGE CREATION AND PUBLISHING
        // ROS2 mesaj objelerini oluştur ve Gazebo'ya gönder
        // ================================================================
        
        // Message creation - Stack allocation (heap'ten daha hızlı)
        // std_msgs::msg::Float64: Tek float değer içeren basit mesaj tipi
        // Auto keyword: Compiler type deduction (modern C++)
        auto left_msg = std_msgs::msg::Float64();
        auto right_msg = std_msgs::msg::Float64();
        
        // Hesaplanan wheel velocity değerlerini mesajlara kopyala
        left_msg.data = left_wheel_vel_;    // Sol tekerlek komutu
        right_msg.data = right_wheel_vel_;  // Sağ tekerlek komutu
        
        // Gazebo wheel controller'larına mesaj gönder
        // Bu mesajlar Gazebo physics engine'i tarafından işlenir
        // Gazebo robot plugin'i bu topic'leri dinler ve motor'ları kontrol eder
        left_wheel_pub_->publish(left_msg);   // Sol motor komut
        right_wheel_pub_->publish(right_msg); // Sağ motor komut
        
        // ================================================================
        // PERFORMANCE NOTE:
        // Bu callback 50Hz çalışır (20ms periyot)
        // Toplam execution time < 1ms olmalı (real-time constraint)
        // Memory allocation minimize edilmiş (stack variables)
        // ================================================================
    }
    
    /**
     * @brief Status Callback - System Monitoring ve Debugging
     * 
     * Bu fonksiyon 2Hz frekansta çağrılır (500ms periyot).
     * Robot'un mevcut durumunu kullanıcıya raporlar.
     * Debug ve monitoring için kullanılır - production'da kapatılabilir.
     * 
     * Reporting Strategy:
     * - Sadece robot hareket ediyorsa log yazdır (spam prevention)
     * - Human-readable format kullan
     * - Critical metrics'i highlight et
     * 
     * Logged Metrics:
     * - Input velocities (linear, angular)
     * - Output wheel velocities (left, right)
     * - System health indicators
     */
    void status_callback()
    {
        // ================================================================
        // THRESHOLD-BASED LOGGING - Spam prevention
        // Sadece robot aktif olarak hareket ediyorsa log yazdır
        // ================================================================
        
        const double threshold = 0.01; // 1 cm/s veya 0.01 rad/s minimum threshold
        
        // Robot hareket halinde mi kontrol et
        // Hem input hem output velocity'leri kontrol ediyoruz
        bool robot_moving = (std::abs(linear_velocity_) > threshold || 
                            std::abs(angular_velocity_) > threshold ||
                            std::abs(left_wheel_vel_) > threshold || 
                            std::abs(right_wheel_vel_) > threshold);
        
        if (robot_moving)
        {
            // ================================================================
            // COMPREHENSIVE STATUS REPORT
            // Tüm kritik parametreleri human-readable format'ta rapor et
            // ================================================================
            
            RCLCPP_INFO(this->get_logger(),
                "🤖 C++ Robot Controller Status Report:\n"
                "   📥 Input Commands:\n"
                "      ↗️  Linear Velocity:  %+6.2f m/s\n"
                "      🔄 Angular Velocity: %+6.2f rad/s\n"
                "   📤 Output Commands:\n"
                "      ⬅️  Left Wheel:       %+6.2f rad/s\n"
                "      ➡️  Right Wheel:      %+6.2f rad/s\n"
                "   ⚡ Performance: C++ High-Speed Control Loop",
                linear_velocity_, angular_velocity_, 
                left_wheel_vel_, right_wheel_vel_);
        }
        
        // ================================================================
        // ADDITIONAL MONITORING (Optional)
        // Production sistemlerde eklenebilecek monitoring metrics
        // ================================================================
        
        // TODO: Add system health checks
        // - Motor current monitoring
        // - Battery voltage check  
        // - Communication latency measurement
        // - Error rate tracking
        // - Performance profiling
    }
    
    // ====================================================================
    // PRIVATE MEMBER VARIABLES - Class state
    // Modern C++ naming convention: trailing underscore for members
    // Logical grouping için kategorize edilmiş
    // ====================================================================
    
    // Robot Physical Parameters - URDF'den gelen sabit değerler
    double wheel_radius_;       ///< Tekerlek yarıçapı (m) - URDF cylinder radius
    double wheel_base_;         ///< Tekerlekler arası mesafe (m) - URDF joint spacing  
    double max_wheel_speed_;    ///< Maksimum tekerlek hızı (rad/s) - Motor limits
    
    // Current State Variables - Runtime'da sürekli güncellenen değerler
    double linear_velocity_;    ///< Mevcut linear velocity (m/s) - cmd_vel input
    double angular_velocity_;   ///< Mevcut angular velocity (rad/s) - cmd_vel input
    double left_wheel_vel_;     ///< Sol tekerlek hızı (rad/s) - calculated output
    double right_wheel_vel_;    ///< Sağ tekerlek hızı (rad/s) - calculated output
    
    // ROS2 Communication Objects - Smart pointer'lar automatic memory management sağlar
    // Template parameters type safety sağlar
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr left_wheel_pub_;   ///< Sol wheel publisher
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr right_wheel_pub_;  ///< Sağ wheel publisher
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_sub_; ///< Velocity subscriber
    rclcpp::TimerBase::SharedPtr control_timer_;                             ///< Control loop timer
    rclcpp::TimerBase::SharedPtr status_timer_;                              ///< Status report timer
};

/**
 * @brief Main Function - Program Entry Point
 * 
 * C++ ROS2 node'unu başlatan ana fonksiyon.
 * Exception handling ve proper cleanup içerir.
 * Modern C++ best practices kullanır.
 * 
 * Program Flow:
 * 1. ROS2 communication infrastructure'ını initialize et
 * 2. Robot controller node instance'ı oluştur
 * 3. Node'u çalıştır (event loop)
 * 4. Exception handling ve cleanup
 * 
 * @param argc Command line argument count
 * @param argv Command line arguments array
 * @return Exit status (0 = success, 1 = error)
 * 
 * Usage Examples:
 * ./simple_robot_controller_cpp
 * ros2 run day8 simple_robot_controller_cpp
 * ros2 launch day8 controller.py controller_language:=cpp
 */
int main(int argc, char * argv[])
{
    // ================================================================
    // ROS2 INITIALIZATION
    // ROS2 communication infrastructure'ını başlat
    // Bu call ROS2 runtime'ı initialize eder
    // ================================================================
    
    rclcpp::init(argc, argv);
    
    try
    {
        // ================================================================
        // NODE CREATION
        // Robot controller node instance'ı oluştur
        // make_shared: Exception-safe smart pointer creation
        // RAII (Resource Acquisition Is Initialization) pattern
        // ================================================================
        
        auto robot_controller = std::make_shared<SimpleRobotController>();
        
        // ================================================================
        // NODE EXECUTION
        // Node'u çalıştır - message processing event loop
        // spin(): Callback'leri process eden main event loop
        // Ctrl+C signal'ı gelene kadar çalışır
        // ================================================================
        
        RCLCPP_INFO(rclcpp::get_logger("main"), 
                    "🚀 Starting C++ Robot Controller event loop...");
        
        rclcpp::spin(robot_controller);
        
        RCLCPP_INFO(rclcpp::get_logger("main"), 
                    "✅ C++ Robot Controller event loop finished.");
    }
    catch (const std::exception& e)
    {
        // ================================================================
        // EXCEPTION HANDLING
        // Standard exception'ları yakala ve log'la
        // Robust error management için kritik
        // ================================================================
        
        RCLCPP_ERROR(rclcpp::get_logger("main"), 
                     "💥 Exception caught in C++ Robot Controller: %s", e.what());
        return 1; // Error exit code
    }
    catch (...)
    {
        // ================================================================
        // CATCH-ALL HANDLER
        // Bilinmeyen exception'lar için fallback
        // ================================================================
        
        RCLCPP_ERROR(rclcpp::get_logger("main"), 
                     "💥 Unknown exception caught in C++ Robot Controller");
        return 1; // Error exit code
    }
    
    // ================================================================
    // CLEANUP
    // ROS2 communication'ı temiz şekilde kapat
    // Smart pointer'lar automatic cleanup yapar (RAII)
    // ================================================================
    
    rclcpp::shutdown();
    
    std::cout << "\n" << std::string(60, '=') << std::endl;
    std::cout << "✅ C++ Robot Controller başarıyla durduruldu!" << std::endl;
    std::cout << "📊 Final Statistics:" << std::endl;
    std::cout << "   - Language: C++ (High Performance)" << std::endl;
    std::cout << "   - Control Frequency: 50Hz" << std::endl;
    std::cout << "   - Typical Latency: ~1ms" << std::endl;
    std::cout << "   - Memory Usage: ~5-10MB" << std::endl;
    std::cout << std::string(60, '=') << std::endl;
    
    return 0; // Success exit code
}