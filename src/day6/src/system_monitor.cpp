// =============================================================================
// DOSYA: src/system_monitor.cpp
// AMAÇ: ROS2 sisteminin performansını ve kaynak kullanımını izleyen node
// KULLANIM: ros2 run debug_tools system_monitor
// ÖĞRENME: System monitoring, resource tracking, performance analysis
// =============================================================================

#include <rclcpp/rclcpp.hpp>              // ROS2 C++ client library
#include <std_msgs/msg/string.hpp>        // String mesaj türü
#include <diagnostic_msgs/msg/diagnostic_array.hpp>  // Diagnostic mesajları
#include <diagnostic_msgs/msg/diagnostic_status.hpp> // Diagnostic status

#include <chrono>                         // Zaman işlemleri
#include <memory>                         // Smart pointer'lar
#include <fstream>                        // Dosya işlemleri (system info için)
#include <sstream>                        // String stream işlemleri
#include <thread>                         // Thread işlemleri
#include <iomanip>                        // IO manipülasyon (formatting)

using namespace std::chrono_literals;

// =============================================================================
// SYSTEM MONITOR CLASS TANIMI
// =============================================================================

/**
 * @brief SystemMonitor sınıfı - Sistem kaynaklarını izleyen ROS2 node
 * 
 * Bu node şunları izler:
 * - CPU kullanımı
 * - Memory kullanımı  
 * - Disk kullanımı
 * - Network trafiği
 * - ROS2 node sayısı
 * - Topic sayısı ve frekansları
 */
class SystemMonitor : public rclcpp::Node
{
public:
    /**
     * @brief Constructor - System monitor node'u başlatır
     */
    SystemMonitor() : Node("system_monitor")
    {
        // =====================================================================
        // PARAMETER TANIMLAMA
        // =====================================================================
        
        // Monitoring frekansı - Ne kadar sık sistem kontrolü yapılacak (Hz)
        this->declare_parameter("monitor_frequency", 1.0);
        
        // Diagnostic publishing - Diagnostic mesajları yayınlansın mı?
        this->declare_parameter("enable_diagnostics", true);
        
        // CPU threshold - CPU kullanımı bu değerin üstüne çıkarsa uyarı ver (%)
        this->declare_parameter("cpu_warning_threshold", 80.0);
        
        // Memory threshold - Memory kullanımı bu değerin üstüne çıkarsa uyarı ver (%)
        this->declare_parameter("memory_warning_threshold", 85.0);
        
        // Disk threshold - Disk kullanımı bu değerin üstüne çıkarsa uyarı ver (%)
        this->declare_parameter("disk_warning_threshold", 90.0);
        
        // Verbose logging - Detaylı log mesajları gösterilsin mi?
        this->declare_parameter("verbose_logging", true);
        
        // History length - Kaç ölçüm saklanacak (trend analizi için)
        this->declare_parameter("history_length", 60);
        
        // =====================================================================
        // PARAMETER OKUMA
        // =====================================================================
        
        double frequency = this->get_parameter("monitor_frequency").as_double();
        enable_diagnostics_ = this->get_parameter("enable_diagnostics").as_bool();
        cpu_threshold_ = this->get_parameter("cpu_warning_threshold").as_double();
        memory_threshold_ = this->get_parameter("memory_warning_threshold").as_double();
        disk_threshold_ = this->get_parameter("disk_warning_threshold").as_double();
        verbose_logging_ = this->get_parameter("verbose_logging").as_bool();
        history_length_ = this->get_parameter("history_length").as_int();
        
        // =====================================================================
        // PARAMETER VALİDASYONU
        // =====================================================================
        
        if (frequency <= 0.0) {
            RCLCPP_ERROR(this->get_logger(), "Monitor frequency must be > 0, using default 1.0 Hz");
            frequency = 1.0;
        }
        
        if (history_length_ < 10) {
            RCLCPP_WARN(this->get_logger(), "History length too small, using minimum 10");
            history_length_ = 10;
        }
        
        // Threshold değerleri mantıklı aralıkta mı kontrol et
        cpu_threshold_ = std::clamp(cpu_threshold_, 50.0, 95.0);
        memory_threshold_ = std::clamp(memory_threshold_, 50.0, 95.0);
        disk_threshold_ = std::clamp(disk_threshold_, 50.0, 95.0);
        
        // =====================================================================
        // PUBLISHER'LARI OLUŞTURMA
        // =====================================================================
        
        // System status publisher - İnsan okunabilir sistem durumu
        status_publisher_ = this->create_publisher<std_msgs::msg::String>(
            "system_status", 10);
        
        // Diagnostic publisher - Makine okunabilir diagnostic bilgileri
        if (enable_diagnostics_) {
            diagnostic_publisher_ = this->create_publisher<diagnostic_msgs::msg::DiagnosticArray>(
                "/diagnostics", 10);
        }
        
        // =====================================================================
        // TIMER OLUŞTURMA
        // =====================================================================
        
        // Ana monitoring timer
        auto period = std::chrono::milliseconds(static_cast<int>(1000.0 / frequency));
        monitor_timer_ = this->create_wall_timer(period,
            std::bind(&SystemMonitor::monitor_callback, this));
        
        // Summary timer - Her 10 ölçümde bir özet rapor
        summary_timer_ = this->create_wall_timer(
            std::chrono::seconds(static_cast<int>(10.0 / frequency)),
            std::bind(&SystemMonitor::summary_callback, this));
        
        // =====================================================================
        // VERİ YAPILARINI BAŞLATMA
        // =====================================================================
        
        // History vector'larını başlat
        cpu_history_.reserve(history_length_);
        memory_history_.reserve(history_length_);
        
        // Başlangıç zamanını kaydet
        start_time_ = this->get_clock()->now();
        
        // İlk sistem bilgilerini al
        get_system_info();
        
        // =====================================================================
        // BAŞLATMA BİLGİ MESAJLARI
        // =====================================================================
        
        RCLCPP_INFO(this->get_logger(), "🖥️  SystemMonitor node başlatıldı!");
        RCLCPP_INFO(this->get_logger(), "📊 Konfigürasyon:");
        RCLCPP_INFO(this->get_logger(), "   ⚡ Monitor frekansı: %.2f Hz", frequency);
        RCLCPP_INFO(this->get_logger(), "   🚨 CPU uyarı eşiği: %.1f%%", cpu_threshold_);
        RCLCPP_INFO(this->get_logger(), "   🧠 Memory uyarı eşiği: %.1f%%", memory_threshold_);
        RCLCPP_INFO(this->get_logger(), "   💾 Disk uyarı eşiği: %.1f%%", disk_threshold_);
        RCLCPP_INFO(this->get_logger(), "   📈 History length: %d ölçüm", history_length_);
        RCLCPP_INFO(this->get_logger(), "   🔧 Diagnostics: %s", enable_diagnostics_ ? "Aktif" : "Pasif");
        
        if (verbose_logging_) {
            RCLCPP_INFO(this->get_logger(), "🖥️  Sistem Bilgileri:");
            RCLCPP_INFO(this->get_logger(), "   🖥️  Hostname: %s", hostname_.c_str());
            RCLCPP_INFO(this->get_logger(), "   ⚙️  CPU Cores: %d", cpu_cores_);
            RCLCPP_INFO(this->get_logger(), "   🧠 Total Memory: %.2f GB", total_memory_gb_);
        }
    }

private:
    // =========================================================================
    // ANA MONİTÖRİNG CALLBACK
    // =========================================================================
    
    /**
     * @brief Ana monitoring callback - Sistem metriklerini toplar ve yayınlar
     */
    void monitor_callback()
    {
        // Sistem metriklerini al
        SystemMetrics metrics = collect_system_metrics();
        
        // Metrikleri history'e ekle
        update_history(metrics);
        
        // Status mesajı oluştur ve yayınla
        publish_status(metrics);
        
        // Diagnostic mesajları yayınla (eğer aktifse)
        if (enable_diagnostics_) {
            publish_diagnostics(metrics);
        }
        
        // Uyarı kontrolleri yap
        check_thresholds(metrics);
        
        // Verbose logging
        if (verbose_logging_) {
            RCLCPP_INFO(this->get_logger(), 
                       "📊 CPU: %.1f%% | Memory: %.1f%% | Disk: %.1f%% | Load: %.2f",
                       metrics.cpu_percent, metrics.memory_percent, 
                       metrics.disk_percent, metrics.load_average);
        }
        
        measurement_count_++;
    }
    
    // =========================================================================
    // SİSTEM METRİKLERİNİ TOPLAMA
    // =========================================================================
    
    /**
     * @brief Sistem metriklerini toplar
     * @return SystemMetrics yapısı
     */
    struct SystemMetrics {
        double cpu_percent = 0.0;      // CPU kullanım yüzdesi
        double memory_percent = 0.0;   // Memory kullanım yüzdesi
        double disk_percent = 0.0;     // Disk kullanım yüzdesi
        double load_average = 0.0;     // System load average
        int ros_node_count = 0;        // Aktif ROS2 node sayısı
        int ros_topic_count = 0;       // Aktif topic sayısı
        double uptime_seconds = 0.0;   // Sistem uptime
    };
    
    SystemMetrics collect_system_metrics()
    {
        SystemMetrics metrics;
        
        // CPU kullanımını al
        metrics.cpu_percent = get_cpu_usage();
        
        // Memory kullanımını al
        metrics.memory_percent = get_memory_usage();
        
        // Disk kullanımını al
        metrics.disk_percent = get_disk_usage();
        
        // Load average'ı al
        metrics.load_average = get_load_average();
        
        // ROS2 sistem bilgilerini al
        get_ros_metrics(metrics);
        
        // Uptime hesapla
        auto current_time = this->get_clock()->now();
        metrics.uptime_seconds = (current_time - start_time_).seconds();
        
        return metrics;
    }
    
    /**
     * @brief CPU kullanım yüzdesini hesaplar
     * @return CPU kullanım yüzdesi (0-100)
     */
    double get_cpu_usage()
    {
        // Linux /proc/stat dosyasından CPU bilgilerini oku
        std::ifstream stat_file("/proc/stat");
        if (!stat_file.is_open()) {
            RCLCPP_WARN_ONCE(this->get_logger(), "CPU bilgisi alınamadı - /proc/stat okunamadı");
            return 0.0;
        }
        
        std::string line;
        std::getline(stat_file, line);
        
        // CPU satırını parse et: cpu user nice system idle iowait irq softirq
        std::istringstream iss(line);
        std::string cpu_label;
        long user, nice, system, idle, iowait, irq, softirq;
        
        iss >> cpu_label >> user >> nice >> system >> idle >> iowait >> irq >> softirq;
        
        // Toplam ve idle time hesapla
        long total_time = user + nice + system + idle + iowait + irq + softirq;
        long idle_time = idle + iowait;
        
        // İlk ölçümse, baseline kaydet
        if (prev_total_time_ == 0) {
            prev_total_time_ = total_time;
            prev_idle_time_ = idle_time;
            return 0.0;
        }
        
        // CPU kullanımını hesapla
        long total_diff = total_time - prev_total_time_;
        long idle_diff = idle_time - prev_idle_time_;
        
        double cpu_percent = 0.0;
        if (total_diff > 0) {
            cpu_percent = 100.0 * (total_diff - idle_diff) / total_diff;
        }
        
        // Bir sonraki ölçüm için değerleri sakla
        prev_total_time_ = total_time;
        prev_idle_time_ = idle_time;
        
        return std::clamp(cpu_percent, 0.0, 100.0);
    }
    
    /**
     * @brief Memory kullanım yüzdesini hesaplar
     * @return Memory kullanım yüzdesi (0-100)
     */
    double get_memory_usage()
    {
        // Linux /proc/meminfo dosyasından memory bilgilerini oku
        std::ifstream meminfo("/proc/meminfo");
        if (!meminfo.is_open()) {
            RCLCPP_WARN_ONCE(this->get_logger(), "Memory bilgisi alınamadı - /proc/meminfo okunamadı");
            return 0.0;
        }
        
        std::string line;
        long mem_total = 0, mem_free = 0, mem_available = 0, buffers = 0, cached = 0;
        
        // Gerekli değerleri bul
        while (std::getline(meminfo, line)) {
            std::istringstream iss(line);
            std::string key;
            long value;
            std::string unit;
            
            iss >> key >> value >> unit;
            
            if (key == "MemTotal:") mem_total = value;
            else if (key == "MemFree:") mem_free = value;
            else if (key == "MemAvailable:") mem_available = value;
            else if (key == "Buffers:") buffers = value;
            else if (key == "Cached:") cached = value;
        }
        
        // Memory kullanımını hesapla
        double memory_percent = 0.0;
        if (mem_total > 0) {
            // Available memory varsa onu kullan, yoksa free + buffers + cached
            long available = (mem_available > 0) ? mem_available : (mem_free + buffers + cached);
            long used = mem_total - available;
            memory_percent = 100.0 * used / mem_total;
        }
        
        return std::clamp(memory_percent, 0.0, 100.0);
    }
    
    /**
     * @brief Disk kullanım yüzdesini hesaplar (root partition için)
     * @return Disk kullanım yüzdesi (0-100)
     */
    double get_disk_usage()
    {
        // Linux df komutu simülasyonu - /proc/mounts ve statvfs kullanılabilir
        // Basit yaklaşım için /proc/diskstats kullanıyoruz
        
        // Bu örnekte sabit bir değer döndürüyoruz
        // Gerçek implementasyonda statvfs() system call kullanılmalı
        static double disk_usage = 45.0;  // Başlangıç değeri
        
        // Simulation: disk usage yavaşça artıyor
        disk_usage += 0.1 * (measurement_count_ % 10) / 10.0;
        
        return std::clamp(disk_usage, 0.0, 100.0);
    }
    
    /**
     * @brief System load average'ı alır
     * @return 1 dakikalık load average
     */
    double get_load_average()
    {
        // Linux /proc/loadavg dosyasından load average oku
        std::ifstream loadavg("/proc/loadavg");
        if (!loadavg.is_open()) {
            return 0.0;
        }
        
        double load1, load5, load15;
        loadavg >> load1 >> load5 >> load15;
        
        return load1;  // 1 dakikalık average'ı döndür
    }
    
    /**
     * @brief ROS2 sistem metriklerini toplar
     */
    void get_ros_metrics(SystemMetrics& metrics)
    {
        // Bu gerçek bir implementasyonda ros2 node list ve ros2 topic list
        // komutlarının çıktısı parse edilebilir veya rclcpp API kullanılabilir
        
        // Şimdilik simulated değerler
        metrics.ros_node_count = 5 + (measurement_count_ % 3);  // 5-7 node simulation
        metrics.ros_topic_count = 12 + (measurement_count_ % 5); // 12-16 topic simulation
    }
    
    // =========================================================================
    // HISTORY YÖNETİMİ
    // =========================================================================
    
    /**
     * @brief Metrikleri history'e ekler
     */
    void update_history(const SystemMetrics& metrics)
    {
        // CPU history
        cpu_history_.push_back(metrics.cpu_percent);
        if (cpu_history_.size() > static_cast<size_t>(history_length_)) {
            cpu_history_.erase(cpu_history_.begin());
        }
        
        // Memory history
        memory_history_.push_back(metrics.memory_percent);
        if (memory_history_.size() > static_cast<size_t>(history_length_)) {
            memory_history_.erase(memory_history_.begin());
        }
    }
    
    /**
     * @brief History'den istatistikler hesaplar
     */
    void calculate_statistics(const std::vector<double>& data, 
                            double& avg, double& min, double& max)
    {
        if (data.empty()) {
            avg = min = max = 0.0;
            return;
        }
        
        avg = 0.0;
        min = data[0];
        max = data[0];
        
        for (double value : data) {
            avg += value;
            min = std::min(min, value);
            max = std::max(max, value);
        }
        
        avg /= data.size();
    }
    
    // =========================================================================
    // MESAJ YAYINLAMA
    // =========================================================================
    
    /**
     * @brief Status mesajı yayınlar
     */
    void publish_status(const SystemMetrics& metrics)
    {
        auto message = std_msgs::msg::String();
        
        // JSON benzeri format oluştur
        std::ostringstream status;
        status << std::fixed << std::setprecision(2);
        status << "{"
               << "\"timestamp\": " << this->get_clock()->now().seconds() << ", "
               << "\"uptime\": " << metrics.uptime_seconds << ", "
               << "\"cpu_percent\": " << metrics.cpu_percent << ", "
               << "\"memory_percent\": " << metrics.memory_percent << ", "
               << "\"disk_percent\": " << metrics.disk_percent << ", "
               << "\"load_average\": " << metrics.load_average << ", "
               << "\"ros_nodes\": " << metrics.ros_node_count << ", "
               << "\"ros_topics\": " << metrics.ros_topic_count << ", "
               << "\"measurements\": " << measurement_count_
               << "}";
        
        message.data = status.str();
        status_publisher_->publish(message);
    }
    
    /**
     * @brief Diagnostic mesajları yayınlar
     */
    void publish_diagnostics(const SystemMetrics& metrics)
    {
        auto diag_array = diagnostic_msgs::msg::DiagnosticArray();
        diag_array.header.stamp = this->get_clock()->now();
        
        // CPU diagnostic
        diagnostic_msgs::msg::DiagnosticStatus cpu_status;
        cpu_status.name = "System Monitor/CPU";
        cpu_status.hardware_id = hostname_;
        
        if (metrics.cpu_percent > cpu_threshold_) {
            cpu_status.level = diagnostic_msgs::msg::DiagnosticStatus::WARN;
            cpu_status.message = "High CPU usage detected";
        } else {
            cpu_status.level = diagnostic_msgs::msg::DiagnosticStatus::OK;
            cpu_status.message = "CPU usage normal";
        }
        
        // CPU key-value pairs
        diagnostic_msgs::msg::KeyValue cpu_kv;
        cpu_kv.key = "CPU Usage (%)";
        cpu_kv.value = std::to_string(metrics.cpu_percent);
        cpu_status.values.push_back(cpu_kv);
        
        cpu_kv.key = "Load Average";
        cpu_kv.value = std::to_string(metrics.load_average);
        cpu_status.values.push_back(cpu_kv);
        
        // Memory diagnostic
        diagnostic_msgs::msg::DiagnosticStatus memory_status;
        memory_status.name = "System Monitor/Memory";
        memory_status.hardware_id = hostname_;
        
        if (metrics.memory_percent > memory_threshold_) {
            memory_status.level = diagnostic_msgs::msg::DiagnosticStatus::WARN;
            memory_status.message = "High memory usage detected";
        } else {
            memory_status.level = diagnostic_msgs::msg::DiagnosticStatus::OK;
            memory_status.message = "Memory usage normal";
        }
        
        diagnostic_msgs::msg::KeyValue mem_kv;
        mem_kv.key = "Memory Usage (%)";
        mem_kv.value = std::to_string(metrics.memory_percent);
        memory_status.values.push_back(mem_kv);
        
        // Disk diagnostic
        diagnostic_msgs::msg::DiagnosticStatus disk_status;
        disk_status.name = "System Monitor/Disk";
        disk_status.hardware_id = hostname_;
        
        if (metrics.disk_percent > disk_threshold_) {
            disk_status.level = diagnostic_msgs::msg::DiagnosticStatus::ERROR;
            disk_status.message = "Critical disk usage";
        } else if (metrics.disk_percent > disk_threshold_ - 5.0) {
            disk_status.level = diagnostic_msgs::msg::DiagnosticStatus::WARN;
            disk_status.message = "High disk usage";
        } else {
            disk_status.level = diagnostic_msgs::msg::DiagnosticStatus::OK;
            disk_status.message = "Disk usage normal";
        }
        
        diagnostic_msgs::msg::KeyValue disk_kv;
        disk_kv.key = "Disk Usage (%)";
        disk_kv.value = std::to_string(metrics.disk_percent);
        disk_status.values.push_back(disk_kv);
        
        // Diagnostic array'e ekle
        diag_array.status.push_back(cpu_status);
        diag_array.status.push_back(memory_status);
        diag_array.status.push_back(disk_status);
        
        // Yayınla
        diagnostic_publisher_->publish(diag_array);
    }
    
    // =========================================================================
    // UYARI KONTROLLERI
    // =========================================================================
    
    /**
     * @brief Threshold kontrolleri yapar ve uyarı verir
     */
    void check_thresholds(const SystemMetrics& metrics)
    {
        // CPU threshold kontrolü
        if (metrics.cpu_percent > cpu_threshold_) {
            RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 30000,  // 30 saniye throttle
                                 "🚨 HIGH CPU USAGE: %.1f%% (threshold: %.1f%%)", 
                                 metrics.cpu_percent, cpu_threshold_);
        }
        
        // Memory threshold kontrolü
        if (metrics.memory_percent > memory_threshold_) {
            RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 30000,
                                 "🚨 HIGH MEMORY USAGE: %.1f%% (threshold: %.1f%%)", 
                                 metrics.memory_percent, memory_threshold_);
        }
        
        // Disk threshold kontrolü
        if (metrics.disk_percent > disk_threshold_) {
            RCLCPP_ERROR_THROTTLE(this->get_logger(), *this->get_clock(), 60000,  // 1 dakika throttle
                                  "🚨 CRITICAL DISK USAGE: %.1f%% (threshold: %.1f%%)", 
                                  metrics.disk_percent, disk_threshold_);
        }
        
        // Load average kontrolü (CPU core sayısının 2 katından fazla ise uyarı)
        double load_threshold = cpu_cores_ * 2.0;
        if (metrics.load_average > load_threshold) {
            RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 30000,
                                 "🚨 HIGH SYSTEM LOAD: %.2f (threshold: %.2f)", 
                                 metrics.load_average, load_threshold);
        }
    }
    
    // =========================================================================
    // ÖZET RAPOR CALLBACK
    // =========================================================================
    
    /**
     * @brief Periyodik özet rapor callback
     */
    void summary_callback()
    {
        if (cpu_history_.empty() || memory_history_.empty()) {
            return;
        }
        
        // CPU istatistikleri
        double cpu_avg, cpu_min, cpu_max;
        calculate_statistics(cpu_history_, cpu_avg, cpu_min, cpu_max);
        
        // Memory istatistikleri
        double mem_avg, mem_min, mem_max;
        calculate_statistics(memory_history_, mem_avg, mem_min, mem_max);
        
        // Özet rapor
        RCLCPP_INFO(this->get_logger(), "📊 === SİSTEM PERFORMANS ÖZETİ ===");
        RCLCPP_INFO(this->get_logger(), "   ⏱️  Ölçüm sayısı: %zu", measurement_count_);
        RCLCPP_INFO(this->get_logger(), "   🖥️  CPU - Avg: %.1f%% | Min: %.1f%% | Max: %.1f%%", 
                   cpu_avg, cpu_min, cpu_max);
        RCLCPP_INFO(this->get_logger(), "   🧠 Memory - Avg: %.1f%% | Min: %.1f%% | Max: %.1f%%", 
                   mem_avg, mem_min, mem_max);
        RCLCPP_INFO(this->get_logger(), "📊 =====================================");
    }
    
    // =========================================================================
    // SİSTEM BİLGİSİ TOPLAMA
    // =========================================================================
    
    /**
     * @brief Sistem hakkında temel bilgileri toplar
     */
    void get_system_info()
    {
        // Hostname al
        char hostname_buffer[256];
        if (gethostname(hostname_buffer, sizeof(hostname_buffer)) == 0) {
            hostname_ = std::string(hostname_buffer);
        } else {
            hostname_ = "unknown";
        }
        
        // CPU core sayısını al
        cpu_cores_ = std::thread::hardware_concurrency();
        if (cpu_cores_ == 0) cpu_cores_ = 1;  // Fallback
        
        // Total memory bilgisini al
        std::ifstream meminfo("/proc/meminfo");
        if (meminfo.is_open()) {
            std::string line;
            while (std::getline(meminfo, line)) {
                if (line.find("MemTotal:") == 0) {
                    std::istringstream iss(line);
                    std::string key;
                    long value;
                    iss >> key >> value;  // value kB cinsinden
                    total_memory_gb_ = value / (1024.0 * 1024.0);  // GB'ye çevir
                    break;
                }
            }
        }
    }
    
    // =========================================================================
    // ÜYE DEĞİŞKENLER
    // =========================================================================
    
    // ROS2 nesneleri
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr status_publisher_;
    rclcpp::Publisher<diagnostic_msgs::msg::DiagnosticArray>::SharedPtr diagnostic_publisher_;
    rclcpp::TimerBase::SharedPtr monitor_timer_;
    rclcpp::TimerBase::SharedPtr summary_timer_;
    
    // Konfigürasyon parametreleri
    bool enable_diagnostics_;
    double cpu_threshold_;
    double memory_threshold_;
    double disk_threshold_;
    bool verbose_logging_;
    int history_length_;
    
    // Sistem bilgileri
    std::string hostname_;
    int cpu_cores_;
    double total_memory_gb_;
    
    // Ölçüm verileri
    std::vector<double> cpu_history_;
    std::vector<double> memory_history_;
    size_t measurement_count_ = 0;
    rclcpp::Time start_time_;
    
    // CPU hesaplama için önceki değerler
    long prev_total_time_ = 0;
    long prev_idle_time_ = 0;
};

// =============================================================================
// MAIN FONKSIYON
// =============================================================================

int main(int argc, char * argv[])
{
    // ROS2 sistemini başlat
    rclcpp::init(argc, argv);
    
    // System monitor node'unu oluştur
    auto node = std::make_shared<SystemMonitor>();
    
    RCLCPP_INFO(node->get_logger(), "🖥️  System Monitor çalışıyor...");
    RCLCPP_INFO(node->get_logger(), "📊 Sistem metriklerini izlemeye başladı");
    RCLCPP_INFO(node->get_logger(), "🛑 Durdurmak için Ctrl+C basın");
    
    // Node'u çalıştır
    rclcpp::spin(node);
    
    // Temizlik
    RCLCPP_INFO(node->get_logger(), "🛑 System Monitor durduruluyor...");
    rclcpp::shutdown();
    return 0;
}