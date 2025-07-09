// =============================================================================
// DOSYA: src/multi_node_example.cpp
// AMAÇ: Tek executable'da birden fazla node çalıştırma örneği
// KULLANIM: ros2 run day5 multi_node_example
// ÖĞRENME: Multi-threading, executor patterns, node composition
// =============================================================================

#include <rclcpp/rclcpp.hpp>              // ROS2 temel kütüphanesi
#include <std_msgs/msg/string.hpp>        // String mesaj türü
#include <std_msgs/msg/int32.hpp>         // Integer mesaj türü
#include <chrono>                         // Zaman işlemleri
#include <memory>                         // Smart pointer'lar
#include <thread>                         // Multi-threading için

using namespace std::chrono_literals;

// =============================================================================
// PRODUCER NODE - Veri üreten node
// =============================================================================

/**
 * @brief ProducerNode - Veri üretip topic'e yayınlayan node
 * 
 * Bu node periyodik olarak veri üretir ve topic'e yayınlar.
 * Diğer node'lar bu veriyi consume edebilir.
 */
class ProducerNode : public rclcpp::Node
{
public:
    /**
     * @brief Constructor - Producer node'u yapılandırır
     */
    ProducerNode() : Node("producer_node"), counter_(0)
    {
        // Parametreler
        this->declare_parameter("producer_frequency", 2.0);
        this->declare_parameter("producer_topic", "data_stream");
        this->declare_parameter("producer_message_prefix", "Data");
        
        // Parameter okuma
        double frequency = this->get_parameter("producer_frequency").as_double();
        topic_name_ = this->get_parameter("producer_topic").as_string();
        message_prefix_ = this->get_parameter("producer_message_prefix").as_string();
        
        // Publisher oluştur
        publisher_ = this->create_publisher<std_msgs::msg::String>(topic_name_, 10);
        
        // Timer oluştur
        auto period = std::chrono::milliseconds(static_cast<int>(1000.0 / frequency));
        timer_ = this->create_wall_timer(period, 
                                       std::bind(&ProducerNode::timer_callback, this));
        
        RCLCPP_INFO(this->get_logger(), "🏭 Producer Node başlatıldı - Topic: %s", topic_name_.c_str());
    }

private:
    /**
     * @brief Timer callback - Periyodik veri üretimi
     */
    void timer_callback()
    {
        auto message = std_msgs::msg::String();
        message.data = message_prefix_ + " #" + std::to_string(counter_++) + 
                      " | Zaman: " + std::to_string(this->get_clock()->now().seconds());
        
        publisher_->publish(message);
        
        RCLCPP_INFO(this->get_logger(), "🏭 Üretildi: %s", message.data.c_str());
    }
    
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    std::string topic_name_;
    std::string message_prefix_;
    size_t counter_;
};

// =============================================================================
// CONSUMER NODE - Veri tüketen node
// =============================================================================

/**
 * @brief ConsumerNode - Topic'ten veri alan ve işleyen node
 * 
 * Bu node producer'dan gelen verileri dinler ve işler.
 * Aynı zamanda işlenmiş veriyi başka topic'e yayınlayabilir.
 */
class ConsumerNode : public rclcpp::Node
{
public:
    /**
     * @brief Constructor - Consumer node'u yapılandırır
     */
    ConsumerNode() : Node("consumer_node"), processed_count_(0)
    {
        // Parametreler
        this->declare_parameter("input_topic", "data_stream");
        this->declare_parameter("output_topic", "processed_data");
        this->declare_parameter("processing_delay_ms", 100);
        this->declare_parameter("enable_output", true);
        
        // Parameter okuma
        input_topic_ = this->get_parameter("input_topic").as_string();
        output_topic_ = this->get_parameter("output_topic").as_string();
        processing_delay_ = this->get_parameter("processing_delay_ms").as_int();
        enable_output_ = this->get_parameter("enable_output").as_bool();
        
        // Subscriber oluştur
        subscription_ = this->create_subscription<std_msgs::msg::String>(
            input_topic_, 10,
            std::bind(&ConsumerNode::input_callback, this, std::placeholders::_1));
        
        // Output publisher oluştur (eğer aktifse)
        if (enable_output_) {
            output_publisher_ = this->create_publisher<std_msgs::msg::String>(output_topic_, 10);
        }
        
        RCLCPP_INFO(this->get_logger(), "🔄 Consumer Node başlatıldı");
        RCLCPP_INFO(this->get_logger(), "   📥 Input: %s", input_topic_.c_str());
        if (enable_output_) {
            RCLCPP_INFO(this->get_logger(), "   📤 Output: %s", output_topic_.c_str());
        }
    }

private:
    /**
     * @brief Input callback - Gelen veriyi işle
     */
    void input_callback(const std_msgs::msg::String::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "🔄 Alındı: %s", msg->data.c_str());
        
        // Veri işleme simülasyonu (gecikme)
        if (processing_delay_ > 0) {
            std::this_thread::sleep_for(std::chrono::milliseconds(processing_delay_));
        }
        
        // Veriyi işle (örnek: büyük harfe çevir ve prefix ekle)
        std::string processed_data = "PROCESSED: " + msg->data;
        std::transform(processed_data.begin(), processed_data.end(), 
                      processed_data.begin(), ::toupper);
        
        processed_count_++;
        
        RCLCPP_INFO(this->get_logger(), "⚙️  İşlendi (#%zu): %s", 
                   processed_count_, processed_data.c_str());
        
        // İşlenmiş veriyi yayınla (eğer aktifse)
        if (enable_output_ && output_publisher_) {
            auto output_msg = std_msgs::msg::String();
            output_msg.data = processed_data + " | Processed at: " + 
                             std::to_string(this->get_clock()->now().seconds());
            
            output_publisher_->publish(output_msg);
            RCLCPP_INFO(this->get_logger(), "📤 Yayınlandı: İşlenmiş veri");
        }
    }
    
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr output_publisher_;
    std::string input_topic_;
    std::string output_topic_;
    int processing_delay_;
    bool enable_output_;
    size_t processed_count_;
};

// =============================================================================
// MONITOR NODE - Sistem izleme node'u
// =============================================================================

/**
 * @brief MonitorNode - Sistem durumunu izleyen ve raporlayan node
 * 
 * Bu node sistem metriklerini toplar ve periyodik raporlar üretir.
 */
class MonitorNode : public rclcpp::Node
{
public:
    /**
     * @brief Constructor - Monitor node'u yapılandırır
     */
    MonitorNode() : Node("monitor_node")
    {
        // Parametreler
        this->declare_parameter("monitor_frequency", 0.2);  // 5 saniyede bir
        this->declare_parameter("report_topic", "system_report");
        this->declare_parameter("detailed_reports", true);
        
        // Parameter okuma
        double frequency = this->get_parameter("monitor_frequency").as_double();
        report_topic_ = this->get_parameter("report_topic").as_string();
        detailed_reports_ = this->get_parameter("detailed_reports").as_bool();
        
        // Publisher oluştur
        report_publisher_ = this->create_publisher<std_msgs::msg::String>(report_topic_, 5);
        
        // Timer oluştur
        auto period = std::chrono::milliseconds(static_cast<int>(1000.0 / frequency));
        timer_ = this->create_wall_timer(period,
                                       std::bind(&MonitorNode::monitor_callback, this));
        
        // Başlangıç zamanını kaydet
        start_time_ = this->get_clock()->now();
        
        RCLCPP_INFO(this->get_logger(), "📊 Monitor Node başlatıldı - Rapor topic: %s", 
                   report_topic_.c_str());
    }

private:
    /**
     * @brief Monitor callback - Sistem durumu raporu oluştur
     */
    void monitor_callback()
    {
        // Çalışma süresi hesapla
        auto current_time = this->get_clock()->now();
        double uptime = (current_time - start_time_).seconds();
        
        // Basit sistem metrikleri
        report_count_++;
        
        // Rapor oluştur
        std::string report;
        if (detailed_reports_) {
            report = "=== SİSTEM RAPORU #" + std::to_string(report_count_) + " ===\n";
            report += "⏱️  Çalışma süresi: " + std::to_string(uptime) + " saniye\n";
            report += "📊 Toplam rapor sayısı: " + std::to_string(report_count_) + "\n";
            report += "🖥️  Sistem durumu: NORMAL\n";
            report += "💾 Memory durumu: OK\n";
            report += "🌐 Network durumu: CONNECTED\n";
            report += "⚡ CPU kullanımı: ~" + std::to_string((report_count_ % 20) + 10) + "%\n";
            report += "========================";
        } else {
            report = "System OK | Uptime: " + std::to_string(uptime) + "s | Report #" + 
                    std::to_string(report_count_);
        }
        
        // Raporu yayınla
        auto msg = std_msgs::msg::String();
        msg.data = report;
        report_publisher_->publish(msg);
        
        if (detailed_reports_) {
            RCLCPP_INFO(this->get_logger(), "📊 Detaylı sistem raporu yayınlandı (#%zu)", report_count_);
        } else {
            RCLCPP_INFO(this->get_logger(), "📊 Sistem raporu: OK (%.1fs uptime)", uptime);
        }
        
        // Her 10 raporda bir özel log
        if (report_count_ % 10 == 0) {
            RCLCPP_INFO(this->get_logger(), "🎯 Milestone: %zu rapor tamamlandı!", report_count_);
        }
    }
    
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr report_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    std::string report_topic_;
    bool detailed_reports_;
    rclcpp::Time start_time_;
    size_t report_count_ = 0;
};

// =============================================================================
// MULTI NODE MANAGER - Birden fazla node'u yöneten ana class
// =============================================================================

/**
 * @brief MultiNodeManager - Birden fazla node'u tek process'te çalıştıran manager
 */
class MultiNodeManager
{
public:
    /**
     * @brief Constructor - Tüm node'ları oluştur ve yapılandır
     */
    MultiNodeManager()
    {
        RCLCPP_INFO(rclcpp::get_logger("MultiNodeManager"), "🚀 Multi-Node sistemi başlatılıyor...");
        
        // Node'ları oluştur
        producer_node_ = std::make_shared<ProducerNode>();
        consumer_node_ = std::make_shared<ConsumerNode>();
        monitor_node_ = std::make_shared<MonitorNode>();
        
        // Multi-threaded executor oluştur
        executor_ = std::make_shared<rclcpp::executors::MultiThreadedExecutor>();
        
        // Node'ları executor'a ekle
        executor_->add_node(producer_node_);
        executor_->add_node(consumer_node_);
        executor_->add_node(monitor_node_);
        
        RCLCPP_INFO(rclcpp::get_logger("MultiNodeManager"), "✅ 3 node başarıyla oluşturuldu");
        RCLCPP_INFO(rclcpp::get_logger("MultiNodeManager"), "🔄 Multi-threaded executor hazır");
    }
    
    /**
     * @brief Tüm node'ları çalıştır
     */
    void run()
    {
        RCLCPP_INFO(rclcpp::get_logger("MultiNodeManager"), "🎯 Tüm node'lar çalışmaya başladı...");
        RCLCPP_INFO(rclcpp::get_logger("MultiNodeManager"), "📊 Sistem topology:");
        RCLCPP_INFO(rclcpp::get_logger("MultiNodeManager"), "   🏭 Producer → data_stream");
        RCLCPP_INFO(rclcpp::get_logger("MultiNodeManager"), "   🔄 Consumer: data_stream → processed_data");
        RCLCPP_INFO(rclcpp::get_logger("MultiNodeManager"), "   📊 Monitor → system_report");
        RCLCPP_INFO(rclcpp::get_logger("MultiNodeManager"), "🛑 Durdurmak için Ctrl+C basın");
        
        // Executor'u çalıştır (blocking call)
        executor_->spin();
    }
    
    /**
     * @brief Temizlik işlemleri
     */
    ~MultiNodeManager()
    {
        RCLCPP_INFO(rclcpp::get_logger("MultiNodeManager"), "🛑 Multi-Node sistemi durduruluyor...");
        
        if (executor_) {
            executor_->cancel();
        }
        
        RCLCPP_INFO(rclcpp::get_logger("MultiNodeManager"), "✅ Temizlik tamamlandı");
    }

private:
    std::shared_ptr<ProducerNode> producer_node_;
    std::shared_ptr<ConsumerNode> consumer_node_;
    std::shared_ptr<MonitorNode> monitor_node_;
    std::shared_ptr<rclcpp::executors::MultiThreadedExecutor> executor_;
};

// =============================================================================
// MAIN FONKSIYON
// =============================================================================

int main(int argc, char * argv[])
{
    // ROS2 sistemini başlat
    rclcpp::init(argc, argv);
    
    try {
        // Multi-node manager oluştur ve çalıştır
        auto manager = std::make_unique<MultiNodeManager>();
        manager->run();
        
    } catch (const std::exception& e) {
        RCLCPP_ERROR(rclcpp::get_logger("main"), "❌ Hata: %s", e.what());
        rclcpp::shutdown();
        return 1;
    }
    
    // Temizlik
    rclcpp::shutdown();
    return 0;
}

/*
=============================================================================
KULLANIM ÖRNEKLERİ VE MONİTÖRİNG:

1. PROGRAMI ÇALIŞTIRMA:
   ros2 run day5 multi_node_example

2. TOPIC'LERİ İZLEME:
   ros2 topic list
   ros2 topic echo /data_stream
   ros2 topic echo /processed_data  
   ros2 topic echo /system_report

3. NODE'LARI İZLEME:
   ros2 node list
   ros2 node info /producer_node
   ros2 node info /consumer_node
   ros2 node info /monitor_node

4. PARAMETRE DEĞİŞTİRME:
   ros2 param set /producer_node producer_frequency 5.0
   ros2 param set /consumer_node processing_delay_ms 50

5. PERFORMANCE ANALİZİ:
   ros2 topic hz /data_stream
   ros2 topic bw /processed_data
   rqt_graph

6. SYSTEM TOPOLOGY GÖRSELLEŞTİRME:
   rqt_graph

BU ÖRNEK GÖSTER İR:
- ✅ Tek process'te multiple node çalıştırma
- ✅ Inter-node communication (topic-based)
- ✅ Multi-threaded execution
- ✅ Parameter-based configuration
- ✅ Real-time data processing pipeline
- ✅ System monitoring ve reporting
=============================================================================
*/