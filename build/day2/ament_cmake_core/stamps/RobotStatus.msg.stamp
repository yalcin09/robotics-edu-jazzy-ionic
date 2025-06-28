# Robot ID ve temel bilgiler
string robot_name                       # Robotun adı (örn: "robot_01")
int32 robot_id                          # Robotun benzersiz ID'si
builtin_interfaces/Time timestamp       # Mesajın oluşturulma zamanı

# Robot pozisyon bilgileri
geometry_msgs/Point position            # X, Y, Z koordinatları
geometry_msgs/Vector3 orientation       # Roll, Pitch, Yaw (radian)
geometry_msgs/Twist velocity            # Linear ve angular hızlar

# Robot durumu
uint8 status                            # Robot durumu (enum gibi kullanılacak)
uint8 STATUS_IDLE=0                     # Bekleme durumu
uint8 STATUS_MOVING=1                   # Hareket halinde
uint8 STATUS_WORKING=2                  # İş yapıyor
uint8 STATUS_CHARGING=3                 # Şarj oluyor
uint8 STATUS_ERROR=4                    # Hata durumu

# Sensör verileri
float32 battery_level                   # Batarya seviyesi (0.0-1.0)
float32 temperature                     # Sıcaklık (Celsius)
bool[] sensor_status                    # Sensörlerin durumu (her sensör için true/false)
string[] sensor_names                   # Sensörlerin isimleri

# Ek bilgiler
string current_task                     # Şu anki görev
float32 task_progress                   # Görev tamamlanma oranı (0.0-1.0)
string error_message                    # Hata durumunda hata mesajı