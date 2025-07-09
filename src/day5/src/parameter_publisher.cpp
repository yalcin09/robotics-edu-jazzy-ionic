// =============================================================================
// DOSYA: parameter_publisher.cpp
// AMAÇ: ROS2 parametrelerini kullanarak configurable message publishing
// KULLANIM: ros2 run launch_tutorials parameter_publisher
// ÖĞRENME: Parameter declare, get, ve dynamic configuration
// =============================================================================

#include <rclcpp/rclcpp.hpp>        // ROS2 C++ client library - node oluşturma için
#include <std_msgs/msg/string.hpp>  // String mesaj türü - basit text iletimi için
#include <chrono>                   // Zaman işlemleri için - timer'lar için gerekli
#include <memory>                   // Smart pointer'lar için - modern C++ memory yönetimi

using namespace std::chrono_literals;  // 1s, 500ms gibi literal'ları kullanabilmek için

// =============================================================================
// PARAMETER PUBLISHER CLASS TANIMI
// =============================================================================

/**
 * @brief ParameterPublisher sınıfı - ROS2 Node'undan kalıtım alır
 * 
 * Bu sınıf parametreler kullanarak configurable bir publisher oluşturur.
 * Çalışma zamanında parameter'ları değiştirerek node davranışını ayarlayabiliriz.
 */
class ParameterPublisher : public rclcpp::Node 
{
public:
    /**
     * @brief Constructor - Node'u başlatır ve temel konfigürasyonu yapar
     * 
     * Constructor'da parametreleri tanımlar, publisher'ı oluşturur ve timer'ı başlatır.
     * ROS2'de constructor pattern önemlidir çünkü node başlatma sırasını kontrol eder.
     */
    ParameterPublisher() : Node("parameter_publisher")  // Node adını "parameter_publisher" olarak ayarla
    {
        // =====================================================================
        // PARAMETER TANIMLAMA (DECLARE)
        // =====================================================================
        
        // Parameter'ları declare ederken varsayılan değerler veriyoruz
        // Bu değerler launch file'da ya da command line'da override edilebilir
        
        // Yayın frekansı parametresi: Saniyede kaç mesaj yayınlanacak (Hz)
        this->declare_parameter("publish_frequency", 1.0);
        
        // Mesaj içeriği parametresi: Yayınlanacak string mesajın içeriği
        this->declare_parameter("message_content", "Merhaba ROS2 Dünyası!");
        
        // Topic adı parametresi: Mesajların hangi topic'e yayınlanacağı
        this->declare_parameter("topic_name", "chatter");
        
        // Queue size parametresi: Publisher'ın message buffer'ı boyutu
        this->declare_parameter("queue_size", 10);
        
        // Debug mode parametresi: Detaylı log mesajları gösterilsin mi?
        this->declare_parameter("debug_mode", false);
        
        // =====================================================================
        // PARAMETER OKUMA (GET)
        // =====================================================================
        
        // Tanımladığımız parametreleri okuyup local değişkenlere atıyoruz
        // get_parameter() fonksiyonu parametre değerini döndürür
        
        frequency_ = this->get_parameter("publish_frequency").as_double();
        message_content_ = this->get_parameter("message_content").as_string();
        topic_name_ = this->get_parameter("topic_name").as_string();
        queue_size_ = this->get_parameter("queue_size").as_int();
        debug_mode_ = this->get_parameter("debug_mode").as_bool();
        
        // =====================================================================
        // PARAMETER VALİDASYONU
        // =====================================================================
        
        // Parameter değerlerinin mantıklı olup olmadığını kontrol ediyoruz
        // Bu kontroller sistem güvenilirliği için önemlidir
        
        if (frequency_ <= 0.0) {
            RCLCPP_ERROR(this->get_logger(), "Hata: publish_frequency 0'dan büyük olmalı! Varsayılan değer (1.0) kullanılıyor.");
            frequency_ = 1.0;
        }
        
        if (queue_size_ < 1) {
            RCLCPP_ERROR(this->get_logger(), "Hata: queue_size 1'den küçük olamaz! Varsayılan değer (10) kullanılıyor.");
            queue_size_ = 10;
        }
        
        // =====================================================================
        // PUBLISHER OLUŞTURMA
        // =====================================================================
        
        // Publisher'ı parametre olarak alınan topic adı ve queue size ile oluşturuyoruz
        // create_publisher<mesaj_türü>(topic_adı, queue_size)
        publisher_ = this->create_publisher<std_msgs::msg::String>(topic_name_, queue_size_);
        
        // =====================================================================
        // TIMER OLUŞTURMA
        // =====================================================================
        
        // Yayın frekansına göre timer periyodunu hesaplıyoruz
        // Örnek: 2 Hz -> 500ms periyot, 0.5 Hz -> 2000ms periyot
        auto timer_period = std::chrono::milliseconds(static_cast<int>(1000.0 / frequency_));
        
        // Timer'ı oluşturup callback fonksiyonunu bağlıyoruz
        // create_wall_timer: Gerçek sistem zamanını kullanır (simülasyon zamanından bağımsız)
        timer_ = this->create_wall_timer(timer_period, 
                                       std::bind(&ParameterPublisher::timer_callback, this));
        
        // =====================================================================
        // BAŞLATMA BİLGİ MESAJLARI
        // =====================================================================
        
        // Node başarıyla başlatıldığında kullanıcıya bilgi veriyoruz
        RCLCPP_INFO(this->get_logger(), "✅ ParameterPublisher node başlatıldı!");
        RCLCPP_INFO(this->get_logger(), "📊 Konfigürasyon:");
        RCLCPP_INFO(this->get_logger(), "   📡 Topic adı: %s", topic_name_.c_str());
        RCLCPP_INFO(this->get_logger(), "   ⚡ Yayın frekansı: %.2f Hz", frequency_);
        RCLCPP_INFO(this->get_logger(), "   📦 Queue size: %d", queue_size_);
        RCLCPP_INFO(this->get_logger(), "   💬 Mesaj içeriği: %s", message_content_.c_str());
        RCLCPP_INFO(this->get_logger(), "   🐛 Debug mode: %s", debug_mode_ ? "Aktif" : "Pasif");
    }

private:
    // =========================================================================
    // TIMER CALLBACK FONKSIYON
    // =========================================================================
    
    /**
     * @brief Timer callback - Her timer tetiklendiğinde çalışır
     * 
     * Bu fonksiyon periyodik olarak çalışır ve mesaj yayınlama işlemini gerçekleştirir.
     * Timer frekansı parameter olarak ayarlanabilir.
     */
    void timer_callback()
    {
        // Yeni bir String mesaj oluşturuyoruz
        auto message = std_msgs::msg::String();
        
        // Mesaj içeriğini oluşturuyoruz: base_content + counter + timestamp
        // Bu sayede her mesajın benzersiz olduğunu garanti ediyoruz
        message.data = message_content_ + " | Sayaç: " + std::to_string(count_++) + 
                      " | Zaman: " + std::to_string(this->get_clock()->now().seconds());
        
        // Mesajı topic'e yayınlıyoruz
        publisher_->publish(message);
        
        // Debug mode aktifse detaylı bilgi gösteriyoruz
        if (debug_mode_) {
            RCLCPP_INFO(this->get_logger(), "🚀 Yayınlandı: '%s'", message.data.c_str());
            RCLCPP_INFO(this->get_logger(), "📈 Toplam mesaj sayısı: %zu", count_);
        } else {
            // Normal mode'da sadece kısa bilgi
            RCLCPP_INFO(this->get_logger(), "📤 Mesaj #%zu yayınlandı", count_);
        }
    }
    
    // =========================================================================
    // ÜYE DEĞİŞKENLER (MEMBER VARIABLES)
    // =========================================================================
    
    // ROS2 nesneleri - Smart pointer'lar ile memory management
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;  ///< Mesaj yayınlama nesnesi
    rclcpp::TimerBase::SharedPtr timer_;                             ///< Periyodik çalışma timer'ı
    
    // Parameter değerleri - Constructor'da okunup local'e kaydedilir
    double frequency_;              ///< Yayın frekansı (Hz)
    std::string message_content_;   ///< Temel mesaj içeriği
    std::string topic_name_;        ///< Hedef topic adı
    int queue_size_;               ///< Publisher queue boyutu
    bool debug_mode_;              ///< Detaylı log gösterimi
    
    // İç durumu takip eden değişkenler
    size_t count_ = 0;             ///< Yayınlanan mesaj sayacı - başlangıçta 0
};

// =============================================================================
// MAIN FONKSIYON - PROGRAM BAŞLANGICI
// =============================================================================

/**
 * @brief Ana program fonksiyonu
 * 
 * ROS2 node'unu başlatır, çalıştırır ve temizlik işlemlerini yapar.
 * Bu pattern tüm ROS2 C++ programlarında standarttır.
 * 
 * @param argc Komut satırı argüman sayısı
 * @param argv Komut satırı argümanları
 * @return Program çıkış kodu (0: başarılı, diğer: hata)
 */
int main(int argc, char * argv[])
{
    // =========================================================================
    // ROS2 SİSTEMİNİ BAŞLATMA
    // =========================================================================
    
    // ROS2 runtime'ını başlatıyoruz - bu tüm ROS2 programlarında gerekli
    // argc, argv: Komut satırı argümanlarını ROS2'ye geçiriyoruz
    rclcpp::init(argc, argv);
    
    // =========================================================================
    // NODE OLUŞTURMA VE ÇALIŞTIRMA
    // =========================================================================
    
    // Node nesnemizi oluşturuyoruz
    // std::make_shared: Modern C++ memory management - automatic cleanup
    auto node = std::make_shared<ParameterPublisher>();
    
    // Node'u çalıştırıyoruz - bu fonksiyon blocking'dir
    // spin(): Node'un callback'lerini (timer, subscriber vs.) işlemeye başlar
    // Program Ctrl+C ile durdurulana kadar burada kalır
    RCLCPP_INFO(node->get_logger(), "🎯 Node çalışıyor... Durdurmak için Ctrl+C basın");
    rclcpp::spin(node);
    
    // =========================================================================
    // TEMIZLIK İŞLEMLERİ
    // =========================================================================
    
    // ROS2 sistemini temiz bir şekilde kapatıyoruz
    // Bu network bağlantılarını, timer'ları vs. düzgün şekilde sonlandırır
    RCLCPP_INFO(node->get_logger(), "🛑 Node durduruluyor...");
    rclcpp::shutdown();
    
    // Program başarıyla tamamlandı
    return 0;
}