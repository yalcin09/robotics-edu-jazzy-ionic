// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from day2:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#include "day2/msg/detail/robot_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__msg__RobotStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0x37, 0x04, 0xe9, 0x13, 0x57, 0x67, 0x74,
      0x20, 0xa9, 0x55, 0x31, 0x57, 0xe4, 0xb0, 0x62,
      0xfa, 0x19, 0xbf, 0xc8, 0x33, 0x03, 0x51, 0x4e,
      0x52, 0x4c, 0x76, 0x8f, 0x69, 0xaa, 0x9d, 0x46,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/twist__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
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
#endif

static char day2__msg__RobotStatus__TYPE_NAME[] = "day2/msg/RobotStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Twist__TYPE_NAME[] = "geometry_msgs/msg/Twist";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";

// Define type names, field names, and default values
static char day2__msg__RobotStatus__FIELD_NAME__robot_name[] = "robot_name";
static char day2__msg__RobotStatus__FIELD_NAME__robot_id[] = "robot_id";
static char day2__msg__RobotStatus__FIELD_NAME__timestamp[] = "timestamp";
static char day2__msg__RobotStatus__FIELD_NAME__position[] = "position";
static char day2__msg__RobotStatus__FIELD_NAME__orientation[] = "orientation";
static char day2__msg__RobotStatus__FIELD_NAME__velocity[] = "velocity";
static char day2__msg__RobotStatus__FIELD_NAME__status[] = "status";
static char day2__msg__RobotStatus__FIELD_NAME__battery_level[] = "battery_level";
static char day2__msg__RobotStatus__FIELD_NAME__temperature[] = "temperature";
static char day2__msg__RobotStatus__FIELD_NAME__sensor_status[] = "sensor_status";
static char day2__msg__RobotStatus__FIELD_NAME__sensor_names[] = "sensor_names";
static char day2__msg__RobotStatus__FIELD_NAME__current_task[] = "current_task";
static char day2__msg__RobotStatus__FIELD_NAME__task_progress[] = "task_progress";
static char day2__msg__RobotStatus__FIELD_NAME__error_message[] = "error_message";

static rosidl_runtime_c__type_description__Field day2__msg__RobotStatus__FIELDS[] = {
  {
    {day2__msg__RobotStatus__FIELD_NAME__robot_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotStatus__FIELD_NAME__robot_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotStatus__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotStatus__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotStatus__FIELD_NAME__orientation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotStatus__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Twist__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotStatus__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotStatus__FIELD_NAME__battery_level, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotStatus__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotStatus__FIELD_NAME__sensor_status, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotStatus__FIELD_NAME__sensor_names, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotStatus__FIELD_NAME__current_task, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotStatus__FIELD_NAME__task_progress, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__RobotStatus__FIELD_NAME__error_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription day2__msg__RobotStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
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
};

const rosidl_runtime_c__type_description__TypeDescription *
day2__msg__RobotStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__msg__RobotStatus__TYPE_NAME, 20, 20},
      {day2__msg__RobotStatus__FIELDS, 14, 14},
    },
    {day2__msg__RobotStatus__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Twist__EXPECTED_HASH, geometry_msgs__msg__Twist__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Twist__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Robot ID ve temel bilgiler\n"
  "string robot_name                       # Robotun ad\\xc4\\xb1 (\\xc3\\xb6rn: \"robot_01\")\n"
  "int32 robot_id                          # Robotun benzersiz ID'si\n"
  "builtin_interfaces/Time timestamp       # Mesaj\\xc4\\xb1n olu\\xc5\\x9fturulma zaman\\xc4\\xb1\n"
  "\n"
  "# Robot pozisyon bilgileri\n"
  "geometry_msgs/Point position            # X, Y, Z koordinatlar\\xc4\\xb1\n"
  "geometry_msgs/Vector3 orientation       # Roll, Pitch, Yaw (radian)\n"
  "geometry_msgs/Twist velocity            # Linear ve angular h\\xc4\\xb1zlar\n"
  "\n"
  "# Robot durumu\n"
  "uint8 status                            # Robot durumu (enum gibi kullan\\xc4\\xb1lacak)\n"
  "uint8 STATUS_IDLE=0                     # Bekleme durumu\n"
  "uint8 STATUS_MOVING=1                   # Hareket halinde\n"
  "uint8 STATUS_WORKING=2                  # \\xc4\\xb0\\xc5\\x9f yap\\xc4\\xb1yor\n"
  "uint8 STATUS_CHARGING=3                 # \\xc5\\x9earj oluyor\n"
  "uint8 STATUS_ERROR=4                    # Hata durumu\n"
  "\n"
  "# Sens\\xc3\\xb6r verileri\n"
  "float32 battery_level                   # Batarya seviyesi (0.0-1.0)\n"
  "float32 temperature                     # S\\xc4\\xb1cakl\\xc4\\xb1k (Celsius)\n"
  "bool[] sensor_status                    # Sens\\xc3\\xb6rlerin durumu (her sens\\xc3\\xb6r i\\xc3\\xa7in true/false)\n"
  "string[] sensor_names                   # Sens\\xc3\\xb6rlerin isimleri\n"
  "\n"
  "# Ek bilgiler\n"
  "string current_task                     # \\xc5\\x9eu anki g\\xc3\\xb6rev\n"
  "float32 task_progress                   # G\\xc3\\xb6rev tamamlanma oran\\xc4\\xb1 (0.0-1.0)\n"
  "string error_message                    # Hata durumunda hata mesaj\\xc4\\xb1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
day2__msg__RobotStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__msg__RobotStatus__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1351, 1351},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__msg__RobotStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__msg__RobotStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Twist__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
