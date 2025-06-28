// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from day2:msg/RobotArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/msg/robot_array.hpp"


#ifndef DAY2__MSG__DETAIL__ROBOT_ARRAY__BUILDER_HPP_
#define DAY2__MSG__DETAIL__ROBOT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "day2/msg/detail/robot_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace day2
{

namespace msg
{

namespace builder
{

class Init_RobotArray_update_frequency_hz
{
public:
  explicit Init_RobotArray_update_frequency_hz(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  ::day2::msg::RobotArray update_frequency_hz(::day2::msg::RobotArray::_update_frequency_hz_type arg)
  {
    msg_.update_frequency_hz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_system_messages
{
public:
  explicit Init_RobotArray_system_messages(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_update_frequency_hz system_messages(::day2::msg::RobotArray::_system_messages_type arg)
  {
    msg_.system_messages = std::move(arg);
    return Init_RobotArray_update_frequency_hz(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_critical_warnings
{
public:
  explicit Init_RobotArray_critical_warnings(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_system_messages critical_warnings(::day2::msg::RobotArray::_critical_warnings_type arg)
  {
    msg_.critical_warnings = std::move(arg);
    return Init_RobotArray_system_messages(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_system_health_score
{
public:
  explicit Init_RobotArray_system_health_score(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_critical_warnings system_health_score(::day2::msg::RobotArray::_system_health_score_type arg)
  {
    msg_.system_health_score = std::move(arg);
    return Init_RobotArray_critical_warnings(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_emergency_timestamp
{
public:
  explicit Init_RobotArray_emergency_timestamp(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_system_health_score emergency_timestamp(::day2::msg::RobotArray::_emergency_timestamp_type arg)
  {
    msg_.emergency_timestamp = std::move(arg);
    return Init_RobotArray_system_health_score(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_emergency_reason
{
public:
  explicit Init_RobotArray_emergency_reason(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_emergency_timestamp emergency_reason(::day2::msg::RobotArray::_emergency_reason_type arg)
  {
    msg_.emergency_reason = std::move(arg);
    return Init_RobotArray_emergency_timestamp(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_emergency_stop
{
public:
  explicit Init_RobotArray_emergency_stop(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_emergency_reason emergency_stop(::day2::msg::RobotArray::_emergency_stop_type arg)
  {
    msg_.emergency_stop = std::move(arg);
    return Init_RobotArray_emergency_reason(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_workspace_name
{
public:
  explicit Init_RobotArray_workspace_name(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_emergency_stop workspace_name(::day2::msg::RobotArray::_workspace_name_type arg)
  {
    msg_.workspace_name = std::move(arg);
    return Init_RobotArray_emergency_stop(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_workspace_max
{
public:
  explicit Init_RobotArray_workspace_max(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_workspace_name workspace_max(::day2::msg::RobotArray::_workspace_max_type arg)
  {
    msg_.workspace_max = std::move(arg);
    return Init_RobotArray_workspace_name(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_workspace_min
{
public:
  explicit Init_RobotArray_workspace_min(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_workspace_max workspace_min(::day2::msg::RobotArray::_workspace_min_type arg)
  {
    msg_.workspace_min = std::move(arg);
    return Init_RobotArray_workspace_max(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_pending_tasks
{
public:
  explicit Init_RobotArray_pending_tasks(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_workspace_min pending_tasks(::day2::msg::RobotArray::_pending_tasks_type arg)
  {
    msg_.pending_tasks = std::move(arg);
    return Init_RobotArray_workspace_min(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_completed_tasks
{
public:
  explicit Init_RobotArray_completed_tasks(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_pending_tasks completed_tasks(::day2::msg::RobotArray::_completed_tasks_type arg)
  {
    msg_.completed_tasks = std::move(arg);
    return Init_RobotArray_pending_tasks(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_average_speed
{
public:
  explicit Init_RobotArray_average_speed(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_completed_tasks average_speed(::day2::msg::RobotArray::_average_speed_type arg)
  {
    msg_.average_speed = std::move(arg);
    return Init_RobotArray_completed_tasks(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_total_distance_traveled
{
public:
  explicit Init_RobotArray_total_distance_traveled(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_average_speed total_distance_traveled(::day2::msg::RobotArray::_total_distance_traveled_type arg)
  {
    msg_.total_distance_traveled = std::move(arg);
    return Init_RobotArray_average_speed(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_average_battery_level
{
public:
  explicit Init_RobotArray_average_battery_level(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_total_distance_traveled average_battery_level(::day2::msg::RobotArray::_average_battery_level_type arg)
  {
    msg_.average_battery_level = std::move(arg);
    return Init_RobotArray_total_distance_traveled(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_fleet_status
{
public:
  explicit Init_RobotArray_fleet_status(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_average_battery_level fleet_status(::day2::msg::RobotArray::_fleet_status_type arg)
  {
    msg_.fleet_status = std::move(arg);
    return Init_RobotArray_average_battery_level(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_error_robots
{
public:
  explicit Init_RobotArray_error_robots(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_fleet_status error_robots(::day2::msg::RobotArray::_error_robots_type arg)
  {
    msg_.error_robots = std::move(arg);
    return Init_RobotArray_fleet_status(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_charging_robots
{
public:
  explicit Init_RobotArray_charging_robots(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_error_robots charging_robots(::day2::msg::RobotArray::_charging_robots_type arg)
  {
    msg_.charging_robots = std::move(arg);
    return Init_RobotArray_error_robots(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_idle_robots
{
public:
  explicit Init_RobotArray_idle_robots(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_charging_robots idle_robots(::day2::msg::RobotArray::_idle_robots_type arg)
  {
    msg_.idle_robots = std::move(arg);
    return Init_RobotArray_charging_robots(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_active_robots
{
public:
  explicit Init_RobotArray_active_robots(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_idle_robots active_robots(::day2::msg::RobotArray::_active_robots_type arg)
  {
    msg_.active_robots = std::move(arg);
    return Init_RobotArray_idle_robots(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_total_robots
{
public:
  explicit Init_RobotArray_total_robots(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_active_robots total_robots(::day2::msg::RobotArray::_total_robots_type arg)
  {
    msg_.total_robots = std::move(arg);
    return Init_RobotArray_active_robots(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_robots
{
public:
  explicit Init_RobotArray_robots(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_total_robots robots(::day2::msg::RobotArray::_robots_type arg)
  {
    msg_.robots = std::move(arg);
    return Init_RobotArray_total_robots(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_coordinator_node
{
public:
  explicit Init_RobotArray_coordinator_node(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_robots coordinator_node(::day2::msg::RobotArray::_coordinator_node_type arg)
  {
    msg_.coordinator_node = std::move(arg);
    return Init_RobotArray_robots(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_fleet_id
{
public:
  explicit Init_RobotArray_fleet_id(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_coordinator_node fleet_id(::day2::msg::RobotArray::_fleet_id_type arg)
  {
    msg_.fleet_id = std::move(arg);
    return Init_RobotArray_coordinator_node(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_fleet_name
{
public:
  explicit Init_RobotArray_fleet_name(::day2::msg::RobotArray & msg)
  : msg_(msg)
  {}
  Init_RobotArray_fleet_id fleet_name(::day2::msg::RobotArray::_fleet_name_type arg)
  {
    msg_.fleet_name = std::move(arg);
    return Init_RobotArray_fleet_id(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

class Init_RobotArray_header
{
public:
  Init_RobotArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotArray_fleet_name header(::day2::msg::RobotArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotArray_fleet_name(msg_);
  }

private:
  ::day2::msg::RobotArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::msg::RobotArray>()
{
  return day2::msg::builder::Init_RobotArray_header();
}

}  // namespace day2

#endif  // DAY2__MSG__DETAIL__ROBOT_ARRAY__BUILDER_HPP_
