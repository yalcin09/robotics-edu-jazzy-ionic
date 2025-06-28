// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from day2:srv/RobotCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "day2/srv/robot_command.hpp"


#ifndef DAY2__SRV__DETAIL__ROBOT_COMMAND__STRUCT_HPP_
#define DAY2__SRV__DETAIL__ROBOT_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'target_orientation'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'deadline'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__srv__RobotCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__day2__srv__RobotCommand_Request __declspec(deprecated)
#endif

namespace day2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotCommand_Request_
{
  using Type = RobotCommand_Request_<ContainerAllocator>;

  explicit RobotCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_position(_init),
    target_orientation(_init),
    deadline(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_type = "";
      this->max_velocity = 0.0f;
      this->max_acceleration = 0.0f;
      this->timeout_seconds = 0.0f;
      this->force_execution = false;
    }
  }

  explicit RobotCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command_type(_alloc),
    target_position(_alloc, _init),
    target_orientation(_alloc, _init),
    deadline(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_type = "";
      this->max_velocity = 0.0f;
      this->max_acceleration = 0.0f;
      this->timeout_seconds = 0.0f;
      this->force_execution = false;
    }
  }

  // field types and members
  using _command_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type_type command_type;
  using _target_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _target_position_type target_position;
  using _target_orientation_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _target_orientation_type target_orientation;
  using _max_velocity_type =
    float;
  _max_velocity_type max_velocity;
  using _max_acceleration_type =
    float;
  _max_acceleration_type max_acceleration;
  using _timeout_seconds_type =
    float;
  _timeout_seconds_type timeout_seconds;
  using _force_execution_type =
    bool;
  _force_execution_type force_execution;
  using _additional_params_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _additional_params_type additional_params;
  using _deadline_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _deadline_type deadline;

  // setters for named parameter idiom
  Type & set__command_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command_type = _arg;
    return *this;
  }
  Type & set__target_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->target_position = _arg;
    return *this;
  }
  Type & set__target_orientation(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->target_orientation = _arg;
    return *this;
  }
  Type & set__max_velocity(
    const float & _arg)
  {
    this->max_velocity = _arg;
    return *this;
  }
  Type & set__max_acceleration(
    const float & _arg)
  {
    this->max_acceleration = _arg;
    return *this;
  }
  Type & set__timeout_seconds(
    const float & _arg)
  {
    this->timeout_seconds = _arg;
    return *this;
  }
  Type & set__force_execution(
    const bool & _arg)
  {
    this->force_execution = _arg;
    return *this;
  }
  Type & set__additional_params(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->additional_params = _arg;
    return *this;
  }
  Type & set__deadline(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->deadline = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::srv::RobotCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::srv::RobotCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::srv::RobotCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::srv::RobotCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::srv::RobotCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::srv::RobotCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::srv::RobotCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::srv::RobotCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::srv::RobotCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::srv::RobotCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__srv__RobotCommand_Request
    std::shared_ptr<day2::srv::RobotCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__srv__RobotCommand_Request
    std::shared_ptr<day2::srv::RobotCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCommand_Request_ & other) const
  {
    if (this->command_type != other.command_type) {
      return false;
    }
    if (this->target_position != other.target_position) {
      return false;
    }
    if (this->target_orientation != other.target_orientation) {
      return false;
    }
    if (this->max_velocity != other.max_velocity) {
      return false;
    }
    if (this->max_acceleration != other.max_acceleration) {
      return false;
    }
    if (this->timeout_seconds != other.timeout_seconds) {
      return false;
    }
    if (this->force_execution != other.force_execution) {
      return false;
    }
    if (this->additional_params != other.additional_params) {
      return false;
    }
    if (this->deadline != other.deadline) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCommand_Request_

// alias to use template instance with default allocator
using RobotCommand_Request =
  day2::srv::RobotCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace day2


// Include directives for member types
// Member 'actual_target'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'estimated_completion'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__srv__RobotCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__day2__srv__RobotCommand_Response __declspec(deprecated)
#endif

namespace day2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotCommand_Response_
{
  using Type = RobotCommand_Response_<ContainerAllocator>;

  explicit RobotCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : actual_target(_init),
    estimated_completion(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->command_id = 0ul;
      this->estimated_duration = 0.0f;
      this->error_code = 0ul;
    }
  }

  explicit RobotCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    actual_target(_alloc, _init),
    estimated_completion(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->command_id = 0ul;
      this->estimated_duration = 0.0f;
      this->error_code = 0ul;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _command_id_type =
    uint32_t;
  _command_id_type command_id;
  using _estimated_duration_type =
    float;
  _estimated_duration_type estimated_duration;
  using _actual_target_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _actual_target_type actual_target;
  using _estimated_completion_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _estimated_completion_type estimated_completion;
  using _error_code_type =
    uint32_t;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__command_id(
    const uint32_t & _arg)
  {
    this->command_id = _arg;
    return *this;
  }
  Type & set__estimated_duration(
    const float & _arg)
  {
    this->estimated_duration = _arg;
    return *this;
  }
  Type & set__actual_target(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->actual_target = _arg;
    return *this;
  }
  Type & set__estimated_completion(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->estimated_completion = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t ERROR_NONE =
    0u;
  static constexpr uint32_t ERROR_INVALID_COMMAND =
    1u;
  static constexpr uint32_t ERROR_OUT_OF_BOUNDS =
    2u;
  static constexpr uint32_t ERROR_ROBOT_BUSY =
    3u;
  static constexpr uint32_t ERROR_SAFETY_VIOLATION =
    4u;
  static constexpr uint32_t ERROR_HARDWARE_FAILURE =
    5u;
  static constexpr uint32_t ERROR_TIMEOUT =
    6u;

  // pointer types
  using RawPtr =
    day2::srv::RobotCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::srv::RobotCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::srv::RobotCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::srv::RobotCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::srv::RobotCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::srv::RobotCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::srv::RobotCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::srv::RobotCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::srv::RobotCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::srv::RobotCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__srv__RobotCommand_Response
    std::shared_ptr<day2::srv::RobotCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__srv__RobotCommand_Response
    std::shared_ptr<day2::srv::RobotCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCommand_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->command_id != other.command_id) {
      return false;
    }
    if (this->estimated_duration != other.estimated_duration) {
      return false;
    }
    if (this->actual_target != other.actual_target) {
      return false;
    }
    if (this->estimated_completion != other.estimated_completion) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCommand_Response_

// alias to use template instance with default allocator
using RobotCommand_Response =
  day2::srv::RobotCommand_Response_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RobotCommand_Response_<ContainerAllocator>::ERROR_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RobotCommand_Response_<ContainerAllocator>::ERROR_INVALID_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RobotCommand_Response_<ContainerAllocator>::ERROR_OUT_OF_BOUNDS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RobotCommand_Response_<ContainerAllocator>::ERROR_ROBOT_BUSY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RobotCommand_Response_<ContainerAllocator>::ERROR_SAFETY_VIOLATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RobotCommand_Response_<ContainerAllocator>::ERROR_HARDWARE_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RobotCommand_Response_<ContainerAllocator>::ERROR_TIMEOUT;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace day2


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__day2__srv__RobotCommand_Event __attribute__((deprecated))
#else
# define DEPRECATED__day2__srv__RobotCommand_Event __declspec(deprecated)
#endif

namespace day2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotCommand_Event_
{
  using Type = RobotCommand_Event_<ContainerAllocator>;

  explicit RobotCommand_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit RobotCommand_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<day2::srv::RobotCommand_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::srv::RobotCommand_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<day2::srv::RobotCommand_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::srv::RobotCommand_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<day2::srv::RobotCommand_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::srv::RobotCommand_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<day2::srv::RobotCommand_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<day2::srv::RobotCommand_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    day2::srv::RobotCommand_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const day2::srv::RobotCommand_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<day2::srv::RobotCommand_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<day2::srv::RobotCommand_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      day2::srv::RobotCommand_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<day2::srv::RobotCommand_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      day2::srv::RobotCommand_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<day2::srv::RobotCommand_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<day2::srv::RobotCommand_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<day2::srv::RobotCommand_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__day2__srv__RobotCommand_Event
    std::shared_ptr<day2::srv::RobotCommand_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__day2__srv__RobotCommand_Event
    std::shared_ptr<day2::srv::RobotCommand_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCommand_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCommand_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCommand_Event_

// alias to use template instance with default allocator
using RobotCommand_Event =
  day2::srv::RobotCommand_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace day2

namespace day2
{

namespace srv
{

struct RobotCommand
{
  using Request = day2::srv::RobotCommand_Request;
  using Response = day2::srv::RobotCommand_Response;
  using Event = day2::srv::RobotCommand_Event;
};

}  // namespace srv

}  // namespace day2

#endif  // DAY2__SRV__DETAIL__ROBOT_COMMAND__STRUCT_HPP_
