# Header bilgisi - standart ROS2 header
std_msgs/Header header                  # Timestamp ve frame_id içerir

# Sensör kimlik bilgileri
string sensor_name                      # Sensörün adı
uint32 sensor_id                        # Sensörün ID'si

# Sensör değerleri - farklı sensör türleri için
float64[] values                        # Sensör değerleri array'i
string[] value_names                    # Her değerin ne anlama geldiği
string unit                             # Ölçü birimi (örn: "meters", "degrees", "volts")

# Sensör durumu
bool is_active                          # Sensör aktif mi?
float32 accuracy                        # Doğruluk oranı (0.0-1.0)
uint32 error_code                       # Hata kodu (0 = hata yok)