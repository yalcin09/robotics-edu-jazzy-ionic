// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from day2:srv/GetRobotStatus.idl
// generated code does not contain a copyright notice
#include "day2/srv/detail/get_robot_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "day2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "day2/srv/detail/get_robot_status__struct.h"
#include "day2/srv/detail/get_robot_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // requested_fields, robot_name
#include "rosidl_runtime_c/string_functions.h"  // requested_fields, robot_name

// forward declare type support functions


using _GetRobotStatus_Request__ros_msg_type = day2__srv__GetRobotStatus_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
bool cdr_serialize_day2__srv__GetRobotStatus_Request(
  const day2__srv__GetRobotStatus_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: robot_id
  {
    cdr << ros_message->robot_id;
  }

  // Field name: robot_name
  {
    const rosidl_runtime_c__String * str = &ros_message->robot_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: include_sensors
  {
    cdr << (ros_message->include_sensors ? true : false);
  }

  // Field name: include_diagnostics
  {
    cdr << (ros_message->include_diagnostics ? true : false);
  }

  // Field name: include_history
  {
    cdr << (ros_message->include_history ? true : false);
  }

  // Field name: requested_fields
  {
    size_t size = ros_message->requested_fields.size;
    auto array_ptr = ros_message->requested_fields.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
bool cdr_deserialize_day2__srv__GetRobotStatus_Request(
  eprosima::fastcdr::Cdr & cdr,
  day2__srv__GetRobotStatus_Request * ros_message)
{
  // Field name: robot_id
  {
    cdr >> ros_message->robot_id;
  }

  // Field name: robot_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->robot_name.data) {
      rosidl_runtime_c__String__init(&ros_message->robot_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->robot_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'robot_name'\n");
      return false;
    }
  }

  // Field name: include_sensors
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->include_sensors = tmp ? true : false;
  }

  // Field name: include_diagnostics
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->include_diagnostics = tmp ? true : false;
  }

  // Field name: include_history
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->include_history = tmp ? true : false;
  }

  // Field name: requested_fields
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->requested_fields.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->requested_fields);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->requested_fields, size)) {
      fprintf(stderr, "failed to create array for field 'requested_fields'");
      return false;
    }
    auto array_ptr = ros_message->requested_fields.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'requested_fields'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
size_t get_serialized_size_day2__srv__GetRobotStatus_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetRobotStatus_Request__ros_msg_type * ros_message = static_cast<const _GetRobotStatus_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: robot_id
  {
    size_t item_size = sizeof(ros_message->robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: robot_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->robot_name.size + 1);

  // Field name: include_sensors
  {
    size_t item_size = sizeof(ros_message->include_sensors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: include_diagnostics
  {
    size_t item_size = sizeof(ros_message->include_diagnostics);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: include_history
  {
    size_t item_size = sizeof(ros_message->include_history);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: requested_fields
  {
    size_t array_size = ros_message->requested_fields.size;
    auto array_ptr = ros_message->requested_fields.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
size_t max_serialized_size_day2__srv__GetRobotStatus_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: robot_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: robot_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: include_sensors
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: include_diagnostics
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: include_history
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: requested_fields
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = day2__srv__GetRobotStatus_Request;
    is_plain =
      (
      offsetof(DataType, requested_fields) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
bool cdr_serialize_key_day2__srv__GetRobotStatus_Request(
  const day2__srv__GetRobotStatus_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: robot_id
  {
    cdr << ros_message->robot_id;
  }

  // Field name: robot_name
  {
    const rosidl_runtime_c__String * str = &ros_message->robot_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: include_sensors
  {
    cdr << (ros_message->include_sensors ? true : false);
  }

  // Field name: include_diagnostics
  {
    cdr << (ros_message->include_diagnostics ? true : false);
  }

  // Field name: include_history
  {
    cdr << (ros_message->include_history ? true : false);
  }

  // Field name: requested_fields
  {
    size_t size = ros_message->requested_fields.size;
    auto array_ptr = ros_message->requested_fields.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
size_t get_serialized_size_key_day2__srv__GetRobotStatus_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetRobotStatus_Request__ros_msg_type * ros_message = static_cast<const _GetRobotStatus_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: robot_id
  {
    size_t item_size = sizeof(ros_message->robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: robot_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->robot_name.size + 1);

  // Field name: include_sensors
  {
    size_t item_size = sizeof(ros_message->include_sensors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: include_diagnostics
  {
    size_t item_size = sizeof(ros_message->include_diagnostics);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: include_history
  {
    size_t item_size = sizeof(ros_message->include_history);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: requested_fields
  {
    size_t array_size = ros_message->requested_fields.size;
    auto array_ptr = ros_message->requested_fields.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
size_t max_serialized_size_key_day2__srv__GetRobotStatus_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: robot_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: robot_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: include_sensors
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: include_diagnostics
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: include_history
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: requested_fields
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = day2__srv__GetRobotStatus_Request;
    is_plain =
      (
      offsetof(DataType, requested_fields) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GetRobotStatus_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const day2__srv__GetRobotStatus_Request * ros_message = static_cast<const day2__srv__GetRobotStatus_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_day2__srv__GetRobotStatus_Request(ros_message, cdr);
}

static bool _GetRobotStatus_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  day2__srv__GetRobotStatus_Request * ros_message = static_cast<day2__srv__GetRobotStatus_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_day2__srv__GetRobotStatus_Request(cdr, ros_message);
}

static uint32_t _GetRobotStatus_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_day2__srv__GetRobotStatus_Request(
      untyped_ros_message, 0));
}

static size_t _GetRobotStatus_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_day2__srv__GetRobotStatus_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetRobotStatus_Request = {
  "day2::srv",
  "GetRobotStatus_Request",
  _GetRobotStatus_Request__cdr_serialize,
  _GetRobotStatus_Request__cdr_deserialize,
  _GetRobotStatus_Request__get_serialized_size,
  _GetRobotStatus_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GetRobotStatus_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetRobotStatus_Request,
  get_message_typesupport_handle_function,
  &day2__srv__GetRobotStatus_Request__get_type_hash,
  &day2__srv__GetRobotStatus_Request__get_type_description,
  &day2__srv__GetRobotStatus_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, srv, GetRobotStatus_Request)() {
  return &_GetRobotStatus_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "day2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "day2/srv/detail/get_robot_status__struct.h"
// already included above
// #include "day2/srv/detail/get_robot_status__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // last_update_time, query_timestamp
#include "day2/msg/detail/robot_status__functions.h"  // current_status, status_history
#include "day2/msg/detail/sensor_data__functions.h"  // sensor_data
// already included above
// #include "rosidl_runtime_c/string.h"  // diagnostic_messages, message
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // diagnostic_messages, message

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_day2
bool cdr_serialize_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_day2
bool cdr_deserialize_builtin_interfaces__msg__Time(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Time * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_day2
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_day2
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_day2
bool cdr_serialize_key_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_day2
size_t get_serialized_size_key_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_day2
size_t max_serialized_size_key_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_day2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();

bool cdr_serialize_day2__msg__RobotStatus(
  const day2__msg__RobotStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_day2__msg__RobotStatus(
  eprosima::fastcdr::Cdr & cdr,
  day2__msg__RobotStatus * ros_message);

size_t get_serialized_size_day2__msg__RobotStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_day2__msg__RobotStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_day2__msg__RobotStatus(
  const day2__msg__RobotStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_day2__msg__RobotStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_day2__msg__RobotStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, msg, RobotStatus)();

bool cdr_serialize_day2__msg__SensorData(
  const day2__msg__SensorData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_day2__msg__SensorData(
  eprosima::fastcdr::Cdr & cdr,
  day2__msg__SensorData * ros_message);

size_t get_serialized_size_day2__msg__SensorData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_day2__msg__SensorData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_day2__msg__SensorData(
  const day2__msg__SensorData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_day2__msg__SensorData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_day2__msg__SensorData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, msg, SensorData)();


using _GetRobotStatus_Response__ros_msg_type = day2__srv__GetRobotStatus_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
bool cdr_serialize_day2__srv__GetRobotStatus_Response(
  const day2__srv__GetRobotStatus_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: current_status
  {
    cdr_serialize_day2__msg__RobotStatus(
      &ros_message->current_status, cdr);
  }

  // Field name: sensor_data
  {
    size_t size = ros_message->sensor_data.size;
    auto array_ptr = ros_message->sensor_data.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_day2__msg__SensorData(
        &array_ptr[i], cdr);
    }
  }

  // Field name: diagnostic_messages
  {
    size_t size = ros_message->diagnostic_messages.size;
    auto array_ptr = ros_message->diagnostic_messages.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: status_history
  {
    size_t size = ros_message->status_history.size;
    auto array_ptr = ros_message->status_history.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_day2__msg__RobotStatus(
        &array_ptr[i], cdr);
    }
  }

  // Field name: uptime_hours
  {
    cdr << ros_message->uptime_hours;
  }

  // Field name: total_commands_executed
  {
    cdr << ros_message->total_commands_executed;
  }

  // Field name: total_distance_traveled
  {
    cdr << ros_message->total_distance_traveled;
  }

  // Field name: error_count_today
  {
    cdr << ros_message->error_count_today;
  }

  // Field name: average_response_time_ms
  {
    cdr << ros_message->average_response_time_ms;
  }

  // Field name: cpu_usage_percent
  {
    cdr << ros_message->cpu_usage_percent;
  }

  // Field name: memory_usage_percent
  {
    cdr << ros_message->memory_usage_percent;
  }

  // Field name: network_latency_ms
  {
    cdr << ros_message->network_latency_ms;
  }

  // Field name: query_timestamp
  {
    cdr_serialize_builtin_interfaces__msg__Time(
      &ros_message->query_timestamp, cdr);
  }

  // Field name: last_update_time
  {
    cdr_serialize_builtin_interfaces__msg__Time(
      &ros_message->last_update_time, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
bool cdr_deserialize_day2__srv__GetRobotStatus_Response(
  eprosima::fastcdr::Cdr & cdr,
  day2__srv__GetRobotStatus_Response * ros_message)
{
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  // Field name: current_status
  {
    cdr_deserialize_day2__msg__RobotStatus(cdr, &ros_message->current_status);
  }

  // Field name: sensor_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->sensor_data.data) {
      day2__msg__SensorData__Sequence__fini(&ros_message->sensor_data);
    }
    if (!day2__msg__SensorData__Sequence__init(&ros_message->sensor_data, size)) {
      fprintf(stderr, "failed to create array for field 'sensor_data'");
      return false;
    }
    auto array_ptr = ros_message->sensor_data.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_day2__msg__SensorData(cdr, &array_ptr[i]);
    }
  }

  // Field name: diagnostic_messages
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->diagnostic_messages.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->diagnostic_messages);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->diagnostic_messages, size)) {
      fprintf(stderr, "failed to create array for field 'diagnostic_messages'");
      return false;
    }
    auto array_ptr = ros_message->diagnostic_messages.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'diagnostic_messages'\n");
        return false;
      }
    }
  }

  // Field name: status_history
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->status_history.data) {
      day2__msg__RobotStatus__Sequence__fini(&ros_message->status_history);
    }
    if (!day2__msg__RobotStatus__Sequence__init(&ros_message->status_history, size)) {
      fprintf(stderr, "failed to create array for field 'status_history'");
      return false;
    }
    auto array_ptr = ros_message->status_history.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_day2__msg__RobotStatus(cdr, &array_ptr[i]);
    }
  }

  // Field name: uptime_hours
  {
    cdr >> ros_message->uptime_hours;
  }

  // Field name: total_commands_executed
  {
    cdr >> ros_message->total_commands_executed;
  }

  // Field name: total_distance_traveled
  {
    cdr >> ros_message->total_distance_traveled;
  }

  // Field name: error_count_today
  {
    cdr >> ros_message->error_count_today;
  }

  // Field name: average_response_time_ms
  {
    cdr >> ros_message->average_response_time_ms;
  }

  // Field name: cpu_usage_percent
  {
    cdr >> ros_message->cpu_usage_percent;
  }

  // Field name: memory_usage_percent
  {
    cdr >> ros_message->memory_usage_percent;
  }

  // Field name: network_latency_ms
  {
    cdr >> ros_message->network_latency_ms;
  }

  // Field name: query_timestamp
  {
    cdr_deserialize_builtin_interfaces__msg__Time(cdr, &ros_message->query_timestamp);
  }

  // Field name: last_update_time
  {
    cdr_deserialize_builtin_interfaces__msg__Time(cdr, &ros_message->last_update_time);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
size_t get_serialized_size_day2__srv__GetRobotStatus_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetRobotStatus_Response__ros_msg_type * ros_message = static_cast<const _GetRobotStatus_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  // Field name: current_status
  current_alignment += get_serialized_size_day2__msg__RobotStatus(
    &(ros_message->current_status), current_alignment);

  // Field name: sensor_data
  {
    size_t array_size = ros_message->sensor_data.size;
    auto array_ptr = ros_message->sensor_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_day2__msg__SensorData(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: diagnostic_messages
  {
    size_t array_size = ros_message->diagnostic_messages.size;
    auto array_ptr = ros_message->diagnostic_messages.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: status_history
  {
    size_t array_size = ros_message->status_history.size;
    auto array_ptr = ros_message->status_history.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_day2__msg__RobotStatus(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: uptime_hours
  {
    size_t item_size = sizeof(ros_message->uptime_hours);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: total_commands_executed
  {
    size_t item_size = sizeof(ros_message->total_commands_executed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: total_distance_traveled
  {
    size_t item_size = sizeof(ros_message->total_distance_traveled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: error_count_today
  {
    size_t item_size = sizeof(ros_message->error_count_today);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: average_response_time_ms
  {
    size_t item_size = sizeof(ros_message->average_response_time_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cpu_usage_percent
  {
    size_t item_size = sizeof(ros_message->cpu_usage_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: memory_usage_percent
  {
    size_t item_size = sizeof(ros_message->memory_usage_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: network_latency_ms
  {
    size_t item_size = sizeof(ros_message->network_latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: query_timestamp
  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->query_timestamp), current_alignment);

  // Field name: last_update_time
  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->last_update_time), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
size_t max_serialized_size_day2__srv__GetRobotStatus_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: message
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: current_status
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_day2__msg__RobotStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: sensor_data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_day2__msg__SensorData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: diagnostic_messages
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: status_history
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_day2__msg__RobotStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: uptime_hours
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: total_commands_executed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: total_distance_traveled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: error_count_today
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: average_response_time_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cpu_usage_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: memory_usage_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: network_latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: query_timestamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: last_update_time
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = day2__srv__GetRobotStatus_Response;
    is_plain =
      (
      offsetof(DataType, last_update_time) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
bool cdr_serialize_key_day2__srv__GetRobotStatus_Response(
  const day2__srv__GetRobotStatus_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: current_status
  {
    cdr_serialize_key_day2__msg__RobotStatus(
      &ros_message->current_status, cdr);
  }

  // Field name: sensor_data
  {
    size_t size = ros_message->sensor_data.size;
    auto array_ptr = ros_message->sensor_data.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_day2__msg__SensorData(
        &array_ptr[i], cdr);
    }
  }

  // Field name: diagnostic_messages
  {
    size_t size = ros_message->diagnostic_messages.size;
    auto array_ptr = ros_message->diagnostic_messages.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: status_history
  {
    size_t size = ros_message->status_history.size;
    auto array_ptr = ros_message->status_history.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_day2__msg__RobotStatus(
        &array_ptr[i], cdr);
    }
  }

  // Field name: uptime_hours
  {
    cdr << ros_message->uptime_hours;
  }

  // Field name: total_commands_executed
  {
    cdr << ros_message->total_commands_executed;
  }

  // Field name: total_distance_traveled
  {
    cdr << ros_message->total_distance_traveled;
  }

  // Field name: error_count_today
  {
    cdr << ros_message->error_count_today;
  }

  // Field name: average_response_time_ms
  {
    cdr << ros_message->average_response_time_ms;
  }

  // Field name: cpu_usage_percent
  {
    cdr << ros_message->cpu_usage_percent;
  }

  // Field name: memory_usage_percent
  {
    cdr << ros_message->memory_usage_percent;
  }

  // Field name: network_latency_ms
  {
    cdr << ros_message->network_latency_ms;
  }

  // Field name: query_timestamp
  {
    cdr_serialize_key_builtin_interfaces__msg__Time(
      &ros_message->query_timestamp, cdr);
  }

  // Field name: last_update_time
  {
    cdr_serialize_key_builtin_interfaces__msg__Time(
      &ros_message->last_update_time, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
size_t get_serialized_size_key_day2__srv__GetRobotStatus_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetRobotStatus_Response__ros_msg_type * ros_message = static_cast<const _GetRobotStatus_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  // Field name: current_status
  current_alignment += get_serialized_size_key_day2__msg__RobotStatus(
    &(ros_message->current_status), current_alignment);

  // Field name: sensor_data
  {
    size_t array_size = ros_message->sensor_data.size;
    auto array_ptr = ros_message->sensor_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_day2__msg__SensorData(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: diagnostic_messages
  {
    size_t array_size = ros_message->diagnostic_messages.size;
    auto array_ptr = ros_message->diagnostic_messages.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: status_history
  {
    size_t array_size = ros_message->status_history.size;
    auto array_ptr = ros_message->status_history.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_day2__msg__RobotStatus(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: uptime_hours
  {
    size_t item_size = sizeof(ros_message->uptime_hours);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: total_commands_executed
  {
    size_t item_size = sizeof(ros_message->total_commands_executed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: total_distance_traveled
  {
    size_t item_size = sizeof(ros_message->total_distance_traveled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: error_count_today
  {
    size_t item_size = sizeof(ros_message->error_count_today);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: average_response_time_ms
  {
    size_t item_size = sizeof(ros_message->average_response_time_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cpu_usage_percent
  {
    size_t item_size = sizeof(ros_message->cpu_usage_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: memory_usage_percent
  {
    size_t item_size = sizeof(ros_message->memory_usage_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: network_latency_ms
  {
    size_t item_size = sizeof(ros_message->network_latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: query_timestamp
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Time(
    &(ros_message->query_timestamp), current_alignment);

  // Field name: last_update_time
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Time(
    &(ros_message->last_update_time), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
size_t max_serialized_size_key_day2__srv__GetRobotStatus_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: message
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: current_status
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_day2__msg__RobotStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: sensor_data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_day2__msg__SensorData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: diagnostic_messages
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: status_history
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_day2__msg__RobotStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: uptime_hours
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: total_commands_executed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: total_distance_traveled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: error_count_today
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: average_response_time_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: cpu_usage_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: memory_usage_percent
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: network_latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: query_timestamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: last_update_time
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = day2__srv__GetRobotStatus_Response;
    is_plain =
      (
      offsetof(DataType, last_update_time) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GetRobotStatus_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const day2__srv__GetRobotStatus_Response * ros_message = static_cast<const day2__srv__GetRobotStatus_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_day2__srv__GetRobotStatus_Response(ros_message, cdr);
}

static bool _GetRobotStatus_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  day2__srv__GetRobotStatus_Response * ros_message = static_cast<day2__srv__GetRobotStatus_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_day2__srv__GetRobotStatus_Response(cdr, ros_message);
}

static uint32_t _GetRobotStatus_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_day2__srv__GetRobotStatus_Response(
      untyped_ros_message, 0));
}

static size_t _GetRobotStatus_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_day2__srv__GetRobotStatus_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetRobotStatus_Response = {
  "day2::srv",
  "GetRobotStatus_Response",
  _GetRobotStatus_Response__cdr_serialize,
  _GetRobotStatus_Response__cdr_deserialize,
  _GetRobotStatus_Response__get_serialized_size,
  _GetRobotStatus_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GetRobotStatus_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetRobotStatus_Response,
  get_message_typesupport_handle_function,
  &day2__srv__GetRobotStatus_Response__get_type_hash,
  &day2__srv__GetRobotStatus_Response__get_type_description,
  &day2__srv__GetRobotStatus_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, srv, GetRobotStatus_Response)() {
  return &_GetRobotStatus_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "day2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "day2/srv/detail/get_robot_status__struct.h"
// already included above
// #include "day2/srv/detail/get_robot_status__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_day2__srv__GetRobotStatus_Request(
  const day2__srv__GetRobotStatus_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_day2__srv__GetRobotStatus_Request(
  eprosima::fastcdr::Cdr & cdr,
  day2__srv__GetRobotStatus_Request * ros_message);

size_t get_serialized_size_day2__srv__GetRobotStatus_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_day2__srv__GetRobotStatus_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_day2__srv__GetRobotStatus_Request(
  const day2__srv__GetRobotStatus_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_day2__srv__GetRobotStatus_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_day2__srv__GetRobotStatus_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, srv, GetRobotStatus_Request)();

bool cdr_serialize_day2__srv__GetRobotStatus_Response(
  const day2__srv__GetRobotStatus_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_day2__srv__GetRobotStatus_Response(
  eprosima::fastcdr::Cdr & cdr,
  day2__srv__GetRobotStatus_Response * ros_message);

size_t get_serialized_size_day2__srv__GetRobotStatus_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_day2__srv__GetRobotStatus_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_day2__srv__GetRobotStatus_Response(
  const day2__srv__GetRobotStatus_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_day2__srv__GetRobotStatus_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_day2__srv__GetRobotStatus_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, srv, GetRobotStatus_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_day2
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_day2
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_day2
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_day2
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_day2
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_day2
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_day2
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_day2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _GetRobotStatus_Event__ros_msg_type = day2__srv__GetRobotStatus_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
bool cdr_serialize_day2__srv__GetRobotStatus_Event(
  const day2__srv__GetRobotStatus_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_day2__srv__GetRobotStatus_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_day2__srv__GetRobotStatus_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
bool cdr_deserialize_day2__srv__GetRobotStatus_Event(
  eprosima::fastcdr::Cdr & cdr,
  day2__srv__GetRobotStatus_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      day2__srv__GetRobotStatus_Request__Sequence__fini(&ros_message->request);
    }
    if (!day2__srv__GetRobotStatus_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_day2__srv__GetRobotStatus_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      day2__srv__GetRobotStatus_Response__Sequence__fini(&ros_message->response);
    }
    if (!day2__srv__GetRobotStatus_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_day2__srv__GetRobotStatus_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
size_t get_serialized_size_day2__srv__GetRobotStatus_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetRobotStatus_Event__ros_msg_type * ros_message = static_cast<const _GetRobotStatus_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_day2__srv__GetRobotStatus_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_day2__srv__GetRobotStatus_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
size_t max_serialized_size_day2__srv__GetRobotStatus_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_day2__srv__GetRobotStatus_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_day2__srv__GetRobotStatus_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = day2__srv__GetRobotStatus_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
bool cdr_serialize_key_day2__srv__GetRobotStatus_Event(
  const day2__srv__GetRobotStatus_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_day2__srv__GetRobotStatus_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_day2__srv__GetRobotStatus_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
size_t get_serialized_size_key_day2__srv__GetRobotStatus_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetRobotStatus_Event__ros_msg_type * ros_message = static_cast<const _GetRobotStatus_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_day2__srv__GetRobotStatus_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_day2__srv__GetRobotStatus_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
size_t max_serialized_size_key_day2__srv__GetRobotStatus_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_day2__srv__GetRobotStatus_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_day2__srv__GetRobotStatus_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = day2__srv__GetRobotStatus_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _GetRobotStatus_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const day2__srv__GetRobotStatus_Event * ros_message = static_cast<const day2__srv__GetRobotStatus_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_day2__srv__GetRobotStatus_Event(ros_message, cdr);
}

static bool _GetRobotStatus_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  day2__srv__GetRobotStatus_Event * ros_message = static_cast<day2__srv__GetRobotStatus_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_day2__srv__GetRobotStatus_Event(cdr, ros_message);
}

static uint32_t _GetRobotStatus_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_day2__srv__GetRobotStatus_Event(
      untyped_ros_message, 0));
}

static size_t _GetRobotStatus_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_day2__srv__GetRobotStatus_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetRobotStatus_Event = {
  "day2::srv",
  "GetRobotStatus_Event",
  _GetRobotStatus_Event__cdr_serialize,
  _GetRobotStatus_Event__cdr_deserialize,
  _GetRobotStatus_Event__get_serialized_size,
  _GetRobotStatus_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _GetRobotStatus_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetRobotStatus_Event,
  get_message_typesupport_handle_function,
  &day2__srv__GetRobotStatus_Event__get_type_hash,
  &day2__srv__GetRobotStatus_Event__get_type_description,
  &day2__srv__GetRobotStatus_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, srv, GetRobotStatus_Event)() {
  return &_GetRobotStatus_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "day2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "day2/srv/get_robot_status.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetRobotStatus__callbacks = {
  "day2::srv",
  "GetRobotStatus",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, srv, GetRobotStatus_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, srv, GetRobotStatus_Response)(),
};

static rosidl_service_type_support_t GetRobotStatus__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetRobotStatus__callbacks,
  get_service_typesupport_handle_function,
  &_GetRobotStatus_Request__type_support,
  &_GetRobotStatus_Response__type_support,
  &_GetRobotStatus_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    srv,
    GetRobotStatus
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    day2,
    srv,
    GetRobotStatus
  ),
  &day2__srv__GetRobotStatus__get_type_hash,
  &day2__srv__GetRobotStatus__get_type_description,
  &day2__srv__GetRobotStatus__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, srv, GetRobotStatus)() {
  return &GetRobotStatus__handle;
}

#if defined(__cplusplus)
}
#endif
