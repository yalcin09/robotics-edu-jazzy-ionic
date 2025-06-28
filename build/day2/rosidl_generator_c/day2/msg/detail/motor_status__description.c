// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from day2:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#include "day2/msg/detail/motor_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__msg__MotorStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2c, 0x55, 0xc1, 0xe5, 0xad, 0xfc, 0x61, 0x5e,
      0x1c, 0x49, 0xc7, 0x23, 0x9a, 0x28, 0x43, 0xff,
      0x9b, 0xff, 0x41, 0x1f, 0x25, 0x86, 0x3c, 0x2c,
      0x9e, 0xd4, 0x4e, 0x0b, 0x39, 0xcc, 0x3e, 0x09,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char day2__msg__MotorStatus__TYPE_NAME[] = "day2/msg/MotorStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char day2__msg__MotorStatus__FIELD_NAME__header[] = "header";
static char day2__msg__MotorStatus__FIELD_NAME__motor_name[] = "motor_name";
static char day2__msg__MotorStatus__FIELD_NAME__motor_id[] = "motor_id";
static char day2__msg__MotorStatus__FIELD_NAME__rpm[] = "rpm";
static char day2__msg__MotorStatus__FIELD_NAME__target_rpm[] = "target_rpm";
static char day2__msg__MotorStatus__FIELD_NAME__current[] = "current";
static char day2__msg__MotorStatus__FIELD_NAME__voltage[] = "voltage";
static char day2__msg__MotorStatus__FIELD_NAME__power[] = "power";
static char day2__msg__MotorStatus__FIELD_NAME__temperature[] = "temperature";
static char day2__msg__MotorStatus__FIELD_NAME__max_temperature[] = "max_temperature";
static char day2__msg__MotorStatus__FIELD_NAME__position[] = "position";
static char day2__msg__MotorStatus__FIELD_NAME__target_position[] = "target_position";
static char day2__msg__MotorStatus__FIELD_NAME__velocity[] = "velocity";
static char day2__msg__MotorStatus__FIELD_NAME__acceleration[] = "acceleration";
static char day2__msg__MotorStatus__FIELD_NAME__status[] = "status";
static char day2__msg__MotorStatus__FIELD_NAME__error_flags[] = "error_flags";
static char day2__msg__MotorStatus__FIELD_NAME__control_effort[] = "control_effort";
static char day2__msg__MotorStatus__FIELD_NAME__pid_error[] = "pid_error";
static char day2__msg__MotorStatus__FIELD_NAME__pid_output[] = "pid_output";
static char day2__msg__MotorStatus__FIELD_NAME__total_revolutions[] = "total_revolutions";
static char day2__msg__MotorStatus__FIELD_NAME__uptime_hours[] = "uptime_hours";
static char day2__msg__MotorStatus__FIELD_NAME__start_count[] = "start_count";

static rosidl_runtime_c__type_description__Field day2__msg__MotorStatus__FIELDS[] = {
  {
    {day2__msg__MotorStatus__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__motor_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__motor_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__rpm, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__target_rpm, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__current, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__voltage, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__power, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__max_temperature, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__target_position, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__acceleration, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__error_flags, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__control_effort, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__pid_error, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__pid_output, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__total_revolutions, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__uptime_hours, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__MotorStatus__FIELD_NAME__start_count, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription day2__msg__MotorStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
day2__msg__MotorStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__msg__MotorStatus__TYPE_NAME, 20, 20},
      {day2__msg__MotorStatus__FIELDS, 22, 22},
    },
    {day2__msg__MotorStatus__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Header ve temel bilgiler\n"
  "std_msgs/Header header          # Timestamp ve frame bilgisi\n"
  "string motor_name               # Motor ad\\xc4\\xb1 (\\xc3\\xb6rn: \"left_wheel\", \"right_wheel\", \"arm_joint_1\")\n"
  "uint32 motor_id                 # Motor benzersiz ID'si\n"
  "\n"
  "# Motor performans verileri\n"
  "float32 rpm                     # Dakikadaki devir say\\xc4\\xb1s\\xc4\\xb1 (Revolutions Per Minute)\n"
  "float32 target_rpm              # Hedef RPM de\\xc4\\x9feri\n"
  "float32 current                 # Motor ak\\xc4\\xb1m\\xc4\\xb1 (Ampere)\n"
  "float32 voltage                 # Motor voltaj\\xc4\\xb1 (Volt)\n"
  "float32 power                   # G\\xc3\\xbc\\xc3\\xa7 t\\xc3\\xbcketimi (Watt)\n"
  "\n"
  "# Thermal verileri\n"
  "float32 temperature             # Motor s\\xc4\\xb1cakl\\xc4\\xb1\\xc4\\x9f\\xc4\\xb1 (Celsius)\n"
  "float32 max_temperature         # Maksimum \\xc3\\xa7al\\xc4\\xb1\\xc5\\x9fma s\\xc4\\xb1cakl\\xc4\\xb1\\xc4\\x9f\\xc4\\xb1\n"
  "\n"
  "# Pozisyon verileri (encoder'dan gelen)\n"
  "float64 position                # Mevcut pozisyon (radyan veya derece)\n"
  "float64 target_position         # Hedef pozisyon\n"
  "float64 velocity                # A\\xc3\\xa7\\xc4\\xb1sal h\\xc4\\xb1z (rad/s)\n"
  "float64 acceleration            # A\\xc3\\xa7\\xc4\\xb1sal ivme (rad/s\\xc2\\xb2)\n"
  "\n"
  "# Motor durumu ve hata flags\n"
  "uint8 status                    # Motor durumu\n"
  "uint8 STATUS_STOPPED=0          # Motor durdu\n"
  "uint8 STATUS_STARTING=1         # Motor ba\\xc5\\x9fl\\xc4\\xb1yor\n"
  "uint8 STATUS_RUNNING=2          # Motor \\xc3\\xa7al\\xc4\\xb1\\xc5\\x9f\\xc4\\xb1yor\n"
  "uint8 STATUS_STOPPING=3         # Motor duruyor\n"
  "uint8 STATUS_ERROR=4            # Motor hatas\\xc4\\xb1\n"
  "uint8 STATUS_MAINTENANCE=5      # Bak\\xc4\\xb1m modu\n"
  "\n"
  "# Hata flag'leri (bitwise operations i\\xc3\\xa7in)\n"
  "uint32 error_flags              # Hata bayraklar\\xc4\\xb1\n"
  "uint32 ERROR_NONE=0             # Hata yok\n"
  "uint32 ERROR_OVERCURRENT=1      # A\\xc5\\x9f\\xc4\\xb1r\\xc4\\xb1 ak\\xc4\\xb1m (bit 0)\n"
  "uint32 ERROR_OVERHEAT=2         # A\\xc5\\x9f\\xc4\\xb1r\\xc4\\xb1 \\xc4\\xb1s\\xc4\\xb1nma (bit 1) \n"
  "uint32 ERROR_OVERVOLTAGE=4      # A\\xc5\\x9f\\xc4\\xb1r\\xc4\\xb1 voltaj (bit 2)\n"
  "uint32 ERROR_UNDERVOLTAGE=8     # D\\xc3\\xbc\\xc5\\x9f\\xc3\\xbck voltaj (bit 3)\n"
  "uint32 ERROR_ENCODER=16         # Encoder hatas\\xc4\\xb1 (bit 4)\n"
  "uint32 ERROR_COMMUNICATION=32   # \\xc4\\xb0leti\\xc5\\x9fim hatas\\xc4\\xb1 (bit 5)\n"
  "uint32 ERROR_MECHANICAL=64      # Mekanik hata (bit 6)\n"
  "\n"
  "# Control verileri\n"
  "float32 control_effort          # Kontrol \\xc3\\xa7\\xc4\\xb1k\\xc4\\xb1\\xc5\\x9f\\xc4\\xb1 (-1.0 to 1.0)\n"
  "float32 pid_error               # PID hata de\\xc4\\x9feri\n"
  "float32 pid_output              # PID \\xc3\\xa7\\xc4\\xb1k\\xc4\\xb1\\xc5\\x9f de\\xc4\\x9feri\n"
  "\n"
  "# \\xc4\\xb0statistik verileri\n"
  "uint64 total_revolutions        # Toplam tur say\\xc4\\xb1s\\xc4\\xb1\n"
  "float32 uptime_hours            # \\xc3\\x87al\\xc4\\xb1\\xc5\\x9fma s\\xc3\\xbcresi (saat)\n"
  "uint32 start_count              # Ka\\xc3\\xa7 kez ba\\xc5\\x9flat\\xc4\\xb1ld\\xc4\\xb1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
day2__msg__MotorStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__msg__MotorStatus__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2230, 2230},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__msg__MotorStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__msg__MotorStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
