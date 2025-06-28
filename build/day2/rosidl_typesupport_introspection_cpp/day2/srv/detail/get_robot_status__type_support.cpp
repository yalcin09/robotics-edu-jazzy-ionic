// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from day2:srv/GetRobotStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "day2/srv/detail/get_robot_status__functions.h"
#include "day2/srv/detail/get_robot_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace day2
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetRobotStatus_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) day2::srv::GetRobotStatus_Request(_init);
}

void GetRobotStatus_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<day2::srv::GetRobotStatus_Request *>(message_memory);
  typed_message->~GetRobotStatus_Request();
}

size_t size_function__GetRobotStatus_Request__requested_fields(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetRobotStatus_Request__requested_fields(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetRobotStatus_Request__requested_fields(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetRobotStatus_Request__requested_fields(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GetRobotStatus_Request__requested_fields(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GetRobotStatus_Request__requested_fields(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GetRobotStatus_Request__requested_fields(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GetRobotStatus_Request__requested_fields(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetRobotStatus_Request_message_member_array[6] = {
  {
    "robot_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Request, robot_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Request, robot_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "include_sensors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Request, include_sensors),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "include_diagnostics",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Request, include_diagnostics),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "include_history",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Request, include_history),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "requested_fields",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Request, requested_fields),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetRobotStatus_Request__requested_fields,  // size() function pointer
    get_const_function__GetRobotStatus_Request__requested_fields,  // get_const(index) function pointer
    get_function__GetRobotStatus_Request__requested_fields,  // get(index) function pointer
    fetch_function__GetRobotStatus_Request__requested_fields,  // fetch(index, &value) function pointer
    assign_function__GetRobotStatus_Request__requested_fields,  // assign(index, value) function pointer
    resize_function__GetRobotStatus_Request__requested_fields  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetRobotStatus_Request_message_members = {
  "day2::srv",  // message namespace
  "GetRobotStatus_Request",  // message name
  6,  // number of fields
  sizeof(day2::srv::GetRobotStatus_Request),
  false,  // has_any_key_member_
  GetRobotStatus_Request_message_member_array,  // message members
  GetRobotStatus_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetRobotStatus_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetRobotStatus_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetRobotStatus_Request_message_members,
  get_message_typesupport_handle_function,
  &day2__srv__GetRobotStatus_Request__get_type_hash,
  &day2__srv__GetRobotStatus_Request__get_type_description,
  &day2__srv__GetRobotStatus_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace day2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<day2::srv::GetRobotStatus_Request>()
{
  return &::day2::srv::rosidl_typesupport_introspection_cpp::GetRobotStatus_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, srv, GetRobotStatus_Request)() {
  return &::day2::srv::rosidl_typesupport_introspection_cpp::GetRobotStatus_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "day2/srv/detail/get_robot_status__functions.h"
// already included above
// #include "day2/srv/detail/get_robot_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace day2
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetRobotStatus_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) day2::srv::GetRobotStatus_Response(_init);
}

void GetRobotStatus_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<day2::srv::GetRobotStatus_Response *>(message_memory);
  typed_message->~GetRobotStatus_Response();
}

size_t size_function__GetRobotStatus_Response__sensor_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<day2::msg::SensorData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetRobotStatus_Response__sensor_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<day2::msg::SensorData> *>(untyped_member);
  return &member[index];
}

void * get_function__GetRobotStatus_Response__sensor_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<day2::msg::SensorData> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetRobotStatus_Response__sensor_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const day2::msg::SensorData *>(
    get_const_function__GetRobotStatus_Response__sensor_data(untyped_member, index));
  auto & value = *reinterpret_cast<day2::msg::SensorData *>(untyped_value);
  value = item;
}

void assign_function__GetRobotStatus_Response__sensor_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<day2::msg::SensorData *>(
    get_function__GetRobotStatus_Response__sensor_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const day2::msg::SensorData *>(untyped_value);
  item = value;
}

void resize_function__GetRobotStatus_Response__sensor_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<day2::msg::SensorData> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetRobotStatus_Response__diagnostic_messages(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetRobotStatus_Response__diagnostic_messages(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetRobotStatus_Response__diagnostic_messages(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetRobotStatus_Response__diagnostic_messages(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GetRobotStatus_Response__diagnostic_messages(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GetRobotStatus_Response__diagnostic_messages(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GetRobotStatus_Response__diagnostic_messages(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GetRobotStatus_Response__diagnostic_messages(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetRobotStatus_Response__status_history(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<day2::msg::RobotStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetRobotStatus_Response__status_history(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<day2::msg::RobotStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__GetRobotStatus_Response__status_history(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<day2::msg::RobotStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetRobotStatus_Response__status_history(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const day2::msg::RobotStatus *>(
    get_const_function__GetRobotStatus_Response__status_history(untyped_member, index));
  auto & value = *reinterpret_cast<day2::msg::RobotStatus *>(untyped_value);
  value = item;
}

void assign_function__GetRobotStatus_Response__status_history(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<day2::msg::RobotStatus *>(
    get_function__GetRobotStatus_Response__status_history(untyped_member, index));
  const auto & value = *reinterpret_cast<const day2::msg::RobotStatus *>(untyped_value);
  item = value;
}

void resize_function__GetRobotStatus_Response__status_history(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<day2::msg::RobotStatus> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetRobotStatus_Response_message_member_array[16] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<day2::msg::RobotStatus>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Response, current_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sensor_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<day2::msg::SensorData>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Response, sensor_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetRobotStatus_Response__sensor_data,  // size() function pointer
    get_const_function__GetRobotStatus_Response__sensor_data,  // get_const(index) function pointer
    get_function__GetRobotStatus_Response__sensor_data,  // get(index) function pointer
    fetch_function__GetRobotStatus_Response__sensor_data,  // fetch(index, &value) function pointer
    assign_function__GetRobotStatus_Response__sensor_data,  // assign(index, value) function pointer
    resize_function__GetRobotStatus_Response__sensor_data  // resize(index) function pointer
  },
  {
    "diagnostic_messages",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Response, diagnostic_messages),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetRobotStatus_Response__diagnostic_messages,  // size() function pointer
    get_const_function__GetRobotStatus_Response__diagnostic_messages,  // get_const(index) function pointer
    get_function__GetRobotStatus_Response__diagnostic_messages,  // get(index) function pointer
    fetch_function__GetRobotStatus_Response__diagnostic_messages,  // fetch(index, &value) function pointer
    assign_function__GetRobotStatus_Response__diagnostic_messages,  // assign(index, value) function pointer
    resize_function__GetRobotStatus_Response__diagnostic_messages  // resize(index) function pointer
  },
  {
    "status_history",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<day2::msg::RobotStatus>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Response, status_history),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetRobotStatus_Response__status_history,  // size() function pointer
    get_const_function__GetRobotStatus_Response__status_history,  // get_const(index) function pointer
    get_function__GetRobotStatus_Response__status_history,  // get(index) function pointer
    fetch_function__GetRobotStatus_Response__status_history,  // fetch(index, &value) function pointer
    assign_function__GetRobotStatus_Response__status_history,  // assign(index, value) function pointer
    resize_function__GetRobotStatus_Response__status_history  // resize(index) function pointer
  },
  {
    "uptime_hours",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Response, uptime_hours),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "total_commands_executed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Response, total_commands_executed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "total_distance_traveled",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Response, total_distance_traveled),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_count_today",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Response, error_count_today),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "average_response_time_ms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Response, average_response_time_ms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cpu_usage_percent",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Response, cpu_usage_percent),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "memory_usage_percent",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Response, memory_usage_percent),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "network_latency_ms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Response, network_latency_ms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "query_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Response, query_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "last_update_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Response, last_update_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetRobotStatus_Response_message_members = {
  "day2::srv",  // message namespace
  "GetRobotStatus_Response",  // message name
  16,  // number of fields
  sizeof(day2::srv::GetRobotStatus_Response),
  false,  // has_any_key_member_
  GetRobotStatus_Response_message_member_array,  // message members
  GetRobotStatus_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetRobotStatus_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetRobotStatus_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetRobotStatus_Response_message_members,
  get_message_typesupport_handle_function,
  &day2__srv__GetRobotStatus_Response__get_type_hash,
  &day2__srv__GetRobotStatus_Response__get_type_description,
  &day2__srv__GetRobotStatus_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace day2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<day2::srv::GetRobotStatus_Response>()
{
  return &::day2::srv::rosidl_typesupport_introspection_cpp::GetRobotStatus_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, srv, GetRobotStatus_Response)() {
  return &::day2::srv::rosidl_typesupport_introspection_cpp::GetRobotStatus_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "day2/srv/detail/get_robot_status__functions.h"
// already included above
// #include "day2/srv/detail/get_robot_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace day2
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetRobotStatus_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) day2::srv::GetRobotStatus_Event(_init);
}

void GetRobotStatus_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<day2::srv::GetRobotStatus_Event *>(message_memory);
  typed_message->~GetRobotStatus_Event();
}

size_t size_function__GetRobotStatus_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<day2::srv::GetRobotStatus_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetRobotStatus_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<day2::srv::GetRobotStatus_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__GetRobotStatus_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<day2::srv::GetRobotStatus_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetRobotStatus_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const day2::srv::GetRobotStatus_Request *>(
    get_const_function__GetRobotStatus_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<day2::srv::GetRobotStatus_Request *>(untyped_value);
  value = item;
}

void assign_function__GetRobotStatus_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<day2::srv::GetRobotStatus_Request *>(
    get_function__GetRobotStatus_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const day2::srv::GetRobotStatus_Request *>(untyped_value);
  item = value;
}

void resize_function__GetRobotStatus_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<day2::srv::GetRobotStatus_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetRobotStatus_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<day2::srv::GetRobotStatus_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetRobotStatus_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<day2::srv::GetRobotStatus_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__GetRobotStatus_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<day2::srv::GetRobotStatus_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetRobotStatus_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const day2::srv::GetRobotStatus_Response *>(
    get_const_function__GetRobotStatus_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<day2::srv::GetRobotStatus_Response *>(untyped_value);
  value = item;
}

void assign_function__GetRobotStatus_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<day2::srv::GetRobotStatus_Response *>(
    get_function__GetRobotStatus_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const day2::srv::GetRobotStatus_Response *>(untyped_value);
  item = value;
}

void resize_function__GetRobotStatus_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<day2::srv::GetRobotStatus_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetRobotStatus_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<day2::srv::GetRobotStatus_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetRobotStatus_Event__request,  // size() function pointer
    get_const_function__GetRobotStatus_Event__request,  // get_const(index) function pointer
    get_function__GetRobotStatus_Event__request,  // get(index) function pointer
    fetch_function__GetRobotStatus_Event__request,  // fetch(index, &value) function pointer
    assign_function__GetRobotStatus_Event__request,  // assign(index, value) function pointer
    resize_function__GetRobotStatus_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<day2::srv::GetRobotStatus_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(day2::srv::GetRobotStatus_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetRobotStatus_Event__response,  // size() function pointer
    get_const_function__GetRobotStatus_Event__response,  // get_const(index) function pointer
    get_function__GetRobotStatus_Event__response,  // get(index) function pointer
    fetch_function__GetRobotStatus_Event__response,  // fetch(index, &value) function pointer
    assign_function__GetRobotStatus_Event__response,  // assign(index, value) function pointer
    resize_function__GetRobotStatus_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetRobotStatus_Event_message_members = {
  "day2::srv",  // message namespace
  "GetRobotStatus_Event",  // message name
  3,  // number of fields
  sizeof(day2::srv::GetRobotStatus_Event),
  false,  // has_any_key_member_
  GetRobotStatus_Event_message_member_array,  // message members
  GetRobotStatus_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  GetRobotStatus_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetRobotStatus_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetRobotStatus_Event_message_members,
  get_message_typesupport_handle_function,
  &day2__srv__GetRobotStatus_Event__get_type_hash,
  &day2__srv__GetRobotStatus_Event__get_type_description,
  &day2__srv__GetRobotStatus_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace day2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<day2::srv::GetRobotStatus_Event>()
{
  return &::day2::srv::rosidl_typesupport_introspection_cpp::GetRobotStatus_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, srv, GetRobotStatus_Event)() {
  return &::day2::srv::rosidl_typesupport_introspection_cpp::GetRobotStatus_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "day2/srv/detail/get_robot_status__functions.h"
// already included above
// #include "day2/srv/detail/get_robot_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace day2
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetRobotStatus_service_members = {
  "day2::srv",  // service namespace
  "GetRobotStatus",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<day2::srv::GetRobotStatus>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t GetRobotStatus_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetRobotStatus_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<day2::srv::GetRobotStatus_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<day2::srv::GetRobotStatus_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<day2::srv::GetRobotStatus_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<day2::srv::GetRobotStatus>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<day2::srv::GetRobotStatus>,
  &day2__srv__GetRobotStatus__get_type_hash,
  &day2__srv__GetRobotStatus__get_type_description,
  &day2__srv__GetRobotStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace day2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<day2::srv::GetRobotStatus>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::day2::srv::rosidl_typesupport_introspection_cpp::GetRobotStatus_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::day2::srv::GetRobotStatus_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::day2::srv::GetRobotStatus_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::day2::srv::GetRobotStatus_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, srv, GetRobotStatus)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<day2::srv::GetRobotStatus>();
}

#ifdef __cplusplus
}
#endif
