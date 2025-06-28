// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from day2:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#ifndef DAY2__MSG__DETAIL__ROBOT_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define DAY2__MSG__DETAIL__ROBOT_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "day2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "day2/msg/detail/robot_status__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
bool cdr_serialize_day2__msg__RobotStatus(
  const day2__msg__RobotStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
bool cdr_deserialize_day2__msg__RobotStatus(
  eprosima::fastcdr::Cdr &,
  day2__msg__RobotStatus * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
size_t get_serialized_size_day2__msg__RobotStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
size_t max_serialized_size_day2__msg__RobotStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
bool cdr_serialize_key_day2__msg__RobotStatus(
  const day2__msg__RobotStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
size_t get_serialized_size_key_day2__msg__RobotStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
size_t max_serialized_size_key_day2__msg__RobotStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_day2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, day2, msg, RobotStatus)();

#ifdef __cplusplus
}
#endif

#endif  // DAY2__MSG__DETAIL__ROBOT_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
