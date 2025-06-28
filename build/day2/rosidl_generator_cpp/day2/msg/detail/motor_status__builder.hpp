// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from day2:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/msg/motor_status.hpp"


#ifndef DAY2__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
#define DAY2__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "day2/msg/detail/motor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace day2
{

namespace msg
{

namespace builder
{

class Init_MotorStatus_start_count
{
public:
  explicit Init_MotorStatus_start_count(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  ::day2::msg::MotorStatus start_count(::day2::msg::MotorStatus::_start_count_type arg)
  {
    msg_.start_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_uptime_hours
{
public:
  explicit Init_MotorStatus_uptime_hours(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_start_count uptime_hours(::day2::msg::MotorStatus::_uptime_hours_type arg)
  {
    msg_.uptime_hours = std::move(arg);
    return Init_MotorStatus_start_count(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_total_revolutions
{
public:
  explicit Init_MotorStatus_total_revolutions(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_uptime_hours total_revolutions(::day2::msg::MotorStatus::_total_revolutions_type arg)
  {
    msg_.total_revolutions = std::move(arg);
    return Init_MotorStatus_uptime_hours(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_pid_output
{
public:
  explicit Init_MotorStatus_pid_output(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_total_revolutions pid_output(::day2::msg::MotorStatus::_pid_output_type arg)
  {
    msg_.pid_output = std::move(arg);
    return Init_MotorStatus_total_revolutions(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_pid_error
{
public:
  explicit Init_MotorStatus_pid_error(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_pid_output pid_error(::day2::msg::MotorStatus::_pid_error_type arg)
  {
    msg_.pid_error = std::move(arg);
    return Init_MotorStatus_pid_output(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_control_effort
{
public:
  explicit Init_MotorStatus_control_effort(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_pid_error control_effort(::day2::msg::MotorStatus::_control_effort_type arg)
  {
    msg_.control_effort = std::move(arg);
    return Init_MotorStatus_pid_error(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_error_flags
{
public:
  explicit Init_MotorStatus_error_flags(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_control_effort error_flags(::day2::msg::MotorStatus::_error_flags_type arg)
  {
    msg_.error_flags = std::move(arg);
    return Init_MotorStatus_control_effort(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_status
{
public:
  explicit Init_MotorStatus_status(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_error_flags status(::day2::msg::MotorStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MotorStatus_error_flags(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_acceleration
{
public:
  explicit Init_MotorStatus_acceleration(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_status acceleration(::day2::msg::MotorStatus::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_MotorStatus_status(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_velocity
{
public:
  explicit Init_MotorStatus_velocity(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_acceleration velocity(::day2::msg::MotorStatus::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_MotorStatus_acceleration(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_target_position
{
public:
  explicit Init_MotorStatus_target_position(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_velocity target_position(::day2::msg::MotorStatus::_target_position_type arg)
  {
    msg_.target_position = std::move(arg);
    return Init_MotorStatus_velocity(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_position
{
public:
  explicit Init_MotorStatus_position(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_target_position position(::day2::msg::MotorStatus::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_MotorStatus_target_position(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_max_temperature
{
public:
  explicit Init_MotorStatus_max_temperature(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_position max_temperature(::day2::msg::MotorStatus::_max_temperature_type arg)
  {
    msg_.max_temperature = std::move(arg);
    return Init_MotorStatus_position(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_temperature
{
public:
  explicit Init_MotorStatus_temperature(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_max_temperature temperature(::day2::msg::MotorStatus::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_MotorStatus_max_temperature(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_power
{
public:
  explicit Init_MotorStatus_power(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_temperature power(::day2::msg::MotorStatus::_power_type arg)
  {
    msg_.power = std::move(arg);
    return Init_MotorStatus_temperature(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_voltage
{
public:
  explicit Init_MotorStatus_voltage(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_power voltage(::day2::msg::MotorStatus::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_MotorStatus_power(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_current
{
public:
  explicit Init_MotorStatus_current(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_voltage current(::day2::msg::MotorStatus::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_MotorStatus_voltage(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_target_rpm
{
public:
  explicit Init_MotorStatus_target_rpm(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_current target_rpm(::day2::msg::MotorStatus::_target_rpm_type arg)
  {
    msg_.target_rpm = std::move(arg);
    return Init_MotorStatus_current(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_rpm
{
public:
  explicit Init_MotorStatus_rpm(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_target_rpm rpm(::day2::msg::MotorStatus::_rpm_type arg)
  {
    msg_.rpm = std::move(arg);
    return Init_MotorStatus_target_rpm(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_motor_id
{
public:
  explicit Init_MotorStatus_motor_id(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_rpm motor_id(::day2::msg::MotorStatus::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_MotorStatus_rpm(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_motor_name
{
public:
  explicit Init_MotorStatus_motor_name(::day2::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_motor_id motor_name(::day2::msg::MotorStatus::_motor_name_type arg)
  {
    msg_.motor_name = std::move(arg);
    return Init_MotorStatus_motor_id(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

class Init_MotorStatus_header
{
public:
  Init_MotorStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStatus_motor_name header(::day2::msg::MotorStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorStatus_motor_name(msg_);
  }

private:
  ::day2::msg::MotorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::msg::MotorStatus>()
{
  return day2::msg::builder::Init_MotorStatus_header();
}

}  // namespace day2

#endif  // DAY2__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
