// =============================================================================
// DOSYA: parameter_subscriber.cpp  
// AMAÇ: ROS2 parametrelerini kullanarak configurable message subscription
// KULLANIM: ros2 run launch_tutorials parameter_subscriber
// ÖĞRENME: Parameter'larla subscriber konfigürasyonu ve message processing
// =============================================================================

#include <rclcpp/rclcpp.hpp>        // ROS2 C++ client library - node oluşturma için
#include <std_msgs/msg/string.hpp>  // String mesaj türü - text mesajları almak için
#include <memory>                   // Smart pointer'lar için - modern C++ memory yönetimi

// =============================================================================
// PARAMETER SUBSCRIBER CLASS TANIMI
// =============================================================================

/**
 * @brief ParameterSubscriber sınıfı - ROS2 Node'undan kalıtım alır
 * 
 * Bu sınıf parametreler kullanarak configurable bir subscriber oluşturur.
 * Hangi topic'i dinleyeceği, nasıl işlem yapacağı parameters ile ayarlanabilir.
 */
class ParameterSubscriber : public rclcpp::Node
{
public:
    /**
     * @brief Constructor - Node'u başlatır ve subscriber'ı konfigüre eder
     * 
     * Parameter'ları tanımlar, okur ve subscriber'ı oluşturur.
     * Ayrıca message processing ayarlarını da konfigüre eder.
     */
    ParameterSubscriber() : Node("parameter_subscriber")  // Node adını "parameter_subscriber" olarak ayarla
    {
        // =====================================================================
        // PARAMETER TANIMLAMA (DECLARE)
        // =====================================================================
        
        // Subscriber konfigürasyon parametreleri
        
        // Topic adı: Hangi topic'i dinleyeceğimizi belirler
        this->declare_parameter("topic_name", "chatter");
        
        // Queue size: Subscriber'ın message buffer boyutu
        this->declare_parameter("queue_size", 10);
        
        // Message işleme ayarları
        
        // Verbose mode: Her mesajı detaylı göster mi?
        this->declare_parameter("verbose_mode", true);
        
        // Message filtering: Sadece belirli kelimeler içeren mesajları mı göster?
        this->declare_parameter("enable_filtering", false);
        
        // Filter keyword: Filtreleme için anahtar kelime
        this->declare_parameter("filter_keyword", "ROS2");
        
        // Statistics: Mesaj istatistikleri tutsun mu?
        this->declare_parameter("enable_statistics", true);
        
        // Log level: Hangi seviyede log mesajları gösterilsin?
        // 0: ERROR, 1: WARN, 2: INFO, 3: DEBUG
        this->declare_parameter("log_level", 2);
        
        // =====================================================================
        // PARAMETER OKUMA (GET)
        // =====================================================================
        
        // Tüm parametreleri okuyup local değişkenlere atıyoruz
        topic_name_ = this->get_parameter("topic_name").as_string();
        queue_size_ = this->get_parameter("queue_size").as_int();
        verbose_mode_ = this->get_parameter("verbose_mode").as_bool();
        enable_filtering_ = this->get_parameter("enable_filtering").as_bool();
        filter_keyword_ = this->get_parameter("filter_keyword").as_string();
        enable_statistics_ = this->get_parameter("enable_statistics").as_bool();
        log_level_ = this->get_parameter("log_level").as_int();
        
        // =====================================================================
        // PARAMETER VALİDASYONU VE DÜZELTME
        // =====================================================================
        
        // Queue size kontrolü: En az 1 olmalı
        if (queue_size_ < 1) {
            RCLCPP_ERROR(this->get_logger(), "❌ Hata: queue_size 1'den küçük olamaz! Varsayılan (10) kullanılıyor.");
            queue_size_ = 10;
        }
        
        // Log level kontrolü: 0-3 arası olmalı
        if (log_level_ < 0 || log_level_ > 3) {
            RCLCPP_ERROR(this->get_logger(), "❌ Hata: log_level 0-3 arasında olmalı! Varsayılan (2) kullanılıyor.");
            log_level_ = 2;
        }
        
        // Topic name kontrolü: Boş olamaz
        if (topic_name_.empty()) {
            RCLCPP_ERROR(this->get_logger(), "❌ Hata: topic_name boş olamaz! Varsayılan 'chatter' kullanılıyor.");
            topic_name_ = "chatter";
        }
        
        // =====================================================================
        // İSTATİSTİK DEĞİŞKENLERİNİ BAŞLATMA
        // =====================================================================
        
        // İstatistik tutma aktifse sayaçları sıfırlıyoruz
        if (enable_statistics_) {
            total_messages_ = 0;
            filtered_messages_ = 0;
            start_time_ = this->get_clock()->now();
        }
        
        // =====================================================================
        // SUBSCRIBER OLUŞTURMA
        // =====================================================================
        
        // Subscriber'ı konfigüre edilmiş parametrelerle oluşturuyoruz
        // create_subscription<mesaj_türü>(topic, queue_size, callback_function)
        subscription_ = this->create_subscription<std_msgs::msg::String>(
            topic_name_,                                              // Dinlenecek topic
            queue_size_,                                              // Buffer boyutu
            std::bind(&ParameterSubscriber::message_callback,        // Callback fonksiyon
                      this,                                           // 'this' pointer
                      std::placeholders::_1)                         // Mesaj parametresi placeholder
        );
        
        // =====================================================================
        // BAŞLATMA BİLGİ MESAJLARI
        // =====================================================================
        
        RCLCPP_INFO(this->get_logger(), "✅ ParameterSubscriber node başlatıldı!");
        RCLCPP_INFO(this->get_logger(), "📊 Konfigürasyon:");
        RCLCPP_INFO(this->get_logger(), "   📡 Topic adı: %s", topic_name_.c_str());
        RCLCPP_INFO(this->get_logger(), "   📦 Queue size: %d", queue_size_);
        RCLCPP_INFO(this->get_logger(), "   🔍 Verbose mode: %s", verbose_mode_ ? "Aktif" : "Pasif");
        RCLCPP_INFO(this->get_logger(), "   🚫 Filtreleme: %s", enable_filtering_ ? "Aktif" : "Pasif");
        
        if (enable_filtering_) {
            RCLCPP_INFO(this->get_logger(), "   🔑 Filter keyword: %s", filter_keyword_.c_str());
        }
        
        RCLCPP_INFO(this->get_logger(), "   📈 İstatistikler: %s", enable_statistics_ ? "Aktif" : "Pasif");
        RCLCPP_INFO(this->get_logger(), "   📋 Log level: %d", log_level_);
        RCLCPP_INFO(this->get_logger(), "🎧 '%s' topic'ini dinlemeye başladı...", topic_name_.c_str());
    }

private:
    // =========================================================================
    // MESSAGE CALLBACK FONKSIYON
    // =========================================================================
    
    /**
     * @brief Message callback - Yeni mesaj geldiğinde çalışır
     * 
     * Bu fonksiyon topic'e yeni mesaj geldiği her seferinde otomatik çalışır.
     * Mesajı işler, filtreler ve istatistikleri günceller.
     * 
     * @param msg Gelen String mesajı
     */
    void message_callback(const std_msgs::msg::String::SharedPtr msg)
    {
        // =====================================================================
        // İSTATİSTİK GÜNCELLEMESİ
        // =====================================================================
        
        if (enable_statistics_) {
            total_messages_++;  // Toplam mesaj sayısını artır
        }
        
        // =====================================================================
        // MESAJ FİLTRELEME İŞLEMİ
        // =====================================================================
        
        bool should_process = true;  // Mesaj işlenecek mi?
        
        if (enable_filtering_) {
            // Mesajda anahtar kelime var mı kontrol et
            // find() != string::npos: substring bulundu mu?
            if (msg->data.find(filter_keyword_) == std::string::npos) {
                should_process = false;  // Anahtar kelime yok, mesajı işleme
                
                // Debug level'da filtrelenen mesajları göster
                if (log_level_ >= 3) {
                    RCLCPP_DEBUG(this->get_logger(), 
                                "🚫 Mesaj filtrelendi (anahtar kelime '%s' bulunamadı): '%s'", 
                                filter_keyword_.c_str(), msg->data.c_str());
                }
            } else {
                // Filtrelenen (kabul edilen) mesaj sayısını artır
                if (enable_statistics_) {
                    filtered_messages_++;
                }
            }
        }
        
        // =====================================================================
        // MESAJ İŞLEME VE GÖRÜNTÜLEME
        // =====================================================================
        
        if (should_process) {
            // Mesaj uzunluğunu hesapla
            size_t message_length = msg->data.length();
            
            // Verbose mode aktifse detaylı bilgi göster
            if (verbose_mode_) {
                RCLCPP_INFO(this->get_logger(), "📨 Mesaj alındı:");
                RCLCPP_INFO(this->get_logger(), "   💬 İçerik: '%s'", msg->data.c_str());
                RCLCPP_INFO(this->get_logger(), "   📏 Uzunluk: %zu karakter", message_length);
                RCLCPP_INFO(this->get_logger(), "   ⏰ Alınma zamanı: %.3f saniye", 
                           this->get_clock()->now().seconds());
                
                // İstatistik bilgisi varsa göster
                if (enable_statistics_) {
                    RCLCPP_INFO(this->get_logger(), "   📊 Toplam mesaj: %zu", total_messages_);
                    
                    // Filtreleme aktifse filtreleme oranını göster
                    if (enable_filtering_) {
                        double filter_ratio = (total_messages_ > 0) ? 
                                             (100.0 * filtered_messages_ / total_messages_) : 0.0;
                        RCLCPP_INFO(this->get_logger(), "   ✅ Kabul edilen: %zu (%.1f%%)", 
                                   filtered_messages_, filter_ratio);
                    }
                }
            } else {
                // Normal mode'da sadece kısa bilgi
                if (log_level_ >= 2) {  // INFO level
                    RCLCPP_INFO(this->get_logger(), "📥 Mesaj #%zu: '%s'", 
                               total_messages_, msg->data.c_str());
                }
            }
            
            // =========================================================================
            // ÖZEL MESAJ TİPLERİNİ KONTROL ETME
            // =========================================================================
            
            // Mesaj içeriğine göre özel işlemler yapabiliriz
            if (msg->data.find("UYARI") != std::string::npos || 
                msg->data.find("WARNING") != std::string::npos) {
                
                RCLCPP_WARN(this->get_logger(), "⚠️  Uyarı mesajı tespit edildi: '%s'", msg->data.c_str());
                
            } else if (msg->data.find("HATA") != std::string::npos || 
                      msg->data.find("ERROR") != std::string::npos) {
                
                RCLCPP_ERROR(this->get_logger(), "❌ Hata mesajı tespit edildi: '%s'", msg->data.c_str());
                
            } else if (msg->data.find("BAŞARILI") != std::string::npos || 
                      msg->data.find("SUCCESS") != std::string::npos) {
                
                RCLCPP_INFO(this->get_logger(), "✅ Başarı mesajı tespit edildi: '%s'", msg->data.c_str());
            }
        }
        
        // =====================================================================
        // PERİYODİK İSTATİSTİK RAPORU
        // =====================================================================
        
        // Her 10 mesajda bir istatistik raporu göster
        if (enable_statistics_ && total_messages_ % 10 == 0) {
            show_statistics_report();
        }
    }
    
    // =========================================================================
    // İSTATİSTİK RAPORU FONKSİYONU
    // =========================================================================
    
    /**
     * @brief İstatistik raporu gösterir
     * 
     * Toplam mesaj sayısı, filtreleme oranı, mesaj hızı gibi bilgileri gösterir.
     */
    void show_statistics_report()
    {
        if (!enable_statistics_) return;
        
        // Geçen süreyi hesapla
        auto current_time = this->get_clock()->now();
        double elapsed_seconds = (current_time - start_time_).seconds();
        
        // Mesaj hızını hesapla (mesaj/saniye)
        double message_rate = (elapsed_seconds > 0) ? (total_messages_ / elapsed_seconds) : 0.0;
        
        RCLCPP_INFO(this->get_logger(), "📊 === İSTATİSTİK RAPORU ===");
        RCLCPP_INFO(this->get_logger(), "   📨 Toplam mesaj: %zu", total_messages_);
        RCLCPP_INFO(this->get_logger(), "   ⚡ Mesaj hızı: %.2f mesaj/saniye", message_rate);
        RCLCPP_INFO(this->get_logger(), "   ⏱️  Çalışma süresi: %.1f saniye", elapsed_seconds);
        
        if (enable_filtering_) {
            double filter_ratio = (total_messages_ > 0) ? 
                                 (100.0 * filtered_messages_ / total_messages_) : 0.0;
            RCLCPP_INFO(this->get_logger(), "   ✅ Kabul edilen: %zu (%.1f%%)", 
                       filtered_messages_, filter_ratio);
            RCLCPP_INFO(this->get_logger(), "   🚫 Filtrelenen: %zu (%.1f%%)", 
                       total_messages_ - filtered_messages_, 100.0 - filter_ratio);
        }
        
        RCLCPP_INFO(this->get_logger(), "📊 ========================");
    }
    
    // =========================================================================
    // ÜYE DEĞİŞKENLER (MEMBER VARIABLES)
    // =========================================================================
    
    // ROS2 nesneleri
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;  ///< Mesaj dinleme nesnesi
    
    // Konfigürasyon parametreleri
    std::string topic_name_;        ///< Dinlenecek topic adı
    int queue_size_;               ///< Subscriber queue boyutu
    bool verbose_mode_;            ///< Detaylı mesaj gösterimi
    bool enable_filtering_;        ///< Mesaj filtreleme aktif mi?
    std::string filter_keyword_;   ///< Filtreleme için anahtar kelime
    bool enable_statistics_;       ///< İstatistik tutma aktif mi?
    int log_level_;               ///< Log mesaj seviyesi
    
    // İstatistik değişkenleri
    size_t total_messages_;        ///< Toplam alınan mesaj sayısı
    size_t filtered_messages_;     ///< Filtreleme geçen mesaj sayısı
    rclcpp::Time start_time_;      ///< Node başlangıç zamanı
};

// =============================================================================
// MAIN FONKSIYON - PROGRAM BAŞLANGICI
// =============================================================================

/**
 * @brief Ana program fonksiyonu
 * 
 * ROS2 subscriber node'unu başlatır ve çalıştırır.
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
    
    // ROS2 runtime'ını başlat
    rclcpp::init(argc, argv);
    
    // =========================================================================
    // NODE OLUŞTURMA VE ÇALIŞTIRMA
    // =========================================================================
    
    // Subscriber node'unu oluştur
    auto node = std::make_shared<ParameterSubscriber>();
    
    // Son istatistik raporunu göstermek için signal handler ekleyebiliriz
    // Ama şimdilik basit tutalım
    
    RCLCPP_INFO(node->get_logger(), "🎧 Subscriber çalışıyor... Durdurmak için Ctrl+C basın");
    
    // Node'u çalıştır - mesajları dinlemeye başlar
    rclcpp::spin(node);
    
    // =========================================================================
    // TEMIZLIK İŞLEMLERİ
    // =========================================================================
    
    RCLCPP_INFO(node->get_logger(), "🛑 Subscriber durduruluyor...");
    
    // Çıkarken son istatistik raporunu göster
    // node->show_statistics_report();  // Private fonksiyon olduğu için buradan çağıramayız
    
    // ROS2 sistemini temiz şekilde kapat
    rclcpp::shutdown();
    
    return 0;
}