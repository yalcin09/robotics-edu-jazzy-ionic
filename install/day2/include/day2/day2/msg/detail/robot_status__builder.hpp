// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from day2:msg/RobotStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/msg/robot_status.hpp"


#ifndef DAY2__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define DAY2__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "day2/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace day2
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_error_message
{
public:
  explicit Init_RobotStatus_error_message(::day2::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::day2::msg::RobotStatus error_message(::day2::msg::RobotStatus::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::msg::RobotStatus msg_;
};

class Init_RobotStatus_task_progress
{
public:
  explicit Init_RobotStatus_task_progress(::day2::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_error_message task_progress(::day2::msg::RobotStatus::_task_progress_type arg)
  {
    msg_.task_progress = std::move(arg);
    return Init_RobotStatus_error_message(msg_);
  }

private:
  ::day2::msg::RobotStatus msg_;
};

class Init_RobotStatus_current_task
{
public:
  explicit Init_RobotStatus_current_task(::day2::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_task_progress current_task(::day2::msg::RobotStatus::_current_task_type arg)
  {
    msg_.current_task = std::move(arg);
    return Init_RobotStatus_task_progress(msg_);
  }

private:
  ::day2::msg::RobotStatus msg_;
};

class Init_RobotStatus_sensor_names
{
public:
  explicit Init_RobotStatus_sensor_names(::day2::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_current_task sensor_names(::day2::msg::RobotStatus::_sensor_names_type arg)
  {
    msg_.sensor_names = std::move(arg);
    return Init_RobotStatus_current_task(msg_);
  }

private:
  ::day2::msg::RobotStatus msg_;
};

class Init_RobotStatus_sensor_status
{
public:
  explicit Init_RobotStatus_sensor_status(::day2::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_sensor_names sensor_status(::day2::msg::RobotStatus::_sensor_status_type arg)
  {
    msg_.sensor_status = std::move(arg);
    return Init_RobotStatus_sensor_names(msg_);
  }

private:
  ::day2::msg::RobotStatus msg_;
};

class Init_RobotStatus_temperature
{
public:
  explicit Init_RobotStatus_temperature(::day2::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_sensor_status temperature(::day2::msg::RobotStatus::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_RobotStatus_sensor_status(msg_);
  }

private:
  ::day2::msg::RobotStatus msg_;
};

class Init_RobotStatus_battery_level
{
public:
  explicit Init_RobotStatus_battery_level(::day2::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_temperature battery_level(::day2::msg::RobotStatus::_battery_level_type arg)
  {
    msg_.battery_level = std::move(arg);
    return Init_RobotStatus_temperature(msg_);
  }

private:
  ::day2::msg::RobotStatus msg_;
};

class Init_RobotStatus_status
{
public:
  explicit Init_RobotStatus_status(::day2::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_battery_level status(::day2::msg::RobotStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RobotStatus_battery_level(msg_);
  }

private:
  ::day2::msg::RobotStatus msg_;
};

class Init_RobotStatus_velocity
{
public:
  explicit Init_RobotStatus_velocity(::day2::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_status velocity(::day2::msg::RobotStatus::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_RobotStatus_status(msg_);
  }

private:
  ::day2::msg::RobotStatus msg_;
};

class Init_RobotStatus_orientation
{
public:
  explicit Init_RobotStatus_orientation(::day2::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_velocity orientation(::day2::msg::RobotStatus::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_RobotStatus_velocity(msg_);
  }

private:
  ::day2::msg::RobotStatus msg_;
};

class Init_RobotStatus_position
{
public:
  explicit Init_RobotStatus_position(::day2::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_orientation position(::day2::msg::RobotStatus::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RobotStatus_orientation(msg_);
  }

private:
  ::day2::msg::RobotStatus msg_;
};

class Init_RobotStatus_timestamp
{
public:
  explicit Init_RobotStatus_timestamp(::day2::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_position timestamp(::day2::msg::RobotStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RobotStatus_position(msg_);
  }

private:
  ::day2::msg::RobotStatus msg_;
};

class Init_RobotStatus_robot_id
{
public:
  explicit Init_RobotStatus_robot_id(::day2::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_timestamp robot_id(::day2::msg::RobotStatus::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RobotStatus_timestamp(msg_);
  }

private:
  ::day2::msg::RobotStatus msg_;
};

class Init_RobotStatus_robot_name
{
public:
  Init_RobotStatus_robot_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_robot_id robot_name(::day2::msg::RobotStatus::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_RobotStatus_robot_id(msg_);
  }

private:
  ::day2::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::msg::RobotStatus>()
{
  return day2::msg::builder::Init_RobotStatus_robot_name();
}

}  // namespace day2

#endif  // DAY2__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
