// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from repeat_1_4:srv/MoveRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "repeat_1_4/srv/move_robot.hpp"


#ifndef REPEAT_1_4__SRV__DETAIL__MOVE_ROBOT__STRUCT_HPP_
#define REPEAT_1_4__SRV__DETAIL__MOVE_ROBOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__repeat_1_4__srv__MoveRobot_Request __attribute__((deprecated))
#else
# define DEPRECATED__repeat_1_4__srv__MoveRobot_Request __declspec(deprecated)
#endif

namespace repeat_1_4
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveRobot_Request_
{
  using Type = MoveRobot_Request_<ContainerAllocator>;

  explicit MoveRobot_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_x = 0.0f;
      this->target_y = 0.0f;
      this->speed = 0.0f;
    }
  }

  explicit MoveRobot_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_x = 0.0f;
      this->target_y = 0.0f;
      this->speed = 0.0f;
    }
  }

  // field types and members
  using _target_x_type =
    float;
  _target_x_type target_x;
  using _target_y_type =
    float;
  _target_y_type target_y;
  using _speed_type =
    float;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__target_x(
    const float & _arg)
  {
    this->target_x = _arg;
    return *this;
  }
  Type & set__target_y(
    const float & _arg)
  {
    this->target_y = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    repeat_1_4::srv::MoveRobot_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const repeat_1_4::srv::MoveRobot_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<repeat_1_4::srv::MoveRobot_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<repeat_1_4::srv::MoveRobot_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::srv::MoveRobot_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::srv::MoveRobot_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::srv::MoveRobot_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::srv::MoveRobot_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<repeat_1_4::srv::MoveRobot_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<repeat_1_4::srv::MoveRobot_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__repeat_1_4__srv__MoveRobot_Request
    std::shared_ptr<repeat_1_4::srv::MoveRobot_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__repeat_1_4__srv__MoveRobot_Request
    std::shared_ptr<repeat_1_4::srv::MoveRobot_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveRobot_Request_ & other) const
  {
    if (this->target_x != other.target_x) {
      return false;
    }
    if (this->target_y != other.target_y) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveRobot_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveRobot_Request_

// alias to use template instance with default allocator
using MoveRobot_Request =
  repeat_1_4::srv::MoveRobot_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace repeat_1_4


#ifndef _WIN32
# define DEPRECATED__repeat_1_4__srv__MoveRobot_Response __attribute__((deprecated))
#else
# define DEPRECATED__repeat_1_4__srv__MoveRobot_Response __declspec(deprecated)
#endif

namespace repeat_1_4
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveRobot_Response_
{
  using Type = MoveRobot_Response_<ContainerAllocator>;

  explicit MoveRobot_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->distance = 0.0f;
    }
  }

  explicit MoveRobot_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _distance_type =
    float;
  _distance_type distance;

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
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    repeat_1_4::srv::MoveRobot_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const repeat_1_4::srv::MoveRobot_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<repeat_1_4::srv::MoveRobot_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<repeat_1_4::srv::MoveRobot_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::srv::MoveRobot_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::srv::MoveRobot_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::srv::MoveRobot_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::srv::MoveRobot_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<repeat_1_4::srv::MoveRobot_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<repeat_1_4::srv::MoveRobot_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__repeat_1_4__srv__MoveRobot_Response
    std::shared_ptr<repeat_1_4::srv::MoveRobot_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__repeat_1_4__srv__MoveRobot_Response
    std::shared_ptr<repeat_1_4::srv::MoveRobot_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveRobot_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveRobot_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveRobot_Response_

// alias to use template instance with default allocator
using MoveRobot_Response =
  repeat_1_4::srv::MoveRobot_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace repeat_1_4


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__repeat_1_4__srv__MoveRobot_Event __attribute__((deprecated))
#else
# define DEPRECATED__repeat_1_4__srv__MoveRobot_Event __declspec(deprecated)
#endif

namespace repeat_1_4
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveRobot_Event_
{
  using Type = MoveRobot_Event_<ContainerAllocator>;

  explicit MoveRobot_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MoveRobot_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<repeat_1_4::srv::MoveRobot_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<repeat_1_4::srv::MoveRobot_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<repeat_1_4::srv::MoveRobot_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<repeat_1_4::srv::MoveRobot_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<repeat_1_4::srv::MoveRobot_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<repeat_1_4::srv::MoveRobot_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<repeat_1_4::srv::MoveRobot_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<repeat_1_4::srv::MoveRobot_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    repeat_1_4::srv::MoveRobot_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const repeat_1_4::srv::MoveRobot_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<repeat_1_4::srv::MoveRobot_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<repeat_1_4::srv::MoveRobot_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::srv::MoveRobot_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::srv::MoveRobot_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::srv::MoveRobot_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::srv::MoveRobot_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<repeat_1_4::srv::MoveRobot_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<repeat_1_4::srv::MoveRobot_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__repeat_1_4__srv__MoveRobot_Event
    std::shared_ptr<repeat_1_4::srv::MoveRobot_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__repeat_1_4__srv__MoveRobot_Event
    std::shared_ptr<repeat_1_4::srv::MoveRobot_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveRobot_Event_ & other) const
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
  bool operator!=(const MoveRobot_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveRobot_Event_

// alias to use template instance with default allocator
using MoveRobot_Event =
  repeat_1_4::srv::MoveRobot_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace repeat_1_4

namespace repeat_1_4
{

namespace srv
{

struct MoveRobot
{
  using Request = repeat_1_4::srv::MoveRobot_Request;
  using Response = repeat_1_4::srv::MoveRobot_Response;
  using Event = repeat_1_4::srv::MoveRobot_Event;
};

}  // namespace srv

}  // namespace repeat_1_4

#endif  // REPEAT_1_4__SRV__DETAIL__MOVE_ROBOT__STRUCT_HPP_
