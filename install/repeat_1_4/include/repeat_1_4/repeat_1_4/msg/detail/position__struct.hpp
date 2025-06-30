// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from repeat_1_4:msg/Position.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "repeat_1_4/msg/position.hpp"


#ifndef REPEAT_1_4__MSG__DETAIL__POSITION__STRUCT_HPP_
#define REPEAT_1_4__MSG__DETAIL__POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__repeat_1_4__msg__Position __attribute__((deprecated))
#else
# define DEPRECATED__repeat_1_4__msg__Position __declspec(deprecated)
#endif

namespace repeat_1_4
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Position_
{
  using Type = Position_<ContainerAllocator>;

  explicit Position_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->status = "";
    }
  }

  explicit Position_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc),
    timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->status = "";
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    repeat_1_4::msg::Position_<ContainerAllocator> *;
  using ConstRawPtr =
    const repeat_1_4::msg::Position_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<repeat_1_4::msg::Position_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<repeat_1_4::msg::Position_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::msg::Position_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::msg::Position_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::msg::Position_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::msg::Position_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<repeat_1_4::msg::Position_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<repeat_1_4::msg::Position_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__repeat_1_4__msg__Position
    std::shared_ptr<repeat_1_4::msg::Position_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__repeat_1_4__msg__Position
    std::shared_ptr<repeat_1_4::msg::Position_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Position_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Position_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Position_

// alias to use template instance with default allocator
using Position =
  repeat_1_4::msg::Position_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace repeat_1_4

#endif  // REPEAT_1_4__MSG__DETAIL__POSITION__STRUCT_HPP_
