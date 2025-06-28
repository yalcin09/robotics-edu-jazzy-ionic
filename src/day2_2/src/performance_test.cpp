#include <chrono>
#include <memory>
#include <atomic>
#include <thread>

#include "rclcpp/rclcpp.hpp"
#include "day2/msg/sensor_data.hpp"
#include "std_msgs/msg/header.hpp"

using namespace std::chrono_literals;

/**
 * PerformanceTestPublisher sınıfı
 * Yüksek frekansda mesaj gönderir ve performansı ölçer
 */
class PerformanceTestPublisher : public rclcpp::Node
{
public:
    PerformanceTestPublisher() : Node("performance_test_publisher"), 
                               message_count_(0), 
                               target_frequency_(1000.0),  // 1000 Hz
                               running_(true)
    {
        // Publisher oluştur
        publisher_ = this->create_publisher<day2::msg::SensorData>(
            "performance_test_topic", 1000);  // Büyük queue size
        
        // Performance monitoring subscriber
        performance_sub_ = this->create_subscription<day2::msg::SensorData>(
            "performance_test_topic", 1000,
            std::bind(&PerformanceTestPublisher::performance_callback, this, std::placeholders::_1));
        
        // Timer ile mesaj gönderme - 1000 Hz için 1ms timer
        timer_ = this->create_wall_timer(
            std::chrono::microseconds(1000),  // 1000 μs = 1 ms = 1000 Hz
            std::bind(&PerformanceTestPublisher::publish_message, this));
        
        // Performans monitoring timer - her saniye rapor
        monitor_timer_ = this->create_wall_timer(
            1s, std::bind(&PerformanceTestPublisher::monitor_performance, this));
        
        // Başlangıç zamanını kaydet
        start_time_ = std::chrono::steady_clock::now();
        last_monitor_time_ = start_time_;
        
        RCLCPP_INFO(this->get_logger(), 
            "Performance Test başlatıldı! Hedef frekans: %.1f Hz", target_frequency_);
        RCLCPP_INFO(this->get_logger(), "Test süresince Ctrl+C ile durdurun...");
    }
    
    ~PerformanceTestPublisher()
    {
        running_ = false;
        print_final_report();
    }

private:
    /**
     * Yüksek hızda mesaj publish et
     */
    void publish_message()
    {
        if (!running_) return;
        
        auto msg = day2::msg::SensorData();
        auto now = this->get_clock()->now();
        
        // Header bilgileri
        msg.header.stamp = now;
        msg.header.frame_id = "performance_test_frame";
        
        // Sensor bilgileri
        msg.sensor_name = "performance_sensor";
        msg.sensor_id = 9999;
        
        // Test verisi - hafif veri kullan (performans için)
        msg.values = {
            static_cast<double>(message_count_),              // Mesaj ID
            std::chrono::duration<double>(now.nanoseconds()).count(), // Timestamp  
            generate_test_value(),                            // Test değeri
            get_cpu_usage()                                   // CPU kullanımı (simulated)
        };
        
        msg.value_names = {"message_id", "timestamp", "test_value", "cpu_usage"};
        msg.unit = "mixed";
        msg.is_active = true;
        msg.accuracy = 1.0;
        msg.error_code = 0;
        
        // Publish et
        publisher_->publish(msg);
        message_count_++;
        
        // Timing bilgisi kaydet
        publish_times_.push_back(std::chrono::steady_clock::now());
        
        // Memory management - son 1000 timing'i tut
        if (publish_times_.size() > 1000) {
            publish_times_.erase(publish_times_.begin(), publish_times_.begin() + 100);
        }
    }
    
    /**
     * Performance monitoring callback
     */
    void performance_callback(const day2::msg::SensorData::SharedPtr msg)
    {
        received_count_++;
        auto receive_time = std::chrono::steady_clock::now();
        
        // Latency hesaplama (sadece kendi mesajlarımız için)
        if (msg->sensor_id == 9999 && !msg->values.empty()) {
            auto publish_timestamp = std::chrono::nanoseconds(
                static_cast<long>(msg->values[1] * 1e9));
            auto current_time = std::chrono::duration_cast<std::chrono::nanoseconds>(
                receive_time.time_since_epoch());
            
            // Latency hesapla (mikrosaniye)
            double latency_us = (current_time.count() - publish_timestamp.count()) / 1000.0;
            latencies_.push_back(latency_us);
            
            // Son 1000 latency'yi tut
            if (latencies_.size() > 1000) {
                latencies_.erase(latencies_.begin(), latencies_.begin() + 100);
            }
        }
    }
    
    /**
     * Performans monitörü - her saniye çalışır
     */
    void monitor_performance()
    {
        auto now = std::chrono::steady_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(
            now - last_monitor_time_).count();
        
        if (duration >= 1000) {  // Her saniye
            // Publish frequency hesapla
            double actual_frequency = (message_count_ - last_message_count_) * 1000.0 / duration;
            
            // Receive frequency hesapla
            double receive_frequency = (received_count_ - last_received_count_) * 1000.0 / duration;
            
            // Latency istatistikleri
            double avg_latency = 0.0, max_latency = 0.0, min_latency = 0.0;
            if (!latencies_.empty()) {
                avg_latency = std::accumulate(latencies_.begin(), latencies_.end(), 0.0) / latencies_.size();
                max_latency = *std::max_element(latencies_.begin(), latencies_.end());
                min_latency = *std::min_element(latencies_.begin(), latencies_.end());
            }
            
            // Performans raporu
            RCLCPP_INFO(this->get_logger(),
                "📊 Pub: %.1f Hz | Recv: %.1f Hz | Latency: Avg=%.1fμs Max=%.1fμs Min=%.1fμs | Messages: %ld",
                actual_frequency, receive_frequency, avg_latency, max_latency, min_latency, message_count_.load());
            // Performans uyarıları
            if (actual_frequency < target_frequency_ * 0.9) {
                RCLCPP_WARN(this->get_logger(), 
                    "⚠️ Düşük publish frekansı! Hedef: %.1f Hz, Gerçek: %.1f Hz", 
                    target_frequency_, actual_frequency);
            }
            
            if (avg_latency > 1000.0) {  // 1ms'den fazla latency
                RCLCPP_WARN(this->get_logger(), 
                    "⚠️ Yüksek latency! Ortalama: %.1f μs", avg_latency);
            }
            
            // Sonraki ölçüm için değerleri güncelle
            last_monitor_time_ = now;
            last_message_count_ = message_count_;
            last_received_count_ = received_count_;
        }
    }
    
    /**
     * Test değeri üret (CPU load simülasyonu)
     */
    double generate_test_value()
    {
        // Basit matematik işlem - CPU yükü oluşturmak için
        double value = 0.0;
        for (int i = 0; i < 10; ++i) {
            value += std::sin(message_count_ + i) * std::cos(message_count_ + i);
        }
        return value;
    }
    
    /**
     * Simulated CPU usage
     */
    double get_cpu_usage()
    {
        // Gerçek CPU usage ölçümü karmaşık olduğu için simulated değer döndür
        return 50.0 + 20.0 * std::sin(message_count_ * 0.001);
    }
    
    /**
     * Final rapor yazdır
     */
    void print_final_report()
    {
        auto end_time = std::chrono::steady_clock::now();
        auto total_duration = std::chrono::duration_cast<std::chrono::seconds>(
            end_time - start_time_).count();
        
        double overall_frequency = static_cast<double>(message_count_) / total_duration;
        double message_loss_rate = 0.0;
        
        if (message_count_ > 0) {
            message_loss_rate = (1.0 - static_cast<double>(received_count_) / message_count_) * 100.0;
        }
        
        RCLCPP_INFO(this->get_logger(), "\n=== PERFORMANS TEST RAPORU ===");
        RCLCPP_INFO(this->get_logger(), "Test süresi: %ld saniye", total_duration);
        RCLCPP_INFO(this->get_logger(), "Gönderilen mesaj: %ld", message_count_.load());
        RCLCPP_INFO(this->get_logger(), "Alınan mesaj: %ld", received_count_.load());
        RCLCPP_INFO(this->get_logger(), "Ortalama frekans: %.2f Hz", overall_frequency);
        RCLCPP_INFO(this->get_logger(), "Hedef frekans: %.1f Hz", target_frequency_);
        RCLCPP_INFO(this->get_logger(), "Başarı oranı: %.1f%%", (overall_frequency / target_frequency_) * 100.0);
        RCLCPP_INFO(this->get_logger(), "Mesaj kaybı: %.2f%%", message_loss_rate);
        
        if (!latencies_.empty()) {
            double avg_latency = std::accumulate(latencies_.begin(), latencies_.end(), 0.0) / latencies_.size();
            RCLCPP_INFO(this->get_logger(), "Ortalama latency: %.1f μs", avg_latency);
        }
    }
    
    // Member variables
    rclcpp::Publisher<day2::msg::SensorData>::SharedPtr publisher_;
    rclcpp::Subscription<day2::msg::SensorData>::SharedPtr performance_sub_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::TimerBase::SharedPtr monitor_timer_;
    
    std::atomic<long> message_count_;
    std::atomic<long> received_count_{0};
    double target_frequency_;
    std::atomic<bool> running_;
    
    // Timing data
    std::chrono::steady_clock::time_point start_time_;
    std::chrono::steady_clock::time_point last_monitor_time_;
    std::vector<std::chrono::steady_clock::time_point> publish_times_;
    std::vector<double> latencies_;
    
    // Monitoring variables
    long last_message_count_ = 0;
    long last_received_count_ = 0;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    
    // Real-time priority ayarla (Linux'ta)
    #ifdef __linux__
    struct sched_param param;
    param.sched_priority = 10;
    if (sched_setscheduler(0, SCHED_FIFO, &param) != 0) {
        RCLCPP_WARN(rclcpp::get_logger("performance_test"), 
            "Real-time priority ayarlanamadı. sudo ile çalıştırmayı deneyin.");
    }
    #endif
    
    auto node = std::make_shared<PerformanceTestPublisher>();
    
    RCLCPP_INFO(node->get_logger(), "Performance test başlıyor...");
    RCLCPP_INFO(node->get_logger(), "Durdurmak için Ctrl+C kullanın");
    
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}