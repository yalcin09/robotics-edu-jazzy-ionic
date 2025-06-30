// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from repeat_1_4:msg/Position.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "repeat_1_4/msg/position.hpp"


#ifndef REPEAT_1_4__MSG__DETAIL__POSITION__TRAITS_HPP_
#define REPEAT_1_4__MSG__DETAIL__POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "repeat_1_4/msg/detail/position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace repeat_1_4
{

namespace msg
{

inline void to_flow_style_yaml(
  const Position & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Position & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
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

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Position & msg, bool use_flow_style = false)
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

}  // namespace repeat_1_4

namespace rosidl_generator_traits
{

[[deprecated("use repeat_1_4::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const repeat_1_4::msg::Position & msg,
  std::ostream & out, size_t indentation = 0)
{
  repeat_1_4::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use repeat_1_4::msg::to_yaml() instead")]]
inline std::string to_yaml(const repeat_1_4::msg::Position & msg)
{
  return repeat_1_4::msg::to_yaml(msg);
}

template<>
inline const char * data_type<repeat_1_4::msg::Position>()
{
  return "repeat_1_4::msg::Position";
}

template<>
inline const char * name<repeat_1_4::msg::Position>()
{
  return "repeat_1_4/msg/Position";
}

template<>
struct has_fixed_size<repeat_1_4::msg::Position>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<repeat_1_4::msg::Position>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<repeat_1_4::msg::Position>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // REPEAT_1_4__MSG__DETAIL__POSITION__TRAITS_HPP_
