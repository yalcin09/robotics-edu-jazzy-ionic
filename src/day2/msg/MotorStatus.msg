# Header ve temel bilgiler
std_msgs/Header header          # Timestamp ve frame bilgisi
string motor_name               # Motor adı (örn: "left_wheel", "right_wheel", "arm_joint_1")
uint32 motor_id                 # Motor benzersiz ID'si

# Motor performans verileri
float32 rpm                     # Dakikadaki devir sayısı (Revolutions Per Minute)
float32 target_rpm              # Hedef RPM değeri
float32 current                 # Motor akımı (Ampere)
float32 voltage                 # Motor voltajı (Volt)
float32 power                   # Güç tüketimi (Watt)

# Thermal verileri
float32 temperature             # Motor sıcaklığı (Celsius)
float32 max_temperature         # Maksimum çalışma sıcaklığı

# Pozisyon verileri (encoder'dan gelen)
float64 position                # Mevcut pozisyon (radyan veya derece)
float64 target_position         # Hedef pozisyon
float64 velocity                # Açısal hız (rad/s)
float64 acceleration            # Açısal ivme (rad/s²)

# Motor durumu ve hata flags
uint8 status                    # Motor durumu
uint8 STATUS_STOPPED=0          # Motor durdu
uint8 STATUS_STARTING=1         # Motor başlıyor
uint8 STATUS_RUNNING=2          # Motor çalışıyor
uint8 STATUS_STOPPING=3         # Motor duruyor
uint8 STATUS_ERROR=4            # Motor hatası
uint8 STATUS_MAINTENANCE=5      # Bakım modu

# Hata flag'leri (bitwise operations için)
uint32 error_flags              # Hata bayrakları
uint32 ERROR_NONE=0             # Hata yok
uint32 ERROR_OVERCURRENT=1      # Aşırı akım (bit 0)
uint32 ERROR_OVERHEAT=2         # Aşırı ısınma (bit 1) 
uint32 ERROR_OVERVOLTAGE=4      # Aşırı voltaj (bit 2)
uint32 ERROR_UNDERVOLTAGE=8     # Düşük voltaj (bit 3)
uint32 ERROR_ENCODER=16         # Encoder hatası (bit 4)
uint32 ERROR_COMMUNICATION=32   # İletişim hatası (bit 5)
uint32 ERROR_MECHANICAL=64      # Mekanik hata (bit 6)

# Control verileri
float32 control_effort          # Kontrol çıkışı (-1.0 to 1.0)
float32 pid_error               # PID hata değeri
float32 pid_output              # PID çıkış değeri

# İstatistik verileri
uint64 total_revolutions        # Toplam tur sayısı
float32 uptime_hours            # Çalışma süresi (saat)
uint32 start_count              # Kaç kez başlatıldı