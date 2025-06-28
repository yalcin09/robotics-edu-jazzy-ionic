// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from day2:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/msg/motor_status.h"


#ifndef DAY2__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
#define DAY2__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'STATUS_STOPPED'.
/**
  * Motor durdu
 */
enum
{
  day2__msg__MotorStatus__STATUS_STOPPED = 0
};

/// Constant 'STATUS_STARTING'.
/**
  * Motor başlıyor
 */
enum
{
  day2__msg__MotorStatus__STATUS_STARTING = 1
};

/// Constant 'STATUS_RUNNING'.
/**
  * Motor çalışıyor
 */
enum
{
  day2__msg__MotorStatus__STATUS_RUNNING = 2
};

/// Constant 'STATUS_STOPPING'.
/**
  * Motor duruyor
 */
enum
{
  day2__msg__MotorStatus__STATUS_STOPPING = 3
};

/// Constant 'STATUS_ERROR'.
/**
  * Motor hatası
 */
enum
{
  day2__msg__MotorStatus__STATUS_ERROR = 4
};

/// Constant 'STATUS_MAINTENANCE'.
/**
  * Bakım modu
 */
enum
{
  day2__msg__MotorStatus__STATUS_MAINTENANCE = 5
};

/// Constant 'ERROR_NONE'.
/**
  * Hata yok
 */
enum
{
  day2__msg__MotorStatus__ERROR_NONE = 0ul
};

/// Constant 'ERROR_OVERCURRENT'.
/**
  * Aşırı akım (bit 0)
 */
enum
{
  day2__msg__MotorStatus__ERROR_OVERCURRENT = 1ul
};

/// Constant 'ERROR_OVERHEAT'.
/**
  * Aşırı ısınma (bit 1)
 */
enum
{
  day2__msg__MotorStatus__ERROR_OVERHEAT = 2ul
};

/// Constant 'ERROR_OVERVOLTAGE'.
/**
  * Aşırı voltaj (bit 2)
 */
enum
{
  day2__msg__MotorStatus__ERROR_OVERVOLTAGE = 4ul
};

/// Constant 'ERROR_UNDERVOLTAGE'.
/**
  * Düşük voltaj (bit 3)
 */
enum
{
  day2__msg__MotorStatus__ERROR_UNDERVOLTAGE = 8ul
};

/// Constant 'ERROR_ENCODER'.
/**
  * Encoder hatası (bit 4)
 */
enum
{
  day2__msg__MotorStatus__ERROR_ENCODER = 16ul
};

/// Constant 'ERROR_COMMUNICATION'.
/**
  * İletişim hatası (bit 5)
 */
enum
{
  day2__msg__MotorStatus__ERROR_COMMUNICATION = 32ul
};

/// Constant 'ERROR_MECHANICAL'.
/**
  * Mekanik hata (bit 6)
 */
enum
{
  day2__msg__MotorStatus__ERROR_MECHANICAL = 64ul
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'motor_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MotorStatus in the package day2.
/**
  * Header ve temel bilgiler
 */
typedef struct day2__msg__MotorStatus
{
  /// Timestamp ve frame bilgisi
  std_msgs__msg__Header header;
  /// Motor adı (örn: "left_wheel", "right_wheel", "arm_joint_1")
  rosidl_runtime_c__String motor_name;
  /// Motor benzersiz ID'si
  uint32_t motor_id;
  /// Motor performans verileri
  /// Dakikadaki devir sayısı (Revolutions Per Minute)
  float rpm;
  /// Hedef RPM değeri
  float target_rpm;
  /// Motor akımı (Ampere)
  float current;
  /// Motor voltajı (Volt)
  float voltage;
  /// Güç tüketimi (Watt)
  float power;
  /// Thermal verileri
  /// Motor sıcaklığı (Celsius)
  float temperature;
  /// Maksimum çalışma sıcaklığı
  float max_temperature;
  /// Pozisyon verileri (encoder'dan gelen)
  /// Mevcut pozisyon (radyan veya derece)
  double position;
  /// Hedef pozisyon
  double target_position;
  /// Açısal hız (rad/s)
  double velocity;
  /// Açısal ivme (rad/s²)
  double acceleration;
  /// Motor durumu ve hata flags
  /// Motor durumu
  uint8_t status;
  /// Hata flag'leri (bitwise operations için)
  /// Hata bayrakları
  uint32_t error_flags;
  /// Control verileri
  /// Kontrol çıkışı (-1.0 to 1.0)
  float control_effort;
  /// PID hata değeri
  float pid_error;
  /// PID çıkış değeri
  float pid_output;
  /// İstatistik verileri
  /// Toplam tur sayısı
  uint64_t total_revolutions;
  /// Çalışma süresi (saat)
  float uptime_hours;
  /// Kaç kez başlatıldı
  uint32_t start_count;
} day2__msg__MotorStatus;

// Struct for a sequence of day2__msg__MotorStatus.
typedef struct day2__msg__MotorStatus__Sequence
{
  day2__msg__MotorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__msg__MotorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DAY2__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
