// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from emse_moveit_actions:action/ReachPose.idl
// generated code does not contain a copyright notice

#ifndef EMSE_MOVEIT_ACTIONS__ACTION__DETAIL__REACH_POSE__STRUCT_H_
#define EMSE_MOVEIT_ACTIONS__ACTION__DETAIL__REACH_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in action/ReachPose in the package emse_moveit_actions.
typedef struct emse_moveit_actions__action__ReachPose_Goal
{
  geometry_msgs__msg__Pose target_pose;
} emse_moveit_actions__action__ReachPose_Goal;

// Struct for a sequence of emse_moveit_actions__action__ReachPose_Goal.
typedef struct emse_moveit_actions__action__ReachPose_Goal__Sequence
{
  emse_moveit_actions__action__ReachPose_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} emse_moveit_actions__action__ReachPose_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.h"
// Member 'trajectory_start'
#include "moveit_msgs/msg/detail/robot_state__struct.h"
// Member 'planned_trajectory'
// Member 'executed_trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.h"

/// Struct defined in action/ReachPose in the package emse_moveit_actions.
typedef struct emse_moveit_actions__action__ReachPose_Result
{
  moveit_msgs__msg__MoveItErrorCodes error_code;
  /// The full starting state of the robot at the start of the trajectory
  moveit_msgs__msg__RobotState trajectory_start;
  /// The trajectory that moved group produced for execution
  moveit_msgs__msg__RobotTrajectory planned_trajectory;
  /// The trace of the trajectory recorded during execution
  moveit_msgs__msg__RobotTrajectory executed_trajectory;
  /// The amount of time it took to complete the motion plan
  double planning_time;
} emse_moveit_actions__action__ReachPose_Result;

// Struct for a sequence of emse_moveit_actions__action__ReachPose_Result.
typedef struct emse_moveit_actions__action__ReachPose_Result__Sequence
{
  emse_moveit_actions__action__ReachPose_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} emse_moveit_actions__action__ReachPose_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ReachPose in the package emse_moveit_actions.
typedef struct emse_moveit_actions__action__ReachPose_Feedback
{
  /// The internal state that the move group action currently is in
  rosidl_runtime_c__String state;
} emse_moveit_actions__action__ReachPose_Feedback;

// Struct for a sequence of emse_moveit_actions__action__ReachPose_Feedback.
typedef struct emse_moveit_actions__action__ReachPose_Feedback__Sequence
{
  emse_moveit_actions__action__ReachPose_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} emse_moveit_actions__action__ReachPose_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "emse_moveit_actions/action/detail/reach_pose__struct.h"

/// Struct defined in action/ReachPose in the package emse_moveit_actions.
typedef struct emse_moveit_actions__action__ReachPose_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  emse_moveit_actions__action__ReachPose_Goal goal;
} emse_moveit_actions__action__ReachPose_SendGoal_Request;

// Struct for a sequence of emse_moveit_actions__action__ReachPose_SendGoal_Request.
typedef struct emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence
{
  emse_moveit_actions__action__ReachPose_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} emse_moveit_actions__action__ReachPose_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ReachPose in the package emse_moveit_actions.
typedef struct emse_moveit_actions__action__ReachPose_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} emse_moveit_actions__action__ReachPose_SendGoal_Response;

// Struct for a sequence of emse_moveit_actions__action__ReachPose_SendGoal_Response.
typedef struct emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence
{
  emse_moveit_actions__action__ReachPose_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} emse_moveit_actions__action__ReachPose_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ReachPose in the package emse_moveit_actions.
typedef struct emse_moveit_actions__action__ReachPose_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} emse_moveit_actions__action__ReachPose_GetResult_Request;

// Struct for a sequence of emse_moveit_actions__action__ReachPose_GetResult_Request.
typedef struct emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence
{
  emse_moveit_actions__action__ReachPose_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} emse_moveit_actions__action__ReachPose_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__struct.h"

/// Struct defined in action/ReachPose in the package emse_moveit_actions.
typedef struct emse_moveit_actions__action__ReachPose_GetResult_Response
{
  int8_t status;
  emse_moveit_actions__action__ReachPose_Result result;
} emse_moveit_actions__action__ReachPose_GetResult_Response;

// Struct for a sequence of emse_moveit_actions__action__ReachPose_GetResult_Response.
typedef struct emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence
{
  emse_moveit_actions__action__ReachPose_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} emse_moveit_actions__action__ReachPose_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__struct.h"

/// Struct defined in action/ReachPose in the package emse_moveit_actions.
typedef struct emse_moveit_actions__action__ReachPose_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  emse_moveit_actions__action__ReachPose_Feedback feedback;
} emse_moveit_actions__action__ReachPose_FeedbackMessage;

// Struct for a sequence of emse_moveit_actions__action__ReachPose_FeedbackMessage.
typedef struct emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence
{
  emse_moveit_actions__action__ReachPose_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} emse_moveit_actions__action__ReachPose_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EMSE_MOVEIT_ACTIONS__ACTION__DETAIL__REACH_POSE__STRUCT_H_
