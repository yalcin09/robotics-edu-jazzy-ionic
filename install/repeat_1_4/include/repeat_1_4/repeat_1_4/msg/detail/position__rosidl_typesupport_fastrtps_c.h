// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from repeat_1_4:msg/Position.idl
// generated code does not contain a copyright notice
#ifndef REPEAT_1_4__MSG__DETAIL__POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define REPEAT_1_4__MSG__DETAIL__POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "repeat_1_4/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "repeat_1_4/msg/detail/position__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_repeat_1_4
bool cdr_serialize_repeat_1_4__msg__Position(
  const repeat_1_4__msg__Position * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_repeat_1_4
bool cdr_deserialize_repeat_1_4__msg__Position(
  eprosima::fastcdr::Cdr &,
  repeat_1_4__msg__Position * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_repeat_1_4
size_t get_serialized_size_repeat_1_4__msg__Position(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_repeat_1_4
size_t max_serialized_size_repeat_1_4__msg__Position(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_repeat_1_4
bool cdr_serialize_key_repeat_1_4__msg__Position(
  const repeat_1_4__msg__Position * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_repeat_1_4
size_t get_serialized_size_key_repeat_1_4__msg__Position(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_repeat_1_4
size_t max_serialized_size_key_repeat_1_4__msg__Position(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_repeat_1_4
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, repeat_1_4, msg, Position)();

#ifdef __cplusplus
}
#endif

#endif  // REPEAT_1_4__MSG__DETAIL__POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
