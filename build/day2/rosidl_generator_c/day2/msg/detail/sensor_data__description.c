// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from day2:msg/SensorData.idl
// generated code does not contain a copyright notice

#include "day2/msg/detail/sensor_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_day2
const rosidl_type_hash_t *
day2__msg__SensorData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xab, 0xf7, 0xbb, 0xea, 0xcd, 0x94, 0x92, 0x32,
      0x2a, 0xd3, 0xf4, 0x7c, 0xfc, 0x58, 0xf9, 0x30,
      0xcb, 0x25, 0x8f, 0xac, 0xdd, 0x81, 0x82, 0x01,
      0x2b, 0xfb, 0x55, 0xab, 0xa8, 0x8e, 0xcc, 0xbf,
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

static char day2__msg__SensorData__TYPE_NAME[] = "day2/msg/SensorData";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char day2__msg__SensorData__FIELD_NAME__header[] = "header";
static char day2__msg__SensorData__FIELD_NAME__sensor_name[] = "sensor_name";
static char day2__msg__SensorData__FIELD_NAME__sensor_id[] = "sensor_id";
static char day2__msg__SensorData__FIELD_NAME__values[] = "values";
static char day2__msg__SensorData__FIELD_NAME__value_names[] = "value_names";
static char day2__msg__SensorData__FIELD_NAME__unit[] = "unit";
static char day2__msg__SensorData__FIELD_NAME__is_active[] = "is_active";
static char day2__msg__SensorData__FIELD_NAME__accuracy[] = "accuracy";
static char day2__msg__SensorData__FIELD_NAME__error_code[] = "error_code";

static rosidl_runtime_c__type_description__Field day2__msg__SensorData__FIELDS[] = {
  {
    {day2__msg__SensorData__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__SensorData__FIELD_NAME__sensor_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__SensorData__FIELD_NAME__sensor_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__SensorData__FIELD_NAME__values, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__SensorData__FIELD_NAME__value_names, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__SensorData__FIELD_NAME__unit, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__SensorData__FIELD_NAME__is_active, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__SensorData__FIELD_NAME__accuracy, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {day2__msg__SensorData__FIELD_NAME__error_code, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription day2__msg__SensorData__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
day2__msg__SensorData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {day2__msg__SensorData__TYPE_NAME, 19, 19},
      {day2__msg__SensorData__FIELDS, 9, 9},
    },
    {day2__msg__SensorData__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# Header bilgisi - standart ROS2 header\n"
  "std_msgs/Header header                  # Timestamp ve frame_id i\\xc3\\xa7erir\n"
  "\n"
  "# Sens\\xc3\\xb6r kimlik bilgileri\n"
  "string sensor_name                      # Sens\\xc3\\xb6r\\xc3\\xbcn ad\\xc4\\xb1\n"
  "uint32 sensor_id                        # Sens\\xc3\\xb6r\\xc3\\xbcn ID'si\n"
  "\n"
  "# Sens\\xc3\\xb6r de\\xc4\\x9ferleri - farkl\\xc4\\xb1 sens\\xc3\\xb6r t\\xc3\\xbcrleri i\\xc3\\xa7in\n"
  "float64[] values                        # Sens\\xc3\\xb6r de\\xc4\\x9ferleri array'i\n"
  "string[] value_names                    # Her de\\xc4\\x9ferin ne anlama geldi\\xc4\\x9fi\n"
  "string unit                             # \\xc3\\x96l\\xc3\\xa7\\xc3\\xbc birimi (\\xc3\\xb6rn: \"meters\", \"degrees\", \"volts\")\n"
  "\n"
  "# Sens\\xc3\\xb6r durumu\n"
  "bool is_active                          # Sens\\xc3\\xb6r aktif mi?\n"
  "float32 accuracy                        # Do\\xc4\\x9fruluk oran\\xc4\\xb1 (0.0-1.0)\n"
  "uint32 error_code                       # Hata kodu (0 = hata yok)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
day2__msg__SensorData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {day2__msg__SensorData__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 737, 737},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
day2__msg__SensorData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *day2__msg__SensorData__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
