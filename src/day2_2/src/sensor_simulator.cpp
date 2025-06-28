#include <chrono>
#include <memory>
#include <random>
#include <vector>

#include "rclcpp/rclcpp.hpp"
#include "day2/msg/sensor_data.hpp"
#include "std_msgs/msg/header.hpp"

using namespace std::chrono_literals;

/**
 * SensorSimulator sınıfı
 * Farklı sensör tiplerini simüle eder
 */
class SensorSimulator : public rclcpp::Node
{
public:
    SensorSimulator() : Node("sensor_simulator")
    {
        // Random number generator
        rng_.seed(std::chrono::steady_clock::now().time_since_epoch().count());
        
        // Farklı sensörler için publisher'lar oluştur
        setup_sensors();
        
        // Timer - tüm sensörleri periyodik olarak güncelle
        timer_ = this->create_wall_timer(
            100ms, std::bind(&SensorSimulator::publish_sensor_data, this));
        
        RCLCPP_INFO(this->get_logger(), "Sensor Simulator başlatıldı! %zu sensör aktif.", sensors_.size());
    }

private:
    /**
     * Sensör yapılandırması
     */
    struct SensorConfig {
        std::string name;                    // Sensör adı
        std::string topic;                   // Topic adı
        uint32_t id;                        // Sensör ID'si
        std::vector<std::string> value_names; // Değer isimleri
        std::string unit;                    // Ölçü birimi
        std::chrono::milliseconds frequency; // Güncelleme frekansı
        rclcpp::Publisher<day2::msg::SensorData>::SharedPtr publisher;
        std::chrono::steady_clock::time_point last_update;
    };
    
    /**
     * Sensörleri kurulum
     */
    void setup_sensors()
    {
        // LiDAR sensörü
        SensorConfig lidar;
        lidar.name = "lidar_front";
        lidar.topic = "sensor/lidar";
        lidar.id = 1001;
        lidar.value_names = {"distance_front", "distance_left", "distance_right", "distance_back"};
        lidar.unit = "meters";
        lidar.frequency = 50ms;  // 20 Hz
        lidar.publisher = this->create_publisher<day2::msg::SensorData>(lidar.topic, 10);
        sensors_.push_back(lidar);
        
        // Kamera sensörü (meta data)
        SensorConfig camera;
        camera.name = "camera_rgb";
        camera.topic = "sensor/camera";
        camera.id = 1002;
        camera.value_names = {"brightness", "contrast", "saturation", "fps"};
        camera.unit = "various";
        camera.frequency = 33ms;  // ~30 Hz
        camera.publisher = this->create_publisher<day2::msg::SensorData>(camera.topic, 10);
        sensors_.push_back(camera);
        
        // IMU sensörü
        SensorConfig imu;
        imu.name = "imu_base";
        imu.topic = "sensor/imu";
        imu.id = 1003;
        imu.value_names = {"accel_x", "accel_y", "accel_z", "gyro_x", "gyro_y", "gyro_z"};
        imu.unit = "m/s²_rad/s";
        imu.frequency = 10ms;  // 100 Hz
        imu.publisher = this->create_publisher<day2::msg::SensorData>(imu.topic, 10);
        sensors_.push_back(imu);
        
        // GPS sensörü
        SensorConfig gps;
        gps.name = "gps_module";
        gps.topic = "sensor/gps";
        gps.id = 1004;
        gps.value_names = {"latitude", "longitude", "altitude", "satellites"};
        gps.unit = "degrees_meters_count";
        gps.frequency = 1000ms;  // 1 Hz
        gps.publisher = this->create_publisher<day2::msg::SensorData>(gps.topic, 10);
        sensors_.push_back(gps);
        
        // Batarya monitörü
        SensorConfig battery;
        battery.name = "battery_monitor";
        battery.topic = "sensor/battery";
        battery.id = 1005;
        battery.value_names = {"voltage", "current", "percentage", "temperature"};
        battery.unit = "V_A_percent_C";
        battery.frequency = 5000ms;  // 0.2 Hz
        battery.publisher = this->create_publisher<day2::msg::SensorData>(battery.topic, 10);
        sensors_.push_back(battery);
    }
    
    /**
     * Tüm sensör verilerini publish et
     */
    void publish_sensor_data()
    {
        auto now = std::chrono::steady_clock::now();
        
        for (auto& sensor : sensors_) {
            // Sensör frekansını kontrol et
            if (now - sensor.last_update >= sensor.frequency) {
                publish_single_sensor(sensor);
                sensor.last_update = now;
            }
        }
    }
    
    /**
     * Tek bir sensörün verisini publish et
     */
    void publish_single_sensor(SensorConfig& sensor)
    {
        auto msg = day2::msg::SensorData();
        
        // Header bilgileri
        msg.header.stamp = this->get_clock()->now();
        msg.header.frame_id = sensor.name + "_frame";
        
        // Sensör bilgileri
        msg.sensor_name = sensor.name;
        msg.sensor_id = sensor.id;
        msg.value_names = sensor.value_names;
        msg.unit = sensor.unit;
        
        // Sensöre göre veri üret
        msg.values = generate_sensor_values(sensor);
        
        // Sensör durumu (bazen arıza simüle et)
        msg.is_active = (get_random_float(0, 1) > 0.02);  // %2 arıza şansı
        msg.accuracy = msg.is_active ? get_random_float(0.85, 1.0) : 0.0;
        msg.error_code = msg.is_active ? 0 : (100 + sensor.id);  // Basit hata kodu
        
        // Publish et
        sensor.publisher->publish(msg);
        
        // Ara sıra log göster
        if (get_random_float(0, 1) < 0.01) {  // %1 şans ile log
            RCLCPP_INFO(this->get_logger(), 
                "📡 %s: [%.2f, %.2f, %.2f...] %s (accuracy: %.1f%%)", 
                sensor.name.c_str(),
                msg.values.size() > 0 ? msg.values[0] : 0.0,
                msg.values.size() > 1 ? msg.values[1] : 0.0,
                msg.values.size() > 2 ? msg.values[2] : 0.0,
                sensor.unit.c_str(),
                msg.accuracy * 100.0);
        }
    }
    
    /**
     * Sensöre göre gerçekçi veri üret
     */
    std::vector<double> generate_sensor_values(const SensorConfig& sensor)
    {
        std::vector<double> values;
        
        if (sensor.name == "lidar_front") {
            // LiDAR mesafe verileri (0.1 - 10.0 metre)
            values.push_back(get_random_float(0.5, 8.0));  // front
            values.push_back(get_random_float(0.3, 5.0));  // left
            values.push_back(get_random_float(0.3, 5.0));  // right
            values.push_back(get_random_float(1.0, 10.0)); // back
            
        } else if (sensor.name == "camera_rgb") {
            // Kamera meta verileri
            values.push_back(get_random_float(50, 200));    // brightness
            values.push_back(get_random_float(0.8, 1.2));  // contrast
            values.push_back(get_random_float(0.9, 1.1));  // saturation
            values.push_back(get_random_float(28, 32));     // fps
            
        } else if (sensor.name == "imu_base") {
            // IMU verileri (accelerometer + gyroscope)
            values.push_back(get_random_float(-2.0, 2.0));  // accel_x
            values.push_back(get_random_float(-2.0, 2.0));  // accel_y
            values.push_back(get_random_float(8.8, 10.8));  // accel_z (gravity)
            values.push_back(get_random_float(-0.1, 0.1));  // gyro_x
            values.push_back(get_random_float(-0.1, 0.1));  // gyro_y
            values.push_back(get_random_float(-0.2, 0.2));  // gyro_z
            
        } else if (sensor.name == "gps_module") {
            // GPS koordinatları (İzmir civarı)
            values.push_back(38.4237 + get_random_float(-0.01, 0.01));  // latitude
            values.push_back(27.1428 + get_random_float(-0.01, 0.01));  // longitude
            values.push_back(get_random_float(10, 200));                 // altitude
            values.push_back(get_random_int(4, 12));                     // satellites
            
        } else if (sensor.name == "battery_monitor") {
            // Batarya verileri
            static float battery_voltage = 12.0;  // Başlangıç voltajı
            battery_voltage += get_random_float(-0.1, 0.05);  // Yavaş azalma
            battery_voltage = std::max(10.5f, std::min(12.6f, battery_voltage));
            
            values.push_back(battery_voltage);                           // voltage
            values.push_back(get_random_float(0.5, 3.0));              // current
            values.push_back((battery_voltage - 10.5) / 2.1 * 100.0);  // percentage
            values.push_back(get_random_float(20, 35));                 // temperature
        }
        
        return values;
    }
    
    /**
     * Random float değer
     */
    float get_random_float(float min, float max)
    {
        std::uniform_real_distribution<float> dist(min, max);
        return dist(rng_);
    }
    
    /**
     * Random integer değer
     */
    int get_random_int(int min, int max)
    {
        std::uniform_int_distribution<int> dist(min, max);
        return dist(rng_);
    }
    
    // Member variables
    std::vector<SensorConfig> sensors_;         // Tüm sensörler
    rclcpp::TimerBase::SharedPtr timer_;        // Ana timer
    std::mt19937 rng_;                          // Random number generator
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SensorSimulator>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}