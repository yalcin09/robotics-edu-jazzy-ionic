// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from day2:srv/EmergencyStop.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "day2/srv/detail/emergency_stop__functions.h"
#include "day2/srv/detail/emergency_stop__struct.hpp"
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

void EmergencyStop_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) day2::srv::EmergencyStop_Request(_init);
}

void EmergencyStop_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<day2::srv::EmergencyStop_Request *>(message_memory);
  typed_message->~EmergencyStop_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EmergencyStop_Request_message_member_array[8] = {
  {
    "robot_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Request, robot_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reason",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Request, reason),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stop_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Request, stop_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "disable_motors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Request, disable_motors),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lock_brakes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Request, lock_brakes),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sound_alarm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Request, sound_alarm),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "operator_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Request, operator_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "priority_level",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Request, priority_level),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EmergencyStop_Request_message_members = {
  "day2::srv",  // message namespace
  "EmergencyStop_Request",  // message name
  8,  // number of fields
  sizeof(day2::srv::EmergencyStop_Request),
  false,  // has_any_key_member_
  EmergencyStop_Request_message_member_array,  // message members
  EmergencyStop_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  EmergencyStop_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EmergencyStop_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EmergencyStop_Request_message_members,
  get_message_typesupport_handle_function,
  &day2__srv__EmergencyStop_Request__get_type_hash,
  &day2__srv__EmergencyStop_Request__get_type_description,
  &day2__srv__EmergencyStop_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace day2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<day2::srv::EmergencyStop_Request>()
{
  return &::day2::srv::rosidl_typesupport_introspection_cpp::EmergencyStop_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, srv, EmergencyStop_Request)() {
  return &::day2::srv::rosidl_typesupport_introspection_cpp::EmergencyStop_Request_message_type_support_handle;
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
// #include "day2/srv/detail/emergency_stop__functions.h"
// already included above
// #include "day2/srv/detail/emergency_stop__struct.hpp"
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

void EmergencyStop_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) day2::srv::EmergencyStop_Response(_init);
}

void EmergencyStop_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<day2::srv::EmergencyStop_Response *>(message_memory);
  typed_message->~EmergencyStop_Response();
}

size_t size_function__EmergencyStop_Response__stopped_robot_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EmergencyStop_Response__stopped_robot_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__EmergencyStop_Response__stopped_robot_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__EmergencyStop_Response__stopped_robot_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__EmergencyStop_Response__stopped_robot_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__EmergencyStop_Response__stopped_robot_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__EmergencyStop_Response__stopped_robot_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__EmergencyStop_Response__stopped_robot_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EmergencyStop_Response__robot_responses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EmergencyStop_Response__robot_responses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__EmergencyStop_Response__robot_responses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__EmergencyStop_Response__robot_responses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__EmergencyStop_Response__robot_responses(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__EmergencyStop_Response__robot_responses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__EmergencyStop_Response__robot_responses(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__EmergencyStop_Response__robot_responses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EmergencyStop_Response__stop_distances(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EmergencyStop_Response__stop_distances(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__EmergencyStop_Response__stop_distances(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__EmergencyStop_Response__stop_distances(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__EmergencyStop_Response__stop_distances(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__EmergencyStop_Response__stop_distances(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__EmergencyStop_Response__stop_distances(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__EmergencyStop_Response__stop_distances(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EmergencyStop_Response__active_alarms(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EmergencyStop_Response__active_alarms(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__EmergencyStop_Response__active_alarms(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__EmergencyStop_Response__active_alarms(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__EmergencyStop_Response__active_alarms(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__EmergencyStop_Response__active_alarms(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__EmergencyStop_Response__active_alarms(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__EmergencyStop_Response__active_alarms(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EmergencyStop_Response__required_actions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EmergencyStop_Response__required_actions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__EmergencyStop_Response__required_actions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__EmergencyStop_Response__required_actions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__EmergencyStop_Response__required_actions(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__EmergencyStop_Response__required_actions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__EmergencyStop_Response__required_actions(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__EmergencyStop_Response__required_actions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EmergencyStop_Response__reset_procedures(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EmergencyStop_Response__reset_procedures(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__EmergencyStop_Response__reset_procedures(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__EmergencyStop_Response__reset_procedures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__EmergencyStop_Response__reset_procedures(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__EmergencyStop_Response__reset_procedures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__EmergencyStop_Response__reset_procedures(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__EmergencyStop_Response__reset_procedures(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EmergencyStop_Response_message_member_array[16] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Response, success),  // bytes offset in struct
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
    offsetof(day2::srv::EmergencyStop_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stop_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Response, stop_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stopped_robot_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Response, stopped_robot_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__EmergencyStop_Response__stopped_robot_ids,  // size() function pointer
    get_const_function__EmergencyStop_Response__stopped_robot_ids,  // get_const(index) function pointer
    get_function__EmergencyStop_Response__stopped_robot_ids,  // get(index) function pointer
    fetch_function__EmergencyStop_Response__stopped_robot_ids,  // fetch(index, &value) function pointer
    assign_function__EmergencyStop_Response__stopped_robot_ids,  // assign(index, value) function pointer
    resize_function__EmergencyStop_Response__stopped_robot_ids  // resize(index) function pointer
  },
  {
    "robot_responses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Response, robot_responses),  // bytes offset in struct
    nullptr,  // default value
    size_function__EmergencyStop_Response__robot_responses,  // size() function pointer
    get_const_function__EmergencyStop_Response__robot_responses,  // get_const(index) function pointer
    get_function__EmergencyStop_Response__robot_responses,  // get(index) function pointer
    fetch_function__EmergencyStop_Response__robot_responses,  // fetch(index, &value) function pointer
    assign_function__EmergencyStop_Response__robot_responses,  // assign(index, value) function pointer
    resize_function__EmergencyStop_Response__robot_responses  // resize(index) function pointer
  },
  {
    "stop_distances",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Response, stop_distances),  // bytes offset in struct
    nullptr,  // default value
    size_function__EmergencyStop_Response__stop_distances,  // size() function pointer
    get_const_function__EmergencyStop_Response__stop_distances,  // get_const(index) function pointer
    get_function__EmergencyStop_Response__stop_distances,  // get(index) function pointer
    fetch_function__EmergencyStop_Response__stop_distances,  // fetch(index, &value) function pointer
    assign_function__EmergencyStop_Response__stop_distances,  // assign(index, value) function pointer
    resize_function__EmergencyStop_Response__stop_distances  // resize(index) function pointer
  },
  {
    "system_safe_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Response, system_safe_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "active_alarms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Response, active_alarms),  // bytes offset in struct
    nullptr,  // default value
    size_function__EmergencyStop_Response__active_alarms,  // size() function pointer
    get_const_function__EmergencyStop_Response__active_alarms,  // get_const(index) function pointer
    get_function__EmergencyStop_Response__active_alarms,  // get(index) function pointer
    fetch_function__EmergencyStop_Response__active_alarms,  // fetch(index, &value) function pointer
    assign_function__EmergencyStop_Response__active_alarms,  // assign(index, value) function pointer
    resize_function__EmergencyStop_Response__active_alarms  // resize(index) function pointer
  },
  {
    "required_actions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Response, required_actions),  // bytes offset in struct
    nullptr,  // default value
    size_function__EmergencyStop_Response__required_actions,  // size() function pointer
    get_const_function__EmergencyStop_Response__required_actions,  // get_const(index) function pointer
    get_function__EmergencyStop_Response__required_actions,  // get(index) function pointer
    fetch_function__EmergencyStop_Response__required_actions,  // fetch(index, &value) function pointer
    assign_function__EmergencyStop_Response__required_actions,  // assign(index, value) function pointer
    resize_function__EmergencyStop_Response__required_actions  // resize(index) function pointer
  },
  {
    "manual_reset_required",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Response, manual_reset_required),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reset_procedures",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Response, reset_procedures),  // bytes offset in struct
    nullptr,  // default value
    size_function__EmergencyStop_Response__reset_procedures,  // size() function pointer
    get_const_function__EmergencyStop_Response__reset_procedures,  // get_const(index) function pointer
    get_function__EmergencyStop_Response__reset_procedures,  // get(index) function pointer
    fetch_function__EmergencyStop_Response__reset_procedures,  // fetch(index, &value) function pointer
    assign_function__EmergencyStop_Response__reset_procedures,  // assign(index, value) function pointer
    resize_function__EmergencyStop_Response__reset_procedures  // resize(index) function pointer
  },
  {
    "estimated_recovery_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Response, estimated_recovery_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "incident_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Response, incident_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "incident_classification",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Response, incident_classification),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "requires_investigation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Response, requires_investigation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Response, error_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EmergencyStop_Response_message_members = {
  "day2::srv",  // message namespace
  "EmergencyStop_Response",  // message name
  16,  // number of fields
  sizeof(day2::srv::EmergencyStop_Response),
  false,  // has_any_key_member_
  EmergencyStop_Response_message_member_array,  // message members
  EmergencyStop_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  EmergencyStop_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EmergencyStop_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EmergencyStop_Response_message_members,
  get_message_typesupport_handle_function,
  &day2__srv__EmergencyStop_Response__get_type_hash,
  &day2__srv__EmergencyStop_Response__get_type_description,
  &day2__srv__EmergencyStop_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace day2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<day2::srv::EmergencyStop_Response>()
{
  return &::day2::srv::rosidl_typesupport_introspection_cpp::EmergencyStop_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, srv, EmergencyStop_Response)() {
  return &::day2::srv::rosidl_typesupport_introspection_cpp::EmergencyStop_Response_message_type_support_handle;
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
// #include "day2/srv/detail/emergency_stop__functions.h"
// already included above
// #include "day2/srv/detail/emergency_stop__struct.hpp"
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

void EmergencyStop_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) day2::srv::EmergencyStop_Event(_init);
}

void EmergencyStop_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<day2::srv::EmergencyStop_Event *>(message_memory);
  typed_message->~EmergencyStop_Event();
}

size_t size_function__EmergencyStop_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<day2::srv::EmergencyStop_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EmergencyStop_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<day2::srv::EmergencyStop_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__EmergencyStop_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<day2::srv::EmergencyStop_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__EmergencyStop_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const day2::srv::EmergencyStop_Request *>(
    get_const_function__EmergencyStop_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<day2::srv::EmergencyStop_Request *>(untyped_value);
  value = item;
}

void assign_function__EmergencyStop_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<day2::srv::EmergencyStop_Request *>(
    get_function__EmergencyStop_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const day2::srv::EmergencyStop_Request *>(untyped_value);
  item = value;
}

void resize_function__EmergencyStop_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<day2::srv::EmergencyStop_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EmergencyStop_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<day2::srv::EmergencyStop_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EmergencyStop_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<day2::srv::EmergencyStop_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__EmergencyStop_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<day2::srv::EmergencyStop_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__EmergencyStop_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const day2::srv::EmergencyStop_Response *>(
    get_const_function__EmergencyStop_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<day2::srv::EmergencyStop_Response *>(untyped_value);
  value = item;
}

void assign_function__EmergencyStop_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<day2::srv::EmergencyStop_Response *>(
    get_function__EmergencyStop_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const day2::srv::EmergencyStop_Response *>(untyped_value);
  item = value;
}

void resize_function__EmergencyStop_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<day2::srv::EmergencyStop_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EmergencyStop_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Event, info),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<day2::srv::EmergencyStop_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__EmergencyStop_Event__request,  // size() function pointer
    get_const_function__EmergencyStop_Event__request,  // get_const(index) function pointer
    get_function__EmergencyStop_Event__request,  // get(index) function pointer
    fetch_function__EmergencyStop_Event__request,  // fetch(index, &value) function pointer
    assign_function__EmergencyStop_Event__request,  // assign(index, value) function pointer
    resize_function__EmergencyStop_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<day2::srv::EmergencyStop_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(day2::srv::EmergencyStop_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__EmergencyStop_Event__response,  // size() function pointer
    get_const_function__EmergencyStop_Event__response,  // get_const(index) function pointer
    get_function__EmergencyStop_Event__response,  // get(index) function pointer
    fetch_function__EmergencyStop_Event__response,  // fetch(index, &value) function pointer
    assign_function__EmergencyStop_Event__response,  // assign(index, value) function pointer
    resize_function__EmergencyStop_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EmergencyStop_Event_message_members = {
  "day2::srv",  // message namespace
  "EmergencyStop_Event",  // message name
  3,  // number of fields
  sizeof(day2::srv::EmergencyStop_Event),
  false,  // has_any_key_member_
  EmergencyStop_Event_message_member_array,  // message members
  EmergencyStop_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  EmergencyStop_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EmergencyStop_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EmergencyStop_Event_message_members,
  get_message_typesupport_handle_function,
  &day2__srv__EmergencyStop_Event__get_type_hash,
  &day2__srv__EmergencyStop_Event__get_type_description,
  &day2__srv__EmergencyStop_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace day2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<day2::srv::EmergencyStop_Event>()
{
  return &::day2::srv::rosidl_typesupport_introspection_cpp::EmergencyStop_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, srv, EmergencyStop_Event)() {
  return &::day2::srv::rosidl_typesupport_introspection_cpp::EmergencyStop_Event_message_type_support_handle;
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
// #include "day2/srv/detail/emergency_stop__functions.h"
// already included above
// #include "day2/srv/detail/emergency_stop__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers EmergencyStop_service_members = {
  "day2::srv",  // service namespace
  "EmergencyStop",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<day2::srv::EmergencyStop>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t EmergencyStop_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EmergencyStop_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<day2::srv::EmergencyStop_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<day2::srv::EmergencyStop_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<day2::srv::EmergencyStop_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<day2::srv::EmergencyStop>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<day2::srv::EmergencyStop>,
  &day2__srv__EmergencyStop__get_type_hash,
  &day2__srv__EmergencyStop__get_type_description,
  &day2__srv__EmergencyStop__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace day2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<day2::srv::EmergencyStop>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::day2::srv::rosidl_typesupport_introspection_cpp::EmergencyStop_service_type_support_handle;
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
        ::day2::srv::EmergencyStop_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::day2::srv::EmergencyStop_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::day2::srv::EmergencyStop_Event
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, day2, srv, EmergencyStop)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<day2::srv::EmergencyStop>();
}

#ifdef __cplusplus
}
#endif
