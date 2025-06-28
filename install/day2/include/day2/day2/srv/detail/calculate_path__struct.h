// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from day2:srv/CalculatePath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/srv/calculate_path.h"


#ifndef DAY2__SRV__DETAIL__CALCULATE_PATH__STRUCT_H_
#define DAY2__SRV__DETAIL__CALCULATE_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start_position'
// Member 'goal_position'
// Member 'waypoints'
// Member 'forbidden_zones'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'start_orientation'
// Member 'goal_orientation'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'planning_algorithm'
// Member 'special_constraints'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CalculatePath in the package day2.
typedef struct day2__srv__CalculatePath_Request
{
  /// Başlangıç pozisyonu
  geometry_msgs__msg__Point start_position;
  /// Hedef pozisyon
  geometry_msgs__msg__Point goal_position;
  /// Başlangıç oryantasyonu
  geometry_msgs__msg__Vector3 start_orientation;
  /// Hedef oryantasyon
  geometry_msgs__msg__Vector3 goal_orientation;
  /// Planning constraints
  /// Maksimum hız kısıtı
  float max_velocity;
  /// Maksimum ivme kısıtı
  float max_acceleration;
  /// Minimum dönüş yarıçapı
  float turning_radius;
  /// Engellere olan güvenlik mesafesi
  float safety_margin;
  /// Planning options
  /// Kullanılacak algoritma ("A*", "RRT", "PRM")
  rosidl_runtime_c__String planning_algorithm;
  /// Planning için maksimum süre
  float planning_timeout;
  /// Hız için optimize et
  bool optimize_for_speed;
  /// Yumuşaklık için optimize et
  bool optimize_for_smoothness;
  /// Dinamik engelleri kaçın
  bool avoid_dynamic_obstacles;
  /// Ek kısıtlar
  /// Zorunlu geçiş noktaları
  geometry_msgs__msg__Point__Sequence waypoints;
  /// Yasak bölgeler
  geometry_msgs__msg__Point__Sequence forbidden_zones;
  /// Özel kısıtlar
  rosidl_runtime_c__String__Sequence special_constraints;
} day2__srv__CalculatePath_Request;

// Struct for a sequence of day2__srv__CalculatePath_Request.
typedef struct day2__srv__CalculatePath_Request__Sequence
{
  day2__srv__CalculatePath_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__srv__CalculatePath_Request__Sequence;

// Constants defined in the message

/// Constant 'ERROR_NONE'.
/**
  * Başarı
 */
enum
{
  day2__srv__CalculatePath_Response__ERROR_NONE = 0ul
};

/// Constant 'ERROR_NO_PATH_FOUND'.
/**
  * Path bulunamadı
 */
enum
{
  day2__srv__CalculatePath_Response__ERROR_NO_PATH_FOUND = 1ul
};

/// Constant 'ERROR_START_OCCUPIED'.
/**
  * Başlangıç noktası dolu
 */
enum
{
  day2__srv__CalculatePath_Response__ERROR_START_OCCUPIED = 2ul
};

/// Constant 'ERROR_GOAL_OCCUPIED'.
/**
  * Hedef nokta dolu
 */
enum
{
  day2__srv__CalculatePath_Response__ERROR_GOAL_OCCUPIED = 3ul
};

/// Constant 'ERROR_TIMEOUT'.
/**
  * Zaman aşımı
 */
enum
{
  day2__srv__CalculatePath_Response__ERROR_TIMEOUT = 4ul
};

/// Constant 'ERROR_INVALID_CONSTRAINTS'.
/**
  * Geçersiz kısıtlar
 */
enum
{
  day2__srv__CalculatePath_Response__ERROR_INVALID_CONSTRAINTS = 5ul
};

// Include directives for member types
// Member 'message'
// Member 'algorithm_used'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'path_points'
// Member 'alternative_paths'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.h"
// Member 'path_orientations'
// already included above
// #include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'path_velocities'
// Member 'path_timestamps'
// Member 'alternative_scores'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/CalculatePath in the package day2.
typedef struct day2__srv__CalculatePath_Response
{
  /// RESPONSE KISMI
  /// Path planning sonucu
  /// Path başarıyla hesaplandı mı?
  bool success;
  /// Detaylı açıklama
  rosidl_runtime_c__String message;
  /// Hesaplanan path
  /// Path üzerindeki noktalar
  geometry_msgs__msg__Point__Sequence path_points;
  /// Her noktadaki oryantasyon
  geometry_msgs__msg__Vector3__Sequence path_orientations;
  /// Her segment için hız
  rosidl_runtime_c__float__Sequence path_velocities;
  /// Her noktadaki zaman
  rosidl_runtime_c__float__Sequence path_timestamps;
  /// Path quality metrics
  /// Toplam mesafe
  float total_distance;
  /// Tahmini toplam süre
  float total_time;
  /// Path yumuşaklık skoru (0-1)
  float path_smoothness;
  /// Güvenlik skoru (0-1)
  float safety_score;
  /// Path'deki nokta sayısı
  uint32_t num_waypoints;
  /// Alternative paths (opsiyonel)
  /// Alternatif yollar
  geometry_msgs__msg__Point__Sequence alternative_paths;
  /// Her alternatifin skoru
  rosidl_runtime_c__float__Sequence alternative_scores;
  /// Planning statistics
  /// Planning süresi
  float planning_time_ms;
  /// Kullanılan algoritma
  rosidl_runtime_c__String algorithm_used;
  /// Araştırılan node sayısı
  uint32_t nodes_explored;
  /// İterasyon sayısı
  uint32_t iterations_count;
  /// Hata bilgileri
  /// Hata kodu
  uint32_t error_code;
} day2__srv__CalculatePath_Response;

// Struct for a sequence of day2__srv__CalculatePath_Response.
typedef struct day2__srv__CalculatePath_Response__Sequence
{
  day2__srv__CalculatePath_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__srv__CalculatePath_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  day2__srv__CalculatePath_Event__request__MAX_SIZE = 1
};
// response
enum
{
  day2__srv__CalculatePath_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CalculatePath in the package day2.
typedef struct day2__srv__CalculatePath_Event
{
  service_msgs__msg__ServiceEventInfo info;
  day2__srv__CalculatePath_Request__Sequence request;
  day2__srv__CalculatePath_Response__Sequence response;
} day2__srv__CalculatePath_Event;

// Struct for a sequence of day2__srv__CalculatePath_Event.
typedef struct day2__srv__CalculatePath_Event__Sequence
{
  day2__srv__CalculatePath_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} day2__srv__CalculatePath_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DAY2__SRV__DETAIL__CALCULATE_PATH__STRUCT_H_
