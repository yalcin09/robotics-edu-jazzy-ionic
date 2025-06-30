// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from repeat_1_4:action/GoToPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "repeat_1_4/action/go_to_point.hpp"


#ifndef REPEAT_1_4__ACTION__DETAIL__GO_TO_POINT__BUILDER_HPP_
#define REPEAT_1_4__ACTION__DETAIL__GO_TO_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "repeat_1_4/action/detail/go_to_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace repeat_1_4
{

namespace action
{

namespace builder
{

class Init_GoToPoint_Goal_target_y
{
public:
  explicit Init_GoToPoint_Goal_target_y(::repeat_1_4::action::GoToPoint_Goal & msg)
  : msg_(msg)
  {}
  ::repeat_1_4::action::GoToPoint_Goal target_y(::repeat_1_4::action::GoToPoint_Goal::_target_y_type arg)
  {
    msg_.target_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_Goal msg_;
};

class Init_GoToPoint_Goal_target_x
{
public:
  Init_GoToPoint_Goal_target_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_Goal_target_y target_x(::repeat_1_4::action::GoToPoint_Goal::_target_x_type arg)
  {
    msg_.target_x = std::move(arg);
    return Init_GoToPoint_Goal_target_y(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::repeat_1_4::action::GoToPoint_Goal>()
{
  return repeat_1_4::action::builder::Init_GoToPoint_Goal_target_x();
}

}  // namespace repeat_1_4


namespace repeat_1_4
{

namespace action
{

namespace builder
{

class Init_GoToPoint_Result_final_y
{
public:
  explicit Init_GoToPoint_Result_final_y(::repeat_1_4::action::GoToPoint_Result & msg)
  : msg_(msg)
  {}
  ::repeat_1_4::action::GoToPoint_Result final_y(::repeat_1_4::action::GoToPoint_Result::_final_y_type arg)
  {
    msg_.final_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_Result msg_;
};

class Init_GoToPoint_Result_final_x
{
public:
  explicit Init_GoToPoint_Result_final_x(::repeat_1_4::action::GoToPoint_Result & msg)
  : msg_(msg)
  {}
  Init_GoToPoint_Result_final_y final_x(::repeat_1_4::action::GoToPoint_Result::_final_x_type arg)
  {
    msg_.final_x = std::move(arg);
    return Init_GoToPoint_Result_final_y(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_Result msg_;
};

class Init_GoToPoint_Result_message
{
public:
  explicit Init_GoToPoint_Result_message(::repeat_1_4::action::GoToPoint_Result & msg)
  : msg_(msg)
  {}
  Init_GoToPoint_Result_final_x message(::repeat_1_4::action::GoToPoint_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_GoToPoint_Result_final_x(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_Result msg_;
};

class Init_GoToPoint_Result_success
{
public:
  Init_GoToPoint_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_Result_message success(::repeat_1_4::action::GoToPoint_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GoToPoint_Result_message(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::repeat_1_4::action::GoToPoint_Result>()
{
  return repeat_1_4::action::builder::Init_GoToPoint_Result_success();
}

}  // namespace repeat_1_4


namespace repeat_1_4
{

namespace action
{

namespace builder
{

class Init_GoToPoint_Feedback_progress
{
public:
  explicit Init_GoToPoint_Feedback_progress(::repeat_1_4::action::GoToPoint_Feedback & msg)
  : msg_(msg)
  {}
  ::repeat_1_4::action::GoToPoint_Feedback progress(::repeat_1_4::action::GoToPoint_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_Feedback msg_;
};

class Init_GoToPoint_Feedback_current_y
{
public:
  explicit Init_GoToPoint_Feedback_current_y(::repeat_1_4::action::GoToPoint_Feedback & msg)
  : msg_(msg)
  {}
  Init_GoToPoint_Feedback_progress current_y(::repeat_1_4::action::GoToPoint_Feedback::_current_y_type arg)
  {
    msg_.current_y = std::move(arg);
    return Init_GoToPoint_Feedback_progress(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_Feedback msg_;
};

class Init_GoToPoint_Feedback_current_x
{
public:
  Init_GoToPoint_Feedback_current_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_Feedback_current_y current_x(::repeat_1_4::action::GoToPoint_Feedback::_current_x_type arg)
  {
    msg_.current_x = std::move(arg);
    return Init_GoToPoint_Feedback_current_y(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::repeat_1_4::action::GoToPoint_Feedback>()
{
  return repeat_1_4::action::builder::Init_GoToPoint_Feedback_current_x();
}

}  // namespace repeat_1_4


namespace repeat_1_4
{

namespace action
{

namespace builder
{

class Init_GoToPoint_SendGoal_Request_goal
{
public:
  explicit Init_GoToPoint_SendGoal_Request_goal(::repeat_1_4::action::GoToPoint_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::repeat_1_4::action::GoToPoint_SendGoal_Request goal(::repeat_1_4::action::GoToPoint_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_SendGoal_Request msg_;
};

class Init_GoToPoint_SendGoal_Request_goal_id
{
public:
  Init_GoToPoint_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_SendGoal_Request_goal goal_id(::repeat_1_4::action::GoToPoint_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoToPoint_SendGoal_Request_goal(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::repeat_1_4::action::GoToPoint_SendGoal_Request>()
{
  return repeat_1_4::action::builder::Init_GoToPoint_SendGoal_Request_goal_id();
}

}  // namespace repeat_1_4


namespace repeat_1_4
{

namespace action
{

namespace builder
{

class Init_GoToPoint_SendGoal_Response_stamp
{
public:
  explicit Init_GoToPoint_SendGoal_Response_stamp(::repeat_1_4::action::GoToPoint_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::repeat_1_4::action::GoToPoint_SendGoal_Response stamp(::repeat_1_4::action::GoToPoint_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_SendGoal_Response msg_;
};

class Init_GoToPoint_SendGoal_Response_accepted
{
public:
  Init_GoToPoint_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_SendGoal_Response_stamp accepted(::repeat_1_4::action::GoToPoint_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GoToPoint_SendGoal_Response_stamp(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::repeat_1_4::action::GoToPoint_SendGoal_Response>()
{
  return repeat_1_4::action::builder::Init_GoToPoint_SendGoal_Response_accepted();
}

}  // namespace repeat_1_4


namespace repeat_1_4
{

namespace action
{

namespace builder
{

class Init_GoToPoint_SendGoal_Event_response
{
public:
  explicit Init_GoToPoint_SendGoal_Event_response(::repeat_1_4::action::GoToPoint_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::repeat_1_4::action::GoToPoint_SendGoal_Event response(::repeat_1_4::action::GoToPoint_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_SendGoal_Event msg_;
};

class Init_GoToPoint_SendGoal_Event_request
{
public:
  explicit Init_GoToPoint_SendGoal_Event_request(::repeat_1_4::action::GoToPoint_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_GoToPoint_SendGoal_Event_response request(::repeat_1_4::action::GoToPoint_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GoToPoint_SendGoal_Event_response(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_SendGoal_Event msg_;
};

class Init_GoToPoint_SendGoal_Event_info
{
public:
  Init_GoToPoint_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_SendGoal_Event_request info(::repeat_1_4::action::GoToPoint_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GoToPoint_SendGoal_Event_request(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::repeat_1_4::action::GoToPoint_SendGoal_Event>()
{
  return repeat_1_4::action::builder::Init_GoToPoint_SendGoal_Event_info();
}

}  // namespace repeat_1_4


namespace repeat_1_4
{

namespace action
{

namespace builder
{

class Init_GoToPoint_GetResult_Request_goal_id
{
public:
  Init_GoToPoint_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::repeat_1_4::action::GoToPoint_GetResult_Request goal_id(::repeat_1_4::action::GoToPoint_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::repeat_1_4::action::GoToPoint_GetResult_Request>()
{
  return repeat_1_4::action::builder::Init_GoToPoint_GetResult_Request_goal_id();
}

}  // namespace repeat_1_4


namespace repeat_1_4
{

namespace action
{

namespace builder
{

class Init_GoToPoint_GetResult_Response_result
{
public:
  explicit Init_GoToPoint_GetResult_Response_result(::repeat_1_4::action::GoToPoint_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::repeat_1_4::action::GoToPoint_GetResult_Response result(::repeat_1_4::action::GoToPoint_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_GetResult_Response msg_;
};

class Init_GoToPoint_GetResult_Response_status
{
public:
  Init_GoToPoint_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_GetResult_Response_result status(::repeat_1_4::action::GoToPoint_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GoToPoint_GetResult_Response_result(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::repeat_1_4::action::GoToPoint_GetResult_Response>()
{
  return repeat_1_4::action::builder::Init_GoToPoint_GetResult_Response_status();
}

}  // namespace repeat_1_4


namespace repeat_1_4
{

namespace action
{

namespace builder
{

class Init_GoToPoint_GetResult_Event_response
{
public:
  explicit Init_GoToPoint_GetResult_Event_response(::repeat_1_4::action::GoToPoint_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::repeat_1_4::action::GoToPoint_GetResult_Event response(::repeat_1_4::action::GoToPoint_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_GetResult_Event msg_;
};

class Init_GoToPoint_GetResult_Event_request
{
public:
  explicit Init_GoToPoint_GetResult_Event_request(::repeat_1_4::action::GoToPoint_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_GoToPoint_GetResult_Event_response request(::repeat_1_4::action::GoToPoint_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GoToPoint_GetResult_Event_response(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_GetResult_Event msg_;
};

class Init_GoToPoint_GetResult_Event_info
{
public:
  Init_GoToPoint_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_GetResult_Event_request info(::repeat_1_4::action::GoToPoint_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GoToPoint_GetResult_Event_request(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::repeat_1_4::action::GoToPoint_GetResult_Event>()
{
  return repeat_1_4::action::builder::Init_GoToPoint_GetResult_Event_info();
}

}  // namespace repeat_1_4


namespace repeat_1_4
{

namespace action
{

namespace builder
{

class Init_GoToPoint_FeedbackMessage_feedback
{
public:
  explicit Init_GoToPoint_FeedbackMessage_feedback(::repeat_1_4::action::GoToPoint_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::repeat_1_4::action::GoToPoint_FeedbackMessage feedback(::repeat_1_4::action::GoToPoint_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_FeedbackMessage msg_;
};

class Init_GoToPoint_FeedbackMessage_goal_id
{
public:
  Init_GoToPoint_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToPoint_FeedbackMessage_feedback goal_id(::repeat_1_4::action::GoToPoint_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoToPoint_FeedbackMessage_feedback(msg_);
  }

private:
  ::repeat_1_4::action::GoToPoint_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::repeat_1_4::action::GoToPoint_FeedbackMessage>()
{
  return repeat_1_4::action::builder::Init_GoToPoint_FeedbackMessage_goal_id();
}

}  // namespace repeat_1_4

#endif  // REPEAT_1_4__ACTION__DETAIL__GO_TO_POINT__BUILDER_HPP_
