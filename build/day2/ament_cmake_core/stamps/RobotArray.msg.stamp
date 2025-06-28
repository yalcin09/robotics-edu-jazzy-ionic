# Header bilgisi
std_msgs/Header header          # Timestamp ve frame bilgisi

# Fleet bilgileri
string fleet_name               # Fleet adı (örn: "warehouse_fleet", "delivery_robots")
uint32 fleet_id                 # Fleet benzersiz ID'si
string coordinator_node         # Fleet'i koordine eden node adı

# Robot array'i - ana veri
RobotStatus[] robots            # Robot durumları array'i (custom message kullanıyor)

# Fleet istatistikleri
uint32 total_robots             # Toplam robot sayısı
uint32 active_robots            # Aktif robot sayısı
uint32 idle_robots              # Boşta olan robot sayısı
uint32 charging_robots          # Şarj olan robot sayısı
uint32 error_robots             # Hata durumundaki robot sayısı

# Fleet genel durumu
uint8 fleet_status              # Fleet'in genel durumu
uint8 FLEET_IDLE=0              # Fleet boşta
uint8 FLEET_ACTIVE=1            # Fleet çalışıyor
uint8 FLEET_EMERGENCY=2         # Acil durum
uint8 FLEET_MAINTENANCE=3       # Bakım modu

# Performans metrikleri
float32 average_battery_level           # Ortalama batarya seviyesi
float32 total_distance_traveled         # Toplam kat edilen mesafe (m)
float32 average_speed                   # Ortalama hız (m/s)
uint32 completed_tasks                  # Tamamlanan görev sayısı
uint32 pending_tasks                    # Bekleyen görev sayısı

# Coğrafi bilgiler (fleet'in çalıştığı alan)
geometry_msgs/Point workspace_min       # Çalışma alanı minimum köşesi
geometry_msgs/Point workspace_max       # Çalışma alanı maksimum köşesi
string workspace_name                   # Çalışma alanı adı

# Acil durum bilgileri
bool emergency_stop                             # Acil durdurma aktif mi?
string emergency_reason                         # Acil durdurma sebebi
builtin_interfaces/Time emergency_timestamp     # Acil durdurma zamanı

# Sistem sağlığı
float32 system_health_score                     # Sistem sağlık skoru (0.0-1.0)
string[] critical_warnings                      # Kritik uyarılar
string[] system_messages                        # Sistem mesajları

# Update frequency bilgisi
float32 update_frequency_hz                     # Bu mesajın güncellenme frekansı