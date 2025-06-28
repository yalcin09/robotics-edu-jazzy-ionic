// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from day2:msg/SensorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/msg/sensor_data.hpp"


#ifndef DAY2__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
#define DAY2__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_

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
# define DEPRECATED__day2__msg__SensorData __attribute__((deprecated))
#else
# define DEPRECATED__day2__msg__SensorData __declspec(deprecated)
#endif

namespace day2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorData_
{
  using Type = SensorData_<ContainerAllocator>;

  explicit SensorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_name = "";
      this->sensor_id = 0ul;
      this->unit = "";
      this->is_active = false;
      this->accuracy = 0.0f;
      this->error_code = 0ul;
    }
  }

  explicit SensorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    sensor_name(_alloc),
    unit(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_name = "";
      this->sensor_id = 0ul;
      this->unit = "";
      this->is_active = false;
      this->accuracy = 0.0f;
      this->error_code = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sensor_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sensor_name_type sensor_name;
  using _sensor_id_type =
    uint32_t;
  _sensor_id_type sensor_id;
  using _values_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _values_type values;
  using _value_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _value_names_type value_names;
  using _unit_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _unit_type unit;
  using _is_active_type =
    bool;
  _is_active_type is_active;
  using _accuracy_type =
    float;
  _accuracy_type accuracy;
  using _error_code_type =
    uint32_t;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sensor_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sensor_name = _arg;
    return *this;
  }
  Type & set__sensor_id(
    const uint32_t & _arg)
  {
    this->sensor_id = _arg;
    return *this;
  }
  Type & set__values(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->values = _arg;
    return *this;
  }
  Type & set__value_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->value_names = _arg;
    return *this;
  }
  Type & set__unit(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->unit = _arg;
    return *this;
  }
  Type & set__is_active(
    const bool & _arg)
  {
    this->is_active = _arg;
    return *this;
  }
  Type & set__accuracy(
    const float & _arg)
  {
    this->accuracy = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::msg::SensorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::msg::SensorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::msg::SensorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::msg::SensorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::msg::SensorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::msg::SensorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::msg::SensorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::msg::SensorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::msg::SensorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::msg::SensorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__msg__SensorData
    std::shared_ptr<day2::msg::SensorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__msg__SensorData
    std::shared_ptr<day2::msg::SensorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sensor_name != other.sensor_name) {
      return false;
    }
    if (this->sensor_id != other.sensor_id) {
      return false;
    }
    if (this->values != other.values) {
      return false;
    }
    if (this->value_names != other.value_names) {
      return false;
    }
    if (this->unit != other.unit) {
      return false;
    }
    if (this->is_active != other.is_active) {
      return false;
    }
    if (this->accuracy != other.accuracy) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorData_

// alias to use template instance with default allocator
using SensorData =
  day2::msg::SensorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace day2

#endif  // DAY2__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
