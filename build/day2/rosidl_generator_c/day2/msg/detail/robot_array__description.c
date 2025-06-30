// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from day2:msg/RobotArray.idl
// generated code does not contain a copyright notice

#include "day2/msg/detail/robot_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__msg__RobotArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0x43, 0x81, 0x7f, 0x72, 0x1b, 0xbe, 0x37,
      0xf8, 0x3d, 0x1e, 0xf5, 0xb1, 0xe4, 0x2f, 0x88,
      0x0a, 0x85, 0x77, 0x92, 0x8b, 0x5a, 0x0e, 0x78,
      0xe9, 0x13, 0x10, 0x5d, 0xda, 0xe3, 0x0b, 0x9a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "geometry_msgs/msg/detail/twist__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "day2/msg/detail/robot_status__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t day2__msg__RobotStatus__EXPECTED_HASH = {1, {
    0x63, 0x37, 0x04, 0xe9, 0x13, 0x57, 0x67, 0x74,
    0x20, 0xa9, 0x55, 0x31, 0x57, 0xe4, 0xb0, 0x62,
    0xfa, 0x19, 0xbf, 0xc8, 0x33, 0x03, 0x51, 0x4e,
    0x52, 0x4c, 0x76, 0x8f, 0x69, 0xaa, 0x9d, 0x46,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Twist__EXPECTED_HASH = {1, {
    0x9c, 0x45, 0xbf, 0x16, 0xfe, 0x09, 0x83, 0xd8,
    0x0e, 0x3c, 0xfe, 0x75, 0x0d, 0x68, 0x35, 0x84,
    0x3d, 0x26, 0x5a, 0x9a, 0x6c, 0x46, 0xbd, 0x2e,
    0x60, 0x9f, 0xcd, 0xdd, 0xe6, 0xfb, 0x8d, 0x2a,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char day2__msg__RobotArray__TYPE_NAME[] = "day2/msg/RobotArray";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char day2__msg__RobotStatus__TYPE_NAME[] = "day2/msg/RobotStatus";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Twist__TYPE_NAME[] = "geometry_msgs/msg/Twist";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char day2__msg__RobotArray__FIELD_NAME__header[] = "header";
static char day2__msg__RobotArray__FIELD_NAME__fleet_name[] = "fleet_name";
static char day2__msg__RobotArray__FIELD_NAME__fleet_id[] = "fleet_id";
static char day2__msg__RobotArray__FIELD_NAME__coordinator_node[] = "coordinator_node";
static char day2__msg__RobotArray__FIELD_NAME__robots[] = "robots";
static char day2__msg__RobotArray__FIELD_NAME__total_robots[] = "total_robots";
static char day2__msg__RobotArray__FIELD_NAME__active_robots[] = "active_robots";
static char day2__msg__RobotArray__FIELD_NAME__idle_robots[] = "idle_robots";
static char day2__msg__RobotArray__FIELD_NAME__charging_robots[] = "charging_robots";
static char day2__msg__RobotArray__FIELD_NAME__error_robots[] = "error_robots";
static char day2__msg__RobotArray__FIELD_NAME__fleet_status[] = "fleet_status";
static char day2__msg__RobotArray__FIELD_NAME__average_battery_level[] = "average_battery_level";
static char day2__msg__RobotArray__FIELD_NAME__total_distance_traveled[] = "total_distance_traveled";
static char day2__msg__RobotArray__FIELD_NAME__average_speed[] = "average_speed";
static char day2__msg__RobotArray__FIELD_NAME__completed_tasks[] = "completed_tasks";
static char day2__msg__RobotArray__FIELD_NAME__pending_tasks[] = "pending_tasks";
static char day2__msg__RobotArray__FIELD_NAME__workspace_min[] = "workspace_min";
static char day2__msg__RobotArray__FIELD_NAME__workspace_max[] = "workspace_max";
static char day2__msg__RobotArray__FIELD_NAME__workspace_name[] = "workspace_name";
static char day2__msg__RobotArray__FIELD_NAME__emergency_stop[] = "emergency_stop";
static char day2__msg__RobotArray__FIELD_NAME__emergency_reason[] = "emergency_reason";
static char day2__msg__RobotArray__FIELD_NAME__emergency_timestamp[] = "emergency_timestamp";
static char day2__msg__RobotArray__FIELD_NAME__system_health_score[] = "system_health_score";
static char day2__msg__RobotArray__FIELD_NAME__critical_warnings[] = "critical_warnings";
static char day2__msg__RobotArray__FIELD_NAME__system_messages[] = "system_messages";
static char day2__msg__RobotArray__FIELD_NAME__update_frequency_hz[] = "update_frequency_hz";

static rosidl_runtime_c__type_description__Field day2__msg__RobotArray__FIELDS[] = {
  {
    {day2__msg__RobotArray__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__fleet_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__fleet_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__coordinator_node, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__robots, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {day2__msg__RobotStatus__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__total_robots, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__active_robots, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__idle_robots, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__charging_robots, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__error_robots, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__fleet_status, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__average_battery_level, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__total_distance_traveled, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__average_speed, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__completed_tasks, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__pending_tasks, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__workspace_min, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__workspace_max, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__workspace_name, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__emergency_stop, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__emergency_reason, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__emergency_timestamp, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__system_health_score, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__critical_warnings, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__system_messages, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotArray__FIELD_NAME__update_frequency_hz, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription day2__msg__RobotArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotStatus__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Twist__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
day2__msg__RobotArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__msg__RobotArray__TYPE_NAME, 19, 19},
      {day2__msg__RobotArray__FIELDS, 26, 26},
    },
    {day2__msg__RobotArray__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&day2__msg__RobotStatus__EXPECTED_HASH, day2__msg__RobotStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = day2__msg__RobotStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Twist__EXPECTED_HASH, geometry_msgs__msg__Twist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Twist__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Header bilgisi\n"
  "std_msgs/Header header          # Timestamp ve frame bilgisi\n"
  "\n"
  "# Fleet bilgileri\n"
  "string fleet_name               # Fleet ad\\xc4\\xb1 (\\xc3\\xb6rn: \"warehouse_fleet\", \"delivery_robots\")\n"
  "uint32 fleet_id                 # Fleet benzersiz ID'si\n"
  "string coordinator_node         # Fleet'i koordine eden node ad\\xc4\\xb1\n"
  "\n"
  "# Robot array'i - ana veri\n"
  "RobotStatus[] robots            # Robot durumlar\\xc4\\xb1 array'i (custom message kullan\\xc4\\xb1yor)\n"
  "\n"
  "# Fleet istatistikleri\n"
  "uint32 total_robots             # Toplam robot say\\xc4\\xb1s\\xc4\\xb1\n"
  "uint32 active_robots            # Aktif robot say\\xc4\\xb1s\\xc4\\xb1\n"
  "uint32 idle_robots              # Bo\\xc5\\x9fta olan robot say\\xc4\\xb1s\\xc4\\xb1\n"
  "uint32 charging_robots          # \\xc5\\x9earj olan robot say\\xc4\\xb1s\\xc4\\xb1\n"
  "uint32 error_robots             # Hata durumundaki robot say\\xc4\\xb1s\\xc4\\xb1\n"
  "\n"
  "# Fleet genel durumu\n"
  "uint8 fleet_status              # Fleet'in genel durumu\n"
  "uint8 FLEET_IDLE=0              # Fleet bo\\xc5\\x9fta\n"
  "uint8 FLEET_ACTIVE=1            # Fleet \\xc3\\xa7al\\xc4\\xb1\\xc5\\x9f\\xc4\\xb1yor\n"
  "uint8 FLEET_EMERGENCY=2         # Acil durum\n"
  "uint8 FLEET_MAINTENANCE=3       # Bak\\xc4\\xb1m modu\n"
  "\n"
  "# Performans metrikleri\n"
  "float32 average_battery_level           # Ortalama batarya seviyesi\n"
  "float32 total_distance_traveled         # Toplam kat edilen mesafe (m)\n"
  "float32 average_speed                   # Ortalama h\\xc4\\xb1z (m/s)\n"
  "uint32 completed_tasks                  # Tamamlanan g\\xc3\\xb6rev say\\xc4\\xb1s\\xc4\\xb1\n"
  "uint32 pending_tasks                    # Bekleyen g\\xc3\\xb6rev say\\xc4\\xb1s\\xc4\\xb1\n"
  "\n"
  "# Co\\xc4\\x9frafi bilgiler (fleet'in \\xc3\\xa7al\\xc4\\xb1\\xc5\\x9ft\\xc4\\xb1\\xc4\\x9f\\xc4\\xb1 alan)\n"
  "geometry_msgs/Point workspace_min       # \\xc3\\x87al\\xc4\\xb1\\xc5\\x9fma alan\\xc4\\xb1 minimum k\\xc3\\xb6\\xc5\\x9fesi\n"
  "geometry_msgs/Point workspace_max       # \\xc3\\x87al\\xc4\\xb1\\xc5\\x9fma alan\\xc4\\xb1 maksimum k\\xc3\\xb6\\xc5\\x9fesi\n"
  "string workspace_name                   # \\xc3\\x87al\\xc4\\xb1\\xc5\\x9fma alan\\xc4\\xb1 ad\\xc4\\xb1\n"
  "\n"
  "# Acil durum bilgileri\n"
  "bool emergency_stop                             # Acil durdurma aktif mi?\n"
  "string emergency_reason                         # Acil durdurma sebebi\n"
  "builtin_interfaces/Time emergency_timestamp     # Acil durdurma zaman\\xc4\\xb1\n"
  "\n"
  "# Sistem sa\\xc4\\x9fl\\xc4\\xb1\\xc4\\x9f\\xc4\\xb1\n"
  "float32 system_health_score                     # Sistem sa\\xc4\\x9fl\\xc4\\xb1k skoru (0.0-1.0)\n"
  "string[] critical_warnings                      # Kritik uyar\\xc4\\xb1lar\n"
  "string[] system_messages                        # Sistem mesajlar\\xc4\\xb1\n"
  "\n"
  "# Update frequency bilgisi\n"
  "float32 update_frequency_hz                     # Bu mesaj\\xc4\\xb1n g\\xc3\\xbcncellenme frekans\\xc4\\xb1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
day2__msg__RobotArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__msg__RobotArray__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2178, 2178},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__msg__RobotArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__msg__RobotArray__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *day2__msg__RobotStatus__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Twist__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
