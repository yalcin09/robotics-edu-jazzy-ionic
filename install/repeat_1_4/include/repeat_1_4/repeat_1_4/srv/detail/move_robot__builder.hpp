// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from repeat_1_4:srv/MoveRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "repeat_1_4/srv/move_robot.hpp"


#ifndef REPEAT_1_4__SRV__DETAIL__MOVE_ROBOT__BUILDER_HPP_
#define REPEAT_1_4__SRV__DETAIL__MOVE_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "repeat_1_4/srv/detail/move_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace repeat_1_4
{

namespace srv
{

namespace builder
{

class Init_MoveRobot_Request_speed
{
public:
  explicit Init_MoveRobot_Request_speed(::repeat_1_4::srv::MoveRobot_Request & msg)
  : msg_(msg)
  {}
  ::repeat_1_4::srv::MoveRobot_Request speed(::repeat_1_4::srv::MoveRobot_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::repeat_1_4::srv::MoveRobot_Request msg_;
};

class Init_MoveRobot_Request_target_y
{
public:
  explicit Init_MoveRobot_Request_target_y(::repeat_1_4::srv::MoveRobot_Request & msg)
  : msg_(msg)
  {}
  Init_MoveRobot_Request_speed target_y(::repeat_1_4::srv::MoveRobot_Request::_target_y_type arg)
  {
    msg_.target_y = std::move(arg);
    return Init_MoveRobot_Request_speed(msg_);
  }

private:
  ::repeat_1_4::srv::MoveRobot_Request msg_;
};

class Init_MoveRobot_Request_target_x
{
public:
  Init_MoveRobot_Request_target_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_Request_target_y target_x(::repeat_1_4::srv::MoveRobot_Request::_target_x_type arg)
  {
    msg_.target_x = std::move(arg);
    return Init_MoveRobot_Request_target_y(msg_);
  }

private:
  ::repeat_1_4::srv::MoveRobot_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::repeat_1_4::srv::MoveRobot_Request>()
{
  return repeat_1_4::srv::builder::Init_MoveRobot_Request_target_x();
}

}  // namespace repeat_1_4


namespace repeat_1_4
{

namespace srv
{

namespace builder
{

class Init_MoveRobot_Response_distance
{
public:
  explicit Init_MoveRobot_Response_distance(::repeat_1_4::srv::MoveRobot_Response & msg)
  : msg_(msg)
  {}
  ::repeat_1_4::srv::MoveRobot_Response distance(::repeat_1_4::srv::MoveRobot_Response::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::repeat_1_4::srv::MoveRobot_Response msg_;
};

class Init_MoveRobot_Response_message
{
public:
  explicit Init_MoveRobot_Response_message(::repeat_1_4::srv::MoveRobot_Response & msg)
  : msg_(msg)
  {}
  Init_MoveRobot_Response_distance message(::repeat_1_4::srv::MoveRobot_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_MoveRobot_Response_distance(msg_);
  }

private:
  ::repeat_1_4::srv::MoveRobot_Response msg_;
};

class Init_MoveRobot_Response_success
{
public:
  Init_MoveRobot_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_Response_message success(::repeat_1_4::srv::MoveRobot_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveRobot_Response_message(msg_);
  }

private:
  ::repeat_1_4::srv::MoveRobot_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::repeat_1_4::srv::MoveRobot_Response>()
{
  return repeat_1_4::srv::builder::Init_MoveRobot_Response_success();
}

}  // namespace repeat_1_4


namespace repeat_1_4
{

namespace srv
{

namespace builder
{

class Init_MoveRobot_Event_response
{
public:
  explicit Init_MoveRobot_Event_response(::repeat_1_4::srv::MoveRobot_Event & msg)
  : msg_(msg)
  {}
  ::repeat_1_4::srv::MoveRobot_Event response(::repeat_1_4::srv::MoveRobot_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::repeat_1_4::srv::MoveRobot_Event msg_;
};

class Init_MoveRobot_Event_request
{
public:
  explicit Init_MoveRobot_Event_request(::repeat_1_4::srv::MoveRobot_Event & msg)
  : msg_(msg)
  {}
  Init_MoveRobot_Event_response request(::repeat_1_4::srv::MoveRobot_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveRobot_Event_response(msg_);
  }

private:
  ::repeat_1_4::srv::MoveRobot_Event msg_;
};

class Init_MoveRobot_Event_info
{
public:
  Init_MoveRobot_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRobot_Event_request info(::repeat_1_4::srv::MoveRobot_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveRobot_Event_request(msg_);
  }

private:
  ::repeat_1_4::srv::MoveRobot_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::repeat_1_4::srv::MoveRobot_Event>()
{
  return repeat_1_4::srv::builder::Init_MoveRobot_Event_info();
}

}  // namespace repeat_1_4

#endif  // REPEAT_1_4__SRV__DETAIL__MOVE_ROBOT__BUILDER_HPP_
