// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from repeat_1_4:action/GoToPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "repeat_1_4/action/go_to_point.hpp"


#ifndef REPEAT_1_4__ACTION__DETAIL__GO_TO_POINT__STRUCT_HPP_
#define REPEAT_1_4__ACTION__DETAIL__GO_TO_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__repeat_1_4__action__GoToPoint_Goal __attribute__((deprecated))
#else
# define DEPRECATED__repeat_1_4__action__GoToPoint_Goal __declspec(deprecated)
#endif

namespace repeat_1_4
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_Goal_
{
  using Type = GoToPoint_Goal_<ContainerAllocator>;

  explicit GoToPoint_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_x = 0.0f;
      this->target_y = 0.0f;
    }
  }

  explicit GoToPoint_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_x = 0.0f;
      this->target_y = 0.0f;
    }
  }

  // field types and members
  using _target_x_type =
    float;
  _target_x_type target_x;
  using _target_y_type =
    float;
  _target_y_type target_y;

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

  // constant declarations

  // pointer types
  using RawPtr =
    repeat_1_4::action::GoToPoint_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const repeat_1_4::action::GoToPoint_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_Goal
    std::shared_ptr<repeat_1_4::action::GoToPoint_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_Goal
    std::shared_ptr<repeat_1_4::action::GoToPoint_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_Goal_ & other) const
  {
    if (this->target_x != other.target_x) {
      return false;
    }
    if (this->target_y != other.target_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPoint_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_Goal_

// alias to use template instance with default allocator
using GoToPoint_Goal =
  repeat_1_4::action::GoToPoint_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace repeat_1_4


#ifndef _WIN32
# define DEPRECATED__repeat_1_4__action__GoToPoint_Result __attribute__((deprecated))
#else
# define DEPRECATED__repeat_1_4__action__GoToPoint_Result __declspec(deprecated)
#endif

namespace repeat_1_4
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_Result_
{
  using Type = GoToPoint_Result_<ContainerAllocator>;

  explicit GoToPoint_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->final_x = 0.0f;
      this->final_y = 0.0f;
    }
  }

  explicit GoToPoint_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->final_x = 0.0f;
      this->final_y = 0.0f;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _final_x_type =
    float;
  _final_x_type final_x;
  using _final_y_type =
    float;
  _final_y_type final_y;

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
  Type & set__final_x(
    const float & _arg)
  {
    this->final_x = _arg;
    return *this;
  }
  Type & set__final_y(
    const float & _arg)
  {
    this->final_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    repeat_1_4::action::GoToPoint_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const repeat_1_4::action::GoToPoint_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_Result
    std::shared_ptr<repeat_1_4::action::GoToPoint_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_Result
    std::shared_ptr<repeat_1_4::action::GoToPoint_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->final_x != other.final_x) {
      return false;
    }
    if (this->final_y != other.final_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPoint_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_Result_

// alias to use template instance with default allocator
using GoToPoint_Result =
  repeat_1_4::action::GoToPoint_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace repeat_1_4


#ifndef _WIN32
# define DEPRECATED__repeat_1_4__action__GoToPoint_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__repeat_1_4__action__GoToPoint_Feedback __declspec(deprecated)
#endif

namespace repeat_1_4
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_Feedback_
{
  using Type = GoToPoint_Feedback_<ContainerAllocator>;

  explicit GoToPoint_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_x = 0.0f;
      this->current_y = 0.0f;
      this->progress = 0.0f;
    }
  }

  explicit GoToPoint_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_x = 0.0f;
      this->current_y = 0.0f;
      this->progress = 0.0f;
    }
  }

  // field types and members
  using _current_x_type =
    float;
  _current_x_type current_x;
  using _current_y_type =
    float;
  _current_y_type current_y;
  using _progress_type =
    float;
  _progress_type progress;

  // setters for named parameter idiom
  Type & set__current_x(
    const float & _arg)
  {
    this->current_x = _arg;
    return *this;
  }
  Type & set__current_y(
    const float & _arg)
  {
    this->current_y = _arg;
    return *this;
  }
  Type & set__progress(
    const float & _arg)
  {
    this->progress = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    repeat_1_4::action::GoToPoint_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const repeat_1_4::action::GoToPoint_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_Feedback
    std::shared_ptr<repeat_1_4::action::GoToPoint_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_Feedback
    std::shared_ptr<repeat_1_4::action::GoToPoint_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_Feedback_ & other) const
  {
    if (this->current_x != other.current_x) {
      return false;
    }
    if (this->current_y != other.current_y) {
      return false;
    }
    if (this->progress != other.progress) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPoint_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_Feedback_

// alias to use template instance with default allocator
using GoToPoint_Feedback =
  repeat_1_4::action::GoToPoint_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace repeat_1_4


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "repeat_1_4/action/detail/go_to_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__repeat_1_4__action__GoToPoint_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__repeat_1_4__action__GoToPoint_SendGoal_Request __declspec(deprecated)
#endif

namespace repeat_1_4
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_SendGoal_Request_
{
  using Type = GoToPoint_SendGoal_Request_<ContainerAllocator>;

  explicit GoToPoint_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GoToPoint_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    repeat_1_4::action::GoToPoint_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const repeat_1_4::action::GoToPoint_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    repeat_1_4::action::GoToPoint_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const repeat_1_4::action::GoToPoint_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_SendGoal_Request
    std::shared_ptr<repeat_1_4::action::GoToPoint_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_SendGoal_Request
    std::shared_ptr<repeat_1_4::action::GoToPoint_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPoint_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_SendGoal_Request_

// alias to use template instance with default allocator
using GoToPoint_SendGoal_Request =
  repeat_1_4::action::GoToPoint_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace repeat_1_4


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__repeat_1_4__action__GoToPoint_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__repeat_1_4__action__GoToPoint_SendGoal_Response __declspec(deprecated)
#endif

namespace repeat_1_4
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_SendGoal_Response_
{
  using Type = GoToPoint_SendGoal_Response_<ContainerAllocator>;

  explicit GoToPoint_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit GoToPoint_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    repeat_1_4::action::GoToPoint_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const repeat_1_4::action::GoToPoint_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_SendGoal_Response
    std::shared_ptr<repeat_1_4::action::GoToPoint_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_SendGoal_Response
    std::shared_ptr<repeat_1_4::action::GoToPoint_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPoint_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_SendGoal_Response_

// alias to use template instance with default allocator
using GoToPoint_SendGoal_Response =
  repeat_1_4::action::GoToPoint_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace repeat_1_4


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__repeat_1_4__action__GoToPoint_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__repeat_1_4__action__GoToPoint_SendGoal_Event __declspec(deprecated)
#endif

namespace repeat_1_4
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_SendGoal_Event_
{
  using Type = GoToPoint_SendGoal_Event_<ContainerAllocator>;

  explicit GoToPoint_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GoToPoint_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<repeat_1_4::action::GoToPoint_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<repeat_1_4::action::GoToPoint_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<repeat_1_4::action::GoToPoint_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<repeat_1_4::action::GoToPoint_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<repeat_1_4::action::GoToPoint_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<repeat_1_4::action::GoToPoint_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<repeat_1_4::action::GoToPoint_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<repeat_1_4::action::GoToPoint_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    repeat_1_4::action::GoToPoint_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const repeat_1_4::action::GoToPoint_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_SendGoal_Event
    std::shared_ptr<repeat_1_4::action::GoToPoint_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_SendGoal_Event
    std::shared_ptr<repeat_1_4::action::GoToPoint_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_SendGoal_Event_ & other) const
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
  bool operator!=(const GoToPoint_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_SendGoal_Event_

// alias to use template instance with default allocator
using GoToPoint_SendGoal_Event =
  repeat_1_4::action::GoToPoint_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace repeat_1_4

namespace repeat_1_4
{

namespace action
{

struct GoToPoint_SendGoal
{
  using Request = repeat_1_4::action::GoToPoint_SendGoal_Request;
  using Response = repeat_1_4::action::GoToPoint_SendGoal_Response;
  using Event = repeat_1_4::action::GoToPoint_SendGoal_Event;
};

}  // namespace action

}  // namespace repeat_1_4


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__repeat_1_4__action__GoToPoint_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__repeat_1_4__action__GoToPoint_GetResult_Request __declspec(deprecated)
#endif

namespace repeat_1_4
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_GetResult_Request_
{
  using Type = GoToPoint_GetResult_Request_<ContainerAllocator>;

  explicit GoToPoint_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit GoToPoint_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    repeat_1_4::action::GoToPoint_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const repeat_1_4::action::GoToPoint_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_GetResult_Request
    std::shared_ptr<repeat_1_4::action::GoToPoint_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_GetResult_Request
    std::shared_ptr<repeat_1_4::action::GoToPoint_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPoint_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_GetResult_Request_

// alias to use template instance with default allocator
using GoToPoint_GetResult_Request =
  repeat_1_4::action::GoToPoint_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace repeat_1_4


// Include directives for member types
// Member 'result'
// already included above
// #include "repeat_1_4/action/detail/go_to_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__repeat_1_4__action__GoToPoint_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__repeat_1_4__action__GoToPoint_GetResult_Response __declspec(deprecated)
#endif

namespace repeat_1_4
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_GetResult_Response_
{
  using Type = GoToPoint_GetResult_Response_<ContainerAllocator>;

  explicit GoToPoint_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit GoToPoint_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    repeat_1_4::action::GoToPoint_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const repeat_1_4::action::GoToPoint_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    repeat_1_4::action::GoToPoint_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const repeat_1_4::action::GoToPoint_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_GetResult_Response
    std::shared_ptr<repeat_1_4::action::GoToPoint_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_GetResult_Response
    std::shared_ptr<repeat_1_4::action::GoToPoint_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPoint_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_GetResult_Response_

// alias to use template instance with default allocator
using GoToPoint_GetResult_Response =
  repeat_1_4::action::GoToPoint_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace repeat_1_4


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__repeat_1_4__action__GoToPoint_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__repeat_1_4__action__GoToPoint_GetResult_Event __declspec(deprecated)
#endif

namespace repeat_1_4
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_GetResult_Event_
{
  using Type = GoToPoint_GetResult_Event_<ContainerAllocator>;

  explicit GoToPoint_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GoToPoint_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<repeat_1_4::action::GoToPoint_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<repeat_1_4::action::GoToPoint_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<repeat_1_4::action::GoToPoint_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<repeat_1_4::action::GoToPoint_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<repeat_1_4::action::GoToPoint_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<repeat_1_4::action::GoToPoint_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<repeat_1_4::action::GoToPoint_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<repeat_1_4::action::GoToPoint_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    repeat_1_4::action::GoToPoint_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const repeat_1_4::action::GoToPoint_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_GetResult_Event
    std::shared_ptr<repeat_1_4::action::GoToPoint_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_GetResult_Event
    std::shared_ptr<repeat_1_4::action::GoToPoint_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_GetResult_Event_ & other) const
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
  bool operator!=(const GoToPoint_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_GetResult_Event_

// alias to use template instance with default allocator
using GoToPoint_GetResult_Event =
  repeat_1_4::action::GoToPoint_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace repeat_1_4

namespace repeat_1_4
{

namespace action
{

struct GoToPoint_GetResult
{
  using Request = repeat_1_4::action::GoToPoint_GetResult_Request;
  using Response = repeat_1_4::action::GoToPoint_GetResult_Response;
  using Event = repeat_1_4::action::GoToPoint_GetResult_Event;
};

}  // namespace action

}  // namespace repeat_1_4


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "repeat_1_4/action/detail/go_to_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__repeat_1_4__action__GoToPoint_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__repeat_1_4__action__GoToPoint_FeedbackMessage __declspec(deprecated)
#endif

namespace repeat_1_4
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GoToPoint_FeedbackMessage_
{
  using Type = GoToPoint_FeedbackMessage_<ContainerAllocator>;

  explicit GoToPoint_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit GoToPoint_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    repeat_1_4::action::GoToPoint_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const repeat_1_4::action::GoToPoint_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    repeat_1_4::action::GoToPoint_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const repeat_1_4::action::GoToPoint_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<repeat_1_4::action::GoToPoint_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      repeat_1_4::action::GoToPoint_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<repeat_1_4::action::GoToPoint_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<repeat_1_4::action::GoToPoint_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_FeedbackMessage
    std::shared_ptr<repeat_1_4::action::GoToPoint_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__repeat_1_4__action__GoToPoint_FeedbackMessage
    std::shared_ptr<repeat_1_4::action::GoToPoint_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoToPoint_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoToPoint_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoToPoint_FeedbackMessage_

// alias to use template instance with default allocator
using GoToPoint_FeedbackMessage =
  repeat_1_4::action::GoToPoint_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace repeat_1_4

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace repeat_1_4
{

namespace action
{

struct GoToPoint
{
  /// The goal message defined in the action definition.
  using Goal = repeat_1_4::action::GoToPoint_Goal;
  /// The result message defined in the action definition.
  using Result = repeat_1_4::action::GoToPoint_Result;
  /// The feedback message defined in the action definition.
  using Feedback = repeat_1_4::action::GoToPoint_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = repeat_1_4::action::GoToPoint_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = repeat_1_4::action::GoToPoint_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = repeat_1_4::action::GoToPoint_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct GoToPoint GoToPoint;

}  // namespace action

}  // namespace repeat_1_4

#endif  // REPEAT_1_4__ACTION__DETAIL__GO_TO_POINT__STRUCT_HPP_
