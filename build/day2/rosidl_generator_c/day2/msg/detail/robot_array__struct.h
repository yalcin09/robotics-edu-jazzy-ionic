// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from day2:msg/RobotArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/msg/robot_array.h"


#ifndef DAY2__MSG__DETAIL__ROBOT_ARRAY__STRUCT_H_
#define DAY2__MSG__DETAIL__ROBOT_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'FLEET_IDLE'.
/**
  * Fleet boşta
 */
enum
{
  day2__msg__RobotArray__FLEET_IDLE = 0
};

/// Constant 'FLEET_ACTIVE'.
/**
  * Fleet çalışıyor
 */
enum
{
  day2__msg__RobotArray__FLEET_ACTIVE = 1
};

/// Constant 'FLEET_EMERGENCY'.
/**
  * Acil durum
 */
enum
{
  day2__msg__RobotArray__FLEET_EMERGENCY = 2
};

/// Constant 'FLEET_MAINTENANCE'.
/**
  * Bakım modu
 */
enum
{
  day2__msg__RobotArray__FLEET_MAINTENANCE = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'fleet_name'
// Member 'coordinator_node'
// Member 'workspace_name'
// Member 'emergency_reason'
// Member 'critical_warnings'
// Member 'system_messages'
#include "rosidl_runtime_c/string.h"
// Member 'robots'
#include "day2/msg/detail/robot_status__struct.h"
// Member 'workspace_min'
// Member 'workspace_max'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'emergency_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/RobotArray in the package day2.
/**
  * Header bilgisi
 */
typedef struct day2__msg__RobotArray
{
  /// Timestamp ve frame bilgisi
  std_msgs__msg__Header header;
  /// Fleet bilgileri
  /// Fleet adı (örn: "warehouse_fleet", "delivery_robots")
  rosidl_runtime_c__String fleet_name;
  /// Fleet benzersiz ID'si
  uint32_t fleet_id;
  /// Fleet'i koordine eden node adı
  rosidl_runtime_c__String coordinator_node;
  /// Robot array'i - ana veri
  /// Robot durumları array'i (custom message kullanıyor)
  day2__msg__RobotStatus__Sequence robots;
  /// Fleet istatistikleri
  /// Toplam robot sayısı
  uint32_t total_robots;
  /// Aktif robot sayısı
  uint32_t active_robots;
  /// Boşta olan robot sayısı
  uint32_t idle_robots;
  /// Şarj olan robot sayısı
  uint32_t charging_robots;
  /// Hata durumundaki robot sayısı
  uint32_t error_robots;
  /// Fleet genel durumu
  /// Fleet'in genel durumu
  uint8_t fleet_status;
  /// Performans metrikleri
  /// Ortalama batarya seviyesi
  float average_battery_level;
  /// Toplam kat edilen mesafe (m)
  float total_distance_traveled;
  /// Ortalama hız (m/s)
  float average_speed;
  /// Tamamlanan görev sayısı
  uint32_t completed_tasks;
  /// Bekleyen görev sayısı
  uint32_t pending_tasks;
  /// Coğrafi bilgiler (fleet'in çalıştığı alan)
  /// Çalışma alanı minimum köşesi
  geometry_msgs__msg__Point workspace_min;
  /// Çalışma alanı maksimum köşesi
  geometry_msgs__msg__Point workspace_max;
  /// Çalışma alanı adı
  rosidl_runtime_c__String workspace_name;
  /// Acil durum bilgileri
  /// Acil durdurma aktif mi?
  bool emergency_stop;
  /// Acil durdurma sebebi
  rosidl_runtime_c__String emergency_reason;
  /// Acil durdurma zamanı
  builtin_interfaces__msg__Time emergency_timestamp;
  /// Sistem sağlığı
  /// Sistem sağlık skoru (0.0-1.0)
  float system_health_score;
  /// Kritik uyarılar
  rosidl_runtime_c__String__Sequence critical_warnings;
  /// Sistem mesajları
  rosidl_runtime_c__String__Sequence system_messages;
  /// Update frequency bilgisi
  /// Bu mesajın güncellenme frekansı
  float update_frequency_hz;
} day2__msg__RobotArray;

// Struct for a sequence of day2__msg__RobotArray.
typedef struct day2__msg__RobotArray__Sequence
{
  day2__msg__RobotArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__msg__RobotArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DAY2__MSG__DETAIL__ROBOT_ARRAY__STRUCT_H_
