// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from day2:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/msg/motor_status.hpp"


#ifndef DAY2__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_
#define DAY2__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "day2/msg/detail/motor_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace day2
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: motor_name
  {
    out << "motor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_name, out);
    out << ", ";
  }

  // member: motor_id
  {
    out << "motor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_id, out);
    out << ", ";
  }

  // member: rpm
  {
    out << "rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm, out);
    out << ", ";
  }

  // member: target_rpm
  {
    out << "target_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.target_rpm, out);
    out << ", ";
  }

  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << ", ";
  }

  // member: voltage
  {
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << ", ";
  }

  // member: power
  {
    out << "power: ";
    rosidl_generator_traits::value_to_yaml(msg.power, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: max_temperature
  {
    out << "max_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.max_temperature, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: target_position
  {
    out << "target_position: ";
    rosidl_generator_traits::value_to_yaml(msg.target_position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: error_flags
  {
    out << "error_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.error_flags, out);
    out << ", ";
  }

  // member: control_effort
  {
    out << "control_effort: ";
    rosidl_generator_traits::value_to_yaml(msg.control_effort, out);
    out << ", ";
  }

  // member: pid_error
  {
    out << "pid_error: ";
    rosidl_generator_traits::value_to_yaml(msg.pid_error, out);
    out << ", ";
  }

  // member: pid_output
  {
    out << "pid_output: ";
    rosidl_generator_traits::value_to_yaml(msg.pid_output, out);
    out << ", ";
  }

  // member: total_revolutions
  {
    out << "total_revolutions: ";
    rosidl_generator_traits::value_to_yaml(msg.total_revolutions, out);
    out << ", ";
  }

  // member: uptime_hours
  {
    out << "uptime_hours: ";
    rosidl_generator_traits::value_to_yaml(msg.uptime_hours, out);
    out << ", ";
  }

  // member: start_count
  {
    out << "start_count: ";
    rosidl_generator_traits::value_to_yaml(msg.start_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: motor_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_name, out);
    out << "\n";
  }

  // member: motor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_id, out);
    out << "\n";
  }

  // member: rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm, out);
    out << "\n";
  }

  // member: target_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.target_rpm, out);
    out << "\n";
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }

  // member: voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << "\n";
  }

  // member: power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power: ";
    rosidl_generator_traits::value_to_yaml(msg.power, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: max_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.max_temperature, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: target_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_position: ";
    rosidl_generator_traits::value_to_yaml(msg.target_position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: error_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.error_flags, out);
    out << "\n";
  }

  // member: control_effort
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_effort: ";
    rosidl_generator_traits::value_to_yaml(msg.control_effort, out);
    out << "\n";
  }

  // member: pid_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_error: ";
    rosidl_generator_traits::value_to_yaml(msg.pid_error, out);
    out << "\n";
  }

  // member: pid_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pid_output: ";
    rosidl_generator_traits::value_to_yaml(msg.pid_output, out);
    out << "\n";
  }

  // member: total_revolutions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_revolutions: ";
    rosidl_generator_traits::value_to_yaml(msg.total_revolutions, out);
    out << "\n";
  }

  // member: uptime_hours
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uptime_hours: ";
    rosidl_generator_traits::value_to_yaml(msg.uptime_hours, out);
    out << "\n";
  }

  // member: start_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_count: ";
    rosidl_generator_traits::value_to_yaml(msg.start_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace day2

namespace rosidl_generator_traits
{

[[deprecated("use day2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const day2::msg::MotorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  day2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use day2::msg::to_yaml() instead")]]
inline std::string to_yaml(const day2::msg::MotorStatus & msg)
{
  return day2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<day2::msg::MotorStatus>()
{
  return "day2::msg::MotorStatus";
}

template<>
inline const char * name<day2::msg::MotorStatus>()
{
  return "day2/msg/MotorStatus";
}

template<>
struct has_fixed_size<day2::msg::MotorStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<day2::msg::MotorStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<day2::msg::MotorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DAY2__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_
