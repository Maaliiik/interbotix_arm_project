// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from emse_moveit_actions:action/ReachPose.idl
// generated code does not contain a copyright notice

#ifndef EMSE_MOVEIT_ACTIONS__ACTION__DETAIL__REACH_POSE__TRAITS_HPP_
#define EMSE_MOVEIT_ACTIONS__ACTION__DETAIL__REACH_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "emse_moveit_actions/action/detail/reach_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace emse_moveit_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const ReachPose_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_pose
  {
    out << "target_pose: ";
    to_flow_style_yaml(msg.target_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReachPose_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pose:\n";
    to_block_style_yaml(msg.target_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReachPose_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace emse_moveit_actions

namespace rosidl_generator_traits
{

[[deprecated("use emse_moveit_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const emse_moveit_actions::action::ReachPose_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  emse_moveit_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use emse_moveit_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const emse_moveit_actions::action::ReachPose_Goal & msg)
{
  return emse_moveit_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<emse_moveit_actions::action::ReachPose_Goal>()
{
  return "emse_moveit_actions::action::ReachPose_Goal";
}

template<>
inline const char * name<emse_moveit_actions::action::ReachPose_Goal>()
{
  return "emse_moveit_actions/action/ReachPose_Goal";
}

template<>
struct has_fixed_size<emse_moveit_actions::action::ReachPose_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<emse_moveit_actions::action::ReachPose_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<emse_moveit_actions::action::ReachPose_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__traits.hpp"
// Member 'trajectory_start'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'planned_trajectory'
// Member 'executed_trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__traits.hpp"

namespace emse_moveit_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const ReachPose_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_code
  {
    out << "error_code: ";
    to_flow_style_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: trajectory_start
  {
    out << "trajectory_start: ";
    to_flow_style_yaml(msg.trajectory_start, out);
    out << ", ";
  }

  // member: planned_trajectory
  {
    out << "planned_trajectory: ";
    to_flow_style_yaml(msg.planned_trajectory, out);
    out << ", ";
  }

  // member: executed_trajectory
  {
    out << "executed_trajectory: ";
    to_flow_style_yaml(msg.executed_trajectory, out);
    out << ", ";
  }

  // member: planning_time
  {
    out << "planning_time: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReachPose_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code:\n";
    to_block_style_yaml(msg.error_code, out, indentation + 2);
  }

  // member: trajectory_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_start:\n";
    to_block_style_yaml(msg.trajectory_start, out, indentation + 2);
  }

  // member: planned_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planned_trajectory:\n";
    to_block_style_yaml(msg.planned_trajectory, out, indentation + 2);
  }

  // member: executed_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "executed_trajectory:\n";
    to_block_style_yaml(msg.executed_trajectory, out, indentation + 2);
  }

  // member: planning_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_time: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReachPose_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace emse_moveit_actions

namespace rosidl_generator_traits
{

[[deprecated("use emse_moveit_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const emse_moveit_actions::action::ReachPose_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  emse_moveit_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use emse_moveit_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const emse_moveit_actions::action::ReachPose_Result & msg)
{
  return emse_moveit_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<emse_moveit_actions::action::ReachPose_Result>()
{
  return "emse_moveit_actions::action::ReachPose_Result";
}

template<>
inline const char * name<emse_moveit_actions::action::ReachPose_Result>()
{
  return "emse_moveit_actions/action/ReachPose_Result";
}

template<>
struct has_fixed_size<emse_moveit_actions::action::ReachPose_Result>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::MoveItErrorCodes>::value && has_fixed_size<moveit_msgs::msg::RobotState>::value && has_fixed_size<moveit_msgs::msg::RobotTrajectory>::value> {};

template<>
struct has_bounded_size<emse_moveit_actions::action::ReachPose_Result>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::MoveItErrorCodes>::value && has_bounded_size<moveit_msgs::msg::RobotState>::value && has_bounded_size<moveit_msgs::msg::RobotTrajectory>::value> {};

template<>
struct is_message<emse_moveit_actions::action::ReachPose_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace emse_moveit_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const ReachPose_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReachPose_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReachPose_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace emse_moveit_actions

namespace rosidl_generator_traits
{

[[deprecated("use emse_moveit_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const emse_moveit_actions::action::ReachPose_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  emse_moveit_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use emse_moveit_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const emse_moveit_actions::action::ReachPose_Feedback & msg)
{
  return emse_moveit_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<emse_moveit_actions::action::ReachPose_Feedback>()
{
  return "emse_moveit_actions::action::ReachPose_Feedback";
}

template<>
inline const char * name<emse_moveit_actions::action::ReachPose_Feedback>()
{
  return "emse_moveit_actions/action/ReachPose_Feedback";
}

template<>
struct has_fixed_size<emse_moveit_actions::action::ReachPose_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<emse_moveit_actions::action::ReachPose_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<emse_moveit_actions::action::ReachPose_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "emse_moveit_actions/action/detail/reach_pose__traits.hpp"

namespace emse_moveit_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const ReachPose_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReachPose_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReachPose_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace emse_moveit_actions

namespace rosidl_generator_traits
{

[[deprecated("use emse_moveit_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const emse_moveit_actions::action::ReachPose_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  emse_moveit_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use emse_moveit_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const emse_moveit_actions::action::ReachPose_SendGoal_Request & msg)
{
  return emse_moveit_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<emse_moveit_actions::action::ReachPose_SendGoal_Request>()
{
  return "emse_moveit_actions::action::ReachPose_SendGoal_Request";
}

template<>
inline const char * name<emse_moveit_actions::action::ReachPose_SendGoal_Request>()
{
  return "emse_moveit_actions/action/ReachPose_SendGoal_Request";
}

template<>
struct has_fixed_size<emse_moveit_actions::action::ReachPose_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<emse_moveit_actions::action::ReachPose_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<emse_moveit_actions::action::ReachPose_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<emse_moveit_actions::action::ReachPose_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<emse_moveit_actions::action::ReachPose_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace emse_moveit_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const ReachPose_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReachPose_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReachPose_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace emse_moveit_actions

namespace rosidl_generator_traits
{

[[deprecated("use emse_moveit_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const emse_moveit_actions::action::ReachPose_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  emse_moveit_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use emse_moveit_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const emse_moveit_actions::action::ReachPose_SendGoal_Response & msg)
{
  return emse_moveit_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<emse_moveit_actions::action::ReachPose_SendGoal_Response>()
{
  return "emse_moveit_actions::action::ReachPose_SendGoal_Response";
}

template<>
inline const char * name<emse_moveit_actions::action::ReachPose_SendGoal_Response>()
{
  return "emse_moveit_actions/action/ReachPose_SendGoal_Response";
}

template<>
struct has_fixed_size<emse_moveit_actions::action::ReachPose_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<emse_moveit_actions::action::ReachPose_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<emse_moveit_actions::action::ReachPose_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<emse_moveit_actions::action::ReachPose_SendGoal>()
{
  return "emse_moveit_actions::action::ReachPose_SendGoal";
}

template<>
inline const char * name<emse_moveit_actions::action::ReachPose_SendGoal>()
{
  return "emse_moveit_actions/action/ReachPose_SendGoal";
}

template<>
struct has_fixed_size<emse_moveit_actions::action::ReachPose_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<emse_moveit_actions::action::ReachPose_SendGoal_Request>::value &&
    has_fixed_size<emse_moveit_actions::action::ReachPose_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<emse_moveit_actions::action::ReachPose_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<emse_moveit_actions::action::ReachPose_SendGoal_Request>::value &&
    has_bounded_size<emse_moveit_actions::action::ReachPose_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<emse_moveit_actions::action::ReachPose_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<emse_moveit_actions::action::ReachPose_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<emse_moveit_actions::action::ReachPose_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace emse_moveit_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const ReachPose_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReachPose_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReachPose_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace emse_moveit_actions

namespace rosidl_generator_traits
{

[[deprecated("use emse_moveit_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const emse_moveit_actions::action::ReachPose_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  emse_moveit_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use emse_moveit_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const emse_moveit_actions::action::ReachPose_GetResult_Request & msg)
{
  return emse_moveit_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<emse_moveit_actions::action::ReachPose_GetResult_Request>()
{
  return "emse_moveit_actions::action::ReachPose_GetResult_Request";
}

template<>
inline const char * name<emse_moveit_actions::action::ReachPose_GetResult_Request>()
{
  return "emse_moveit_actions/action/ReachPose_GetResult_Request";
}

template<>
struct has_fixed_size<emse_moveit_actions::action::ReachPose_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<emse_moveit_actions::action::ReachPose_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<emse_moveit_actions::action::ReachPose_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__traits.hpp"

namespace emse_moveit_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const ReachPose_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReachPose_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReachPose_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace emse_moveit_actions

namespace rosidl_generator_traits
{

[[deprecated("use emse_moveit_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const emse_moveit_actions::action::ReachPose_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  emse_moveit_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use emse_moveit_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const emse_moveit_actions::action::ReachPose_GetResult_Response & msg)
{
  return emse_moveit_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<emse_moveit_actions::action::ReachPose_GetResult_Response>()
{
  return "emse_moveit_actions::action::ReachPose_GetResult_Response";
}

template<>
inline const char * name<emse_moveit_actions::action::ReachPose_GetResult_Response>()
{
  return "emse_moveit_actions/action/ReachPose_GetResult_Response";
}

template<>
struct has_fixed_size<emse_moveit_actions::action::ReachPose_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<emse_moveit_actions::action::ReachPose_Result>::value> {};

template<>
struct has_bounded_size<emse_moveit_actions::action::ReachPose_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<emse_moveit_actions::action::ReachPose_Result>::value> {};

template<>
struct is_message<emse_moveit_actions::action::ReachPose_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<emse_moveit_actions::action::ReachPose_GetResult>()
{
  return "emse_moveit_actions::action::ReachPose_GetResult";
}

template<>
inline const char * name<emse_moveit_actions::action::ReachPose_GetResult>()
{
  return "emse_moveit_actions/action/ReachPose_GetResult";
}

template<>
struct has_fixed_size<emse_moveit_actions::action::ReachPose_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<emse_moveit_actions::action::ReachPose_GetResult_Request>::value &&
    has_fixed_size<emse_moveit_actions::action::ReachPose_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<emse_moveit_actions::action::ReachPose_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<emse_moveit_actions::action::ReachPose_GetResult_Request>::value &&
    has_bounded_size<emse_moveit_actions::action::ReachPose_GetResult_Response>::value
  >
{
};

template<>
struct is_service<emse_moveit_actions::action::ReachPose_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<emse_moveit_actions::action::ReachPose_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<emse_moveit_actions::action::ReachPose_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__traits.hpp"

namespace emse_moveit_actions
{

namespace action
{

inline void to_flow_style_yaml(
  const ReachPose_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReachPose_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReachPose_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace emse_moveit_actions

namespace rosidl_generator_traits
{

[[deprecated("use emse_moveit_actions::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const emse_moveit_actions::action::ReachPose_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  emse_moveit_actions::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use emse_moveit_actions::action::to_yaml() instead")]]
inline std::string to_yaml(const emse_moveit_actions::action::ReachPose_FeedbackMessage & msg)
{
  return emse_moveit_actions::action::to_yaml(msg);
}

template<>
inline const char * data_type<emse_moveit_actions::action::ReachPose_FeedbackMessage>()
{
  return "emse_moveit_actions::action::ReachPose_FeedbackMessage";
}

template<>
inline const char * name<emse_moveit_actions::action::ReachPose_FeedbackMessage>()
{
  return "emse_moveit_actions/action/ReachPose_FeedbackMessage";
}

template<>
struct has_fixed_size<emse_moveit_actions::action::ReachPose_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<emse_moveit_actions::action::ReachPose_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<emse_moveit_actions::action::ReachPose_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<emse_moveit_actions::action::ReachPose_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<emse_moveit_actions::action::ReachPose_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<emse_moveit_actions::action::ReachPose>
  : std::true_type
{
};

template<>
struct is_action_goal<emse_moveit_actions::action::ReachPose_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<emse_moveit_actions::action::ReachPose_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<emse_moveit_actions::action::ReachPose_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // EMSE_MOVEIT_ACTIONS__ACTION__DETAIL__REACH_POSE__TRAITS_HPP_
