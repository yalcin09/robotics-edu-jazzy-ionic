// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from day2:msg/SensorData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "day2/msg/detail/sensor_data__rosidl_typesupport_introspection_c.h"
#include "day2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "day2/msg/detail/sensor_data__functions.h"
#include "day2/msg/detail/sensor_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `sensor_name`
// Member `value_names`
// Member `unit`
#include "rosidl_runtime_c/string_functions.h"
// Member `values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void day2__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  day2__msg__SensorData__init(message_memory);
}

void day2__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_fini_function(void * message_memory)
{
  day2__msg__SensorData__fini(message_memory);
}

size_t day2__msg__SensorData__rosidl_typesupport_introspection_c__size_function__SensorData__values(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__msg__SensorData__rosidl_typesupport_introspection_c__get_const_function__SensorData__values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__msg__SensorData__rosidl_typesupport_introspection_c__get_function__SensorData__values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__msg__SensorData__rosidl_typesupport_introspection_c__fetch_function__SensorData__values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    day2__msg__SensorData__rosidl_typesupport_introspection_c__get_const_function__SensorData__values(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void day2__msg__SensorData__rosidl_typesupport_introspection_c__assign_function__SensorData__values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    day2__msg__SensorData__rosidl_typesupport_introspection_c__get_function__SensorData__values(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool day2__msg__SensorData__rosidl_typesupport_introspection_c__resize_function__SensorData__values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t day2__msg__SensorData__rosidl_typesupport_introspection_c__size_function__SensorData__value_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * day2__msg__SensorData__rosidl_typesupport_introspection_c__get_const_function__SensorData__value_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * day2__msg__SensorData__rosidl_typesupport_introspection_c__get_function__SensorData__value_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void day2__msg__SensorData__rosidl_typesupport_introspection_c__fetch_function__SensorData__value_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    day2__msg__SensorData__rosidl_typesupport_introspection_c__get_const_function__SensorData__value_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void day2__msg__SensorData__rosidl_typesupport_introspection_c__assign_function__SensorData__value_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    day2__msg__SensorData__rosidl_typesupport_introspection_c__get_function__SensorData__value_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool day2__msg__SensorData__rosidl_typesupport_introspection_c__resize_function__SensorData__value_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember day2__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__SensorData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__SensorData, sensor_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__SensorData, sensor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__SensorData, values),  // bytes offset in struct
    NULL,  // default value
    day2__msg__SensorData__rosidl_typesupport_introspection_c__size_function__SensorData__values,  // size() function pointer
    day2__msg__SensorData__rosidl_typesupport_introspection_c__get_const_function__SensorData__values,  // get_const(index) function pointer
    day2__msg__SensorData__rosidl_typesupport_introspection_c__get_function__SensorData__values,  // get(index) function pointer
    day2__msg__SensorData__rosidl_typesupport_introspection_c__fetch_function__SensorData__values,  // fetch(index, &value) function pointer
    day2__msg__SensorData__rosidl_typesupport_introspection_c__assign_function__SensorData__values,  // assign(index, value) function pointer
    day2__msg__SensorData__rosidl_typesupport_introspection_c__resize_function__SensorData__values  // resize(index) function pointer
  },
  {
    "value_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__SensorData, value_names),  // bytes offset in struct
    NULL,  // default value
    day2__msg__SensorData__rosidl_typesupport_introspection_c__size_function__SensorData__value_names,  // size() function pointer
    day2__msg__SensorData__rosidl_typesupport_introspection_c__get_const_function__SensorData__value_names,  // get_const(index) function pointer
    day2__msg__SensorData__rosidl_typesupport_introspection_c__get_function__SensorData__value_names,  // get(index) function pointer
    day2__msg__SensorData__rosidl_typesupport_introspection_c__fetch_function__SensorData__value_names,  // fetch(index, &value) function pointer
    day2__msg__SensorData__rosidl_typesupport_introspection_c__assign_function__SensorData__value_names,  // assign(index, value) function pointer
    day2__msg__SensorData__rosidl_typesupport_introspection_c__resize_function__SensorData__value_names  // resize(index) function pointer
  },
  {
    "unit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__SensorData, unit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__SensorData, is_active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accuracy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__SensorData, accuracy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2__msg__SensorData, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers day2__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_members = {
  "day2__msg",  // message namespace
  "SensorData",  // message name
  9,  // number of fields
  sizeof(day2__msg__SensorData),
  false,  // has_any_key_member_
  day2__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array,  // message members
  day2__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_init_function,  // function to initialize message memory (memory has to be allocated)
  day2__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t day2__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_type_support_handle = {
  0,
  &day2__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_members,
  get_message_typesupport_handle_function,
  &day2__msg__SensorData__get_type_hash,
  &day2__msg__SensorData__get_type_description,
  &day2__msg__SensorData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, day2, msg, SensorData)() {
  day2__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!day2__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_type_support_handle.typesupport_identifier) {
    day2__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &day2__msg__SensorData__rosidl_typesupport_introspection_c__SensorData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
