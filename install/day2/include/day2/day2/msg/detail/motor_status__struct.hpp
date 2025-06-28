// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from day2:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/msg/motor_status.hpp"


#ifndef DAY2__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
#define DAY2__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__msg__MotorStatus __attribute__((deprecated))
#else
# define DEPRECATED__day2__msg__MotorStatus __declspec(deprecated)
#endif

namespace day2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorStatus_
{
  using Type = MotorStatus_<ContainerAllocator>;

  explicit MotorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_name = "";
      this->motor_id = 0ul;
      this->rpm = 0.0f;
      this->target_rpm = 0.0f;
      this->current = 0.0f;
      this->voltage = 0.0f;
      this->power = 0.0f;
      this->temperature = 0.0f;
      this->max_temperature = 0.0f;
      this->position = 0.0;
      this->target_position = 0.0;
      this->velocity = 0.0;
      this->acceleration = 0.0;
      this->status = 0;
      this->error_flags = 0ul;
      this->control_effort = 0.0f;
      this->pid_error = 0.0f;
      this->pid_output = 0.0f;
      this->total_revolutions = 0ull;
      this->uptime_hours = 0.0f;
      this->start_count = 0ul;
    }
  }

  explicit MotorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    motor_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_name = "";
      this->motor_id = 0ul;
      this->rpm = 0.0f;
      this->target_rpm = 0.0f;
      this->current = 0.0f;
      this->voltage = 0.0f;
      this->power = 0.0f;
      this->temperature = 0.0f;
      this->max_temperature = 0.0f;
      this->position = 0.0;
      this->target_position = 0.0;
      this->velocity = 0.0;
      this->acceleration = 0.0;
      this->status = 0;
      this->error_flags = 0ul;
      this->control_effort = 0.0f;
      this->pid_error = 0.0f;
      this->pid_output = 0.0f;
      this->total_revolutions = 0ull;
      this->uptime_hours = 0.0f;
      this->start_count = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _motor_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _motor_name_type motor_name;
  using _motor_id_type =
    uint32_t;
  _motor_id_type motor_id;
  using _rpm_type =
    float;
  _rpm_type rpm;
  using _target_rpm_type =
    float;
  _target_rpm_type target_rpm;
  using _current_type =
    float;
  _current_type current;
  using _voltage_type =
    float;
  _voltage_type voltage;
  using _power_type =
    float;
  _power_type power;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _max_temperature_type =
    float;
  _max_temperature_type max_temperature;
  using _position_type =
    double;
  _position_type position;
  using _target_position_type =
    double;
  _target_position_type target_position;
  using _velocity_type =
    double;
  _velocity_type velocity;
  using _acceleration_type =
    double;
  _acceleration_type acceleration;
  using _status_type =
    uint8_t;
  _status_type status;
  using _error_flags_type =
    uint32_t;
  _error_flags_type error_flags;
  using _control_effort_type =
    float;
  _control_effort_type control_effort;
  using _pid_error_type =
    float;
  _pid_error_type pid_error;
  using _pid_output_type =
    float;
  _pid_output_type pid_output;
  using _total_revolutions_type =
    uint64_t;
  _total_revolutions_type total_revolutions;
  using _uptime_hours_type =
    float;
  _uptime_hours_type uptime_hours;
  using _start_count_type =
    uint32_t;
  _start_count_type start_count;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__motor_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->motor_name = _arg;
    return *this;
  }
  Type & set__motor_id(
    const uint32_t & _arg)
  {
    this->motor_id = _arg;
    return *this;
  }
  Type & set__rpm(
    const float & _arg)
  {
    this->rpm = _arg;
    return *this;
  }
  Type & set__target_rpm(
    const float & _arg)
  {
    this->target_rpm = _arg;
    return *this;
  }
  Type & set__current(
    const float & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__voltage(
    const float & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__power(
    const float & _arg)
  {
    this->power = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__max_temperature(
    const float & _arg)
  {
    this->max_temperature = _arg;
    return *this;
  }
  Type & set__position(
    const double & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__target_position(
    const double & _arg)
  {
    this->target_position = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const double & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__error_flags(
    const uint32_t & _arg)
  {
    this->error_flags = _arg;
    return *this;
  }
  Type & set__control_effort(
    const float & _arg)
  {
    this->control_effort = _arg;
    return *this;
  }
  Type & set__pid_error(
    const float & _arg)
  {
    this->pid_error = _arg;
    return *this;
  }
  Type & set__pid_output(
    const float & _arg)
  {
    this->pid_output = _arg;
    return *this;
  }
  Type & set__total_revolutions(
    const uint64_t & _arg)
  {
    this->total_revolutions = _arg;
    return *this;
  }
  Type & set__uptime_hours(
    const float & _arg)
  {
    this->uptime_hours = _arg;
    return *this;
  }
  Type & set__start_count(
    const uint32_t & _arg)
  {
    this->start_count = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATUS_STOPPED =
    0u;
  static constexpr uint8_t STATUS_STARTING =
    1u;
  static constexpr uint8_t STATUS_RUNNING =
    2u;
  static constexpr uint8_t STATUS_STOPPING =
    3u;
  static constexpr uint8_t STATUS_ERROR =
    4u;
  static constexpr uint8_t STATUS_MAINTENANCE =
    5u;
  static constexpr uint32_t ERROR_NONE =
    0u;
  static constexpr uint32_t ERROR_OVERCURRENT =
    1u;
  static constexpr uint32_t ERROR_OVERHEAT =
    2u;
  static constexpr uint32_t ERROR_OVERVOLTAGE =
    4u;
  static constexpr uint32_t ERROR_UNDERVOLTAGE =
    8u;
  static constexpr uint32_t ERROR_ENCODER =
    16u;
  static constexpr uint32_t ERROR_COMMUNICATION =
    32u;
  static constexpr uint32_t ERROR_MECHANICAL =
    64u;

  // pointer types
  using RawPtr =
    day2::msg::MotorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::msg::MotorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::msg::MotorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::msg::MotorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::msg::MotorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::msg::MotorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::msg::MotorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::msg::MotorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::msg::MotorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::msg::MotorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__msg__MotorStatus
    std::shared_ptr<day2::msg::MotorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__msg__MotorStatus
    std::shared_ptr<day2::msg::MotorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->motor_name != other.motor_name) {
      return false;
    }
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->rpm != other.rpm) {
      return false;
    }
    if (this->target_rpm != other.target_rpm) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->power != other.power) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->max_temperature != other.max_temperature) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->target_position != other.target_position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->error_flags != other.error_flags) {
      return false;
    }
    if (this->control_effort != other.control_effort) {
      return false;
    }
    if (this->pid_error != other.pid_error) {
      return false;
    }
    if (this->pid_output != other.pid_output) {
      return false;
    }
    if (this->total_revolutions != other.total_revolutions) {
      return false;
    }
    if (this->uptime_hours != other.uptime_hours) {
      return false;
    }
    if (this->start_count != other.start_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorStatus_

// alias to use template instance with default allocator
using MotorStatus =
  day2::msg::MotorStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MotorStatus_<ContainerAllocator>::STATUS_STOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MotorStatus_<ContainerAllocator>::STATUS_STARTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MotorStatus_<ContainerAllocator>::STATUS_RUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MotorStatus_<ContainerAllocator>::STATUS_STOPPING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MotorStatus_<ContainerAllocator>::STATUS_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MotorStatus_<ContainerAllocator>::STATUS_MAINTENANCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MotorStatus_<ContainerAllocator>::ERROR_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MotorStatus_<ContainerAllocator>::ERROR_OVERCURRENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MotorStatus_<ContainerAllocator>::ERROR_OVERHEAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MotorStatus_<ContainerAllocator>::ERROR_OVERVOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MotorStatus_<ContainerAllocator>::ERROR_UNDERVOLTAGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MotorStatus_<ContainerAllocator>::ERROR_ENCODER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MotorStatus_<ContainerAllocator>::ERROR_COMMUNICATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t MotorStatus_<ContainerAllocator>::ERROR_MECHANICAL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace day2

#endif  // DAY2__MSG__DETAIL__MOTOR_STATUS__STRUCT_HPP_
