// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from emse_moveit_actions:action/ReachPose.idl
// generated code does not contain a copyright notice

#ifndef EMSE_MOVEIT_ACTIONS__ACTION__DETAIL__REACH_POSE__BUILDER_HPP_
#define EMSE_MOVEIT_ACTIONS__ACTION__DETAIL__REACH_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "emse_moveit_actions/action/detail/reach_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace emse_moveit_actions
{

namespace action
{

namespace builder
{

class Init_ReachPose_Goal_target_pose
{
public:
  Init_ReachPose_Goal_target_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::emse_moveit_actions::action::ReachPose_Goal target_pose(::emse_moveit_actions::action::ReachPose_Goal::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::emse_moveit_actions::action::ReachPose_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::emse_moveit_actions::action::ReachPose_Goal>()
{
  return emse_moveit_actions::action::builder::Init_ReachPose_Goal_target_pose();
}

}  // namespace emse_moveit_actions


namespace emse_moveit_actions
{

namespace action
{

namespace builder
{

class Init_ReachPose_Result_planning_time
{
public:
  explicit Init_ReachPose_Result_planning_time(::emse_moveit_actions::action::ReachPose_Result & msg)
  : msg_(msg)
  {}
  ::emse_moveit_actions::action::ReachPose_Result planning_time(::emse_moveit_actions::action::ReachPose_Result::_planning_time_type arg)
  {
    msg_.planning_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::emse_moveit_actions::action::ReachPose_Result msg_;
};

class Init_ReachPose_Result_executed_trajectory
{
public:
  explicit Init_ReachPose_Result_executed_trajectory(::emse_moveit_actions::action::ReachPose_Result & msg)
  : msg_(msg)
  {}
  Init_ReachPose_Result_planning_time executed_trajectory(::emse_moveit_actions::action::ReachPose_Result::_executed_trajectory_type arg)
  {
    msg_.executed_trajectory = std::move(arg);
    return Init_ReachPose_Result_planning_time(msg_);
  }

private:
  ::emse_moveit_actions::action::ReachPose_Result msg_;
};

class Init_ReachPose_Result_planned_trajectory
{
public:
  explicit Init_ReachPose_Result_planned_trajectory(::emse_moveit_actions::action::ReachPose_Result & msg)
  : msg_(msg)
  {}
  Init_ReachPose_Result_executed_trajectory planned_trajectory(::emse_moveit_actions::action::ReachPose_Result::_planned_trajectory_type arg)
  {
    msg_.planned_trajectory = std::move(arg);
    return Init_ReachPose_Result_executed_trajectory(msg_);
  }

private:
  ::emse_moveit_actions::action::ReachPose_Result msg_;
};

class Init_ReachPose_Result_trajectory_start
{
public:
  explicit Init_ReachPose_Result_trajectory_start(::emse_moveit_actions::action::ReachPose_Result & msg)
  : msg_(msg)
  {}
  Init_ReachPose_Result_planned_trajectory trajectory_start(::emse_moveit_actions::action::ReachPose_Result::_trajectory_start_type arg)
  {
    msg_.trajectory_start = std::move(arg);
    return Init_ReachPose_Result_planned_trajectory(msg_);
  }

private:
  ::emse_moveit_actions::action::ReachPose_Result msg_;
};

class Init_ReachPose_Result_error_code
{
public:
  Init_ReachPose_Result_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachPose_Result_trajectory_start error_code(::emse_moveit_actions::action::ReachPose_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_ReachPose_Result_trajectory_start(msg_);
  }

private:
  ::emse_moveit_actions::action::ReachPose_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::emse_moveit_actions::action::ReachPose_Result>()
{
  return emse_moveit_actions::action::builder::Init_ReachPose_Result_error_code();
}

}  // namespace emse_moveit_actions


namespace emse_moveit_actions
{

namespace action
{

namespace builder
{

class Init_ReachPose_Feedback_state
{
public:
  Init_ReachPose_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::emse_moveit_actions::action::ReachPose_Feedback state(::emse_moveit_actions::action::ReachPose_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::emse_moveit_actions::action::ReachPose_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::emse_moveit_actions::action::ReachPose_Feedback>()
{
  return emse_moveit_actions::action::builder::Init_ReachPose_Feedback_state();
}

}  // namespace emse_moveit_actions


namespace emse_moveit_actions
{

namespace action
{

namespace builder
{

class Init_ReachPose_SendGoal_Request_goal
{
public:
  explicit Init_ReachPose_SendGoal_Request_goal(::emse_moveit_actions::action::ReachPose_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::emse_moveit_actions::action::ReachPose_SendGoal_Request goal(::emse_moveit_actions::action::ReachPose_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::emse_moveit_actions::action::ReachPose_SendGoal_Request msg_;
};

class Init_ReachPose_SendGoal_Request_goal_id
{
public:
  Init_ReachPose_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachPose_SendGoal_Request_goal goal_id(::emse_moveit_actions::action::ReachPose_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ReachPose_SendGoal_Request_goal(msg_);
  }

private:
  ::emse_moveit_actions::action::ReachPose_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::emse_moveit_actions::action::ReachPose_SendGoal_Request>()
{
  return emse_moveit_actions::action::builder::Init_ReachPose_SendGoal_Request_goal_id();
}

}  // namespace emse_moveit_actions


namespace emse_moveit_actions
{

namespace action
{

namespace builder
{

class Init_ReachPose_SendGoal_Response_stamp
{
public:
  explicit Init_ReachPose_SendGoal_Response_stamp(::emse_moveit_actions::action::ReachPose_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::emse_moveit_actions::action::ReachPose_SendGoal_Response stamp(::emse_moveit_actions::action::ReachPose_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::emse_moveit_actions::action::ReachPose_SendGoal_Response msg_;
};

class Init_ReachPose_SendGoal_Response_accepted
{
public:
  Init_ReachPose_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachPose_SendGoal_Response_stamp accepted(::emse_moveit_actions::action::ReachPose_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ReachPose_SendGoal_Response_stamp(msg_);
  }

private:
  ::emse_moveit_actions::action::ReachPose_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::emse_moveit_actions::action::ReachPose_SendGoal_Response>()
{
  return emse_moveit_actions::action::builder::Init_ReachPose_SendGoal_Response_accepted();
}

}  // namespace emse_moveit_actions


namespace emse_moveit_actions
{

namespace action
{

namespace builder
{

class Init_ReachPose_GetResult_Request_goal_id
{
public:
  Init_ReachPose_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::emse_moveit_actions::action::ReachPose_GetResult_Request goal_id(::emse_moveit_actions::action::ReachPose_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::emse_moveit_actions::action::ReachPose_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::emse_moveit_actions::action::ReachPose_GetResult_Request>()
{
  return emse_moveit_actions::action::builder::Init_ReachPose_GetResult_Request_goal_id();
}

}  // namespace emse_moveit_actions


namespace emse_moveit_actions
{

namespace action
{

namespace builder
{

class Init_ReachPose_GetResult_Response_result
{
public:
  explicit Init_ReachPose_GetResult_Response_result(::emse_moveit_actions::action::ReachPose_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::emse_moveit_actions::action::ReachPose_GetResult_Response result(::emse_moveit_actions::action::ReachPose_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::emse_moveit_actions::action::ReachPose_GetResult_Response msg_;
};

class Init_ReachPose_GetResult_Response_status
{
public:
  Init_ReachPose_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachPose_GetResult_Response_result status(::emse_moveit_actions::action::ReachPose_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ReachPose_GetResult_Response_result(msg_);
  }

private:
  ::emse_moveit_actions::action::ReachPose_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::emse_moveit_actions::action::ReachPose_GetResult_Response>()
{
  return emse_moveit_actions::action::builder::Init_ReachPose_GetResult_Response_status();
}

}  // namespace emse_moveit_actions


namespace emse_moveit_actions
{

namespace action
{

namespace builder
{

class Init_ReachPose_FeedbackMessage_feedback
{
public:
  explicit Init_ReachPose_FeedbackMessage_feedback(::emse_moveit_actions::action::ReachPose_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::emse_moveit_actions::action::ReachPose_FeedbackMessage feedback(::emse_moveit_actions::action::ReachPose_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::emse_moveit_actions::action::ReachPose_FeedbackMessage msg_;
};

class Init_ReachPose_FeedbackMessage_goal_id
{
public:
  Init_ReachPose_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReachPose_FeedbackMessage_feedback goal_id(::emse_moveit_actions::action::ReachPose_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ReachPose_FeedbackMessage_feedback(msg_);
  }

private:
  ::emse_moveit_actions::action::ReachPose_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::emse_moveit_actions::action::ReachPose_FeedbackMessage>()
{
  return emse_moveit_actions::action::builder::Init_ReachPose_FeedbackMessage_goal_id();
}

}  // namespace emse_moveit_actions

#endif  // EMSE_MOVEIT_ACTIONS__ACTION__DETAIL__REACH_POSE__BUILDER_HPP_
