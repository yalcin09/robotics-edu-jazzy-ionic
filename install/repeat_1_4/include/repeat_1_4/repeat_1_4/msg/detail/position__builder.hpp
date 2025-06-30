// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from repeat_1_4:msg/Position.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "repeat_1_4/msg/position.hpp"


#ifndef REPEAT_1_4__MSG__DETAIL__POSITION__BUILDER_HPP_
#define REPEAT_1_4__MSG__DETAIL__POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "repeat_1_4/msg/detail/position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace repeat_1_4
{

namespace msg
{

namespace builder
{

class Init_Position_timestamp
{
public:
  explicit Init_Position_timestamp(::repeat_1_4::msg::Position & msg)
  : msg_(msg)
  {}
  ::repeat_1_4::msg::Position timestamp(::repeat_1_4::msg::Position::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::repeat_1_4::msg::Position msg_;
};

class Init_Position_status
{
public:
  explicit Init_Position_status(::repeat_1_4::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_timestamp status(::repeat_1_4::msg::Position::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Position_timestamp(msg_);
  }

private:
  ::repeat_1_4::msg::Position msg_;
};

class Init_Position_y
{
public:
  explicit Init_Position_y(::repeat_1_4::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_status y(::repeat_1_4::msg::Position::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Position_status(msg_);
  }

private:
  ::repeat_1_4::msg::Position msg_;
};

class Init_Position_x
{
public:
  Init_Position_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Position_y x(::repeat_1_4::msg::Position::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Position_y(msg_);
  }

private:
  ::repeat_1_4::msg::Position msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::repeat_1_4::msg::Position>()
{
  return repeat_1_4::msg::builder::Init_Position_x();
}

}  // namespace repeat_1_4

#endif  // REPEAT_1_4__MSG__DETAIL__POSITION__BUILDER_HPP_
