// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from day2:msg/SensorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/msg/sensor_data.hpp"


#ifndef DAY2__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
#define DAY2__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "day2/msg/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace day2
{

namespace msg
{

namespace builder
{

class Init_SensorData_error_code
{
public:
  explicit Init_SensorData_error_code(::day2::msg::SensorData & msg)
  : msg_(msg)
  {}
  ::day2::msg::SensorData error_code(::day2::msg::SensorData::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::day2::msg::SensorData msg_;
};

class Init_SensorData_accuracy
{
public:
  explicit Init_SensorData_accuracy(::day2::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_error_code accuracy(::day2::msg::SensorData::_accuracy_type arg)
  {
    msg_.accuracy = std::move(arg);
    return Init_SensorData_error_code(msg_);
  }

private:
  ::day2::msg::SensorData msg_;
};

class Init_SensorData_is_active
{
public:
  explicit Init_SensorData_is_active(::day2::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_accuracy is_active(::day2::msg::SensorData::_is_active_type arg)
  {
    msg_.is_active = std::move(arg);
    return Init_SensorData_accuracy(msg_);
  }

private:
  ::day2::msg::SensorData msg_;
};

class Init_SensorData_unit
{
public:
  explicit Init_SensorData_unit(::day2::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_is_active unit(::day2::msg::SensorData::_unit_type arg)
  {
    msg_.unit = std::move(arg);
    return Init_SensorData_is_active(msg_);
  }

private:
  ::day2::msg::SensorData msg_;
};

class Init_SensorData_value_names
{
public:
  explicit Init_SensorData_value_names(::day2::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_unit value_names(::day2::msg::SensorData::_value_names_type arg)
  {
    msg_.value_names = std::move(arg);
    return Init_SensorData_unit(msg_);
  }

private:
  ::day2::msg::SensorData msg_;
};

class Init_SensorData_values
{
public:
  explicit Init_SensorData_values(::day2::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_value_names values(::day2::msg::SensorData::_values_type arg)
  {
    msg_.values = std::move(arg);
    return Init_SensorData_value_names(msg_);
  }

private:
  ::day2::msg::SensorData msg_;
};

class Init_SensorData_sensor_id
{
public:
  explicit Init_SensorData_sensor_id(::day2::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_values sensor_id(::day2::msg::SensorData::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_SensorData_values(msg_);
  }

private:
  ::day2::msg::SensorData msg_;
};

class Init_SensorData_sensor_name
{
public:
  explicit Init_SensorData_sensor_name(::day2::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_sensor_id sensor_name(::day2::msg::SensorData::_sensor_name_type arg)
  {
    msg_.sensor_name = std::move(arg);
    return Init_SensorData_sensor_id(msg_);
  }

private:
  ::day2::msg::SensorData msg_;
};

class Init_SensorData_header
{
public:
  Init_SensorData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorData_sensor_name header(::day2::msg::SensorData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SensorData_sensor_name(msg_);
  }

private:
  ::day2::msg::SensorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::day2::msg::SensorData>()
{
  return day2::msg::builder::Init_SensorData_header();
}

}  // namespace day2

#endif  // DAY2__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
