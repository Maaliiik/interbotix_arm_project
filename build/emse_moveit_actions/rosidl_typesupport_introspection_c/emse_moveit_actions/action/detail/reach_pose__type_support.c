// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from emse_moveit_actions:action/ReachPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "emse_moveit_actions/action/detail/reach_pose__rosidl_typesupport_introspection_c.h"
#include "emse_moveit_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "emse_moveit_actions/action/detail/reach_pose__functions.h"
#include "emse_moveit_actions/action/detail/reach_pose__struct.h"


// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/pose.h"
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void emse_moveit_actions__action__ReachPose_Goal__rosidl_typesupport_introspection_c__ReachPose_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  emse_moveit_actions__action__ReachPose_Goal__init(message_memory);
}

void emse_moveit_actions__action__ReachPose_Goal__rosidl_typesupport_introspection_c__ReachPose_Goal_fini_function(void * message_memory)
{
  emse_moveit_actions__action__ReachPose_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember emse_moveit_actions__action__ReachPose_Goal__rosidl_typesupport_introspection_c__ReachPose_Goal_message_member_array[1] = {
  {
    "target_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(emse_moveit_actions__action__ReachPose_Goal, target_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers emse_moveit_actions__action__ReachPose_Goal__rosidl_typesupport_introspection_c__ReachPose_Goal_message_members = {
  "emse_moveit_actions__action",  // message namespace
  "ReachPose_Goal",  // message name
  1,  // number of fields
  sizeof(emse_moveit_actions__action__ReachPose_Goal),
  emse_moveit_actions__action__ReachPose_Goal__rosidl_typesupport_introspection_c__ReachPose_Goal_message_member_array,  // message members
  emse_moveit_actions__action__ReachPose_Goal__rosidl_typesupport_introspection_c__ReachPose_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  emse_moveit_actions__action__ReachPose_Goal__rosidl_typesupport_introspection_c__ReachPose_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t emse_moveit_actions__action__ReachPose_Goal__rosidl_typesupport_introspection_c__ReachPose_Goal_message_type_support_handle = {
  0,
  &emse_moveit_actions__action__ReachPose_Goal__rosidl_typesupport_introspection_c__ReachPose_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_emse_moveit_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_Goal)() {
  emse_moveit_actions__action__ReachPose_Goal__rosidl_typesupport_introspection_c__ReachPose_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!emse_moveit_actions__action__ReachPose_Goal__rosidl_typesupport_introspection_c__ReachPose_Goal_message_type_support_handle.typesupport_identifier) {
    emse_moveit_actions__action__ReachPose_Goal__rosidl_typesupport_introspection_c__ReachPose_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &emse_moveit_actions__action__ReachPose_Goal__rosidl_typesupport_introspection_c__ReachPose_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "emse_moveit_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__functions.h"
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__struct.h"


// Include directives for member types
// Member `error_code`
#include "moveit_msgs/msg/move_it_error_codes.h"
// Member `error_code`
#include "moveit_msgs/msg/detail/move_it_error_codes__rosidl_typesupport_introspection_c.h"
// Member `trajectory_start`
#include "moveit_msgs/msg/robot_state.h"
// Member `trajectory_start`
#include "moveit_msgs/msg/detail/robot_state__rosidl_typesupport_introspection_c.h"
// Member `planned_trajectory`
// Member `executed_trajectory`
#include "moveit_msgs/msg/robot_trajectory.h"
// Member `planned_trajectory`
// Member `executed_trajectory`
#include "moveit_msgs/msg/detail/robot_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void emse_moveit_actions__action__ReachPose_Result__rosidl_typesupport_introspection_c__ReachPose_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  emse_moveit_actions__action__ReachPose_Result__init(message_memory);
}

void emse_moveit_actions__action__ReachPose_Result__rosidl_typesupport_introspection_c__ReachPose_Result_fini_function(void * message_memory)
{
  emse_moveit_actions__action__ReachPose_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember emse_moveit_actions__action__ReachPose_Result__rosidl_typesupport_introspection_c__ReachPose_Result_message_member_array[5] = {
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(emse_moveit_actions__action__ReachPose_Result, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(emse_moveit_actions__action__ReachPose_Result, trajectory_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planned_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(emse_moveit_actions__action__ReachPose_Result, planned_trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "executed_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(emse_moveit_actions__action__ReachPose_Result, executed_trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planning_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(emse_moveit_actions__action__ReachPose_Result, planning_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers emse_moveit_actions__action__ReachPose_Result__rosidl_typesupport_introspection_c__ReachPose_Result_message_members = {
  "emse_moveit_actions__action",  // message namespace
  "ReachPose_Result",  // message name
  5,  // number of fields
  sizeof(emse_moveit_actions__action__ReachPose_Result),
  emse_moveit_actions__action__ReachPose_Result__rosidl_typesupport_introspection_c__ReachPose_Result_message_member_array,  // message members
  emse_moveit_actions__action__ReachPose_Result__rosidl_typesupport_introspection_c__ReachPose_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  emse_moveit_actions__action__ReachPose_Result__rosidl_typesupport_introspection_c__ReachPose_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t emse_moveit_actions__action__ReachPose_Result__rosidl_typesupport_introspection_c__ReachPose_Result_message_type_support_handle = {
  0,
  &emse_moveit_actions__action__ReachPose_Result__rosidl_typesupport_introspection_c__ReachPose_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_emse_moveit_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_Result)() {
  emse_moveit_actions__action__ReachPose_Result__rosidl_typesupport_introspection_c__ReachPose_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, MoveItErrorCodes)();
  emse_moveit_actions__action__ReachPose_Result__rosidl_typesupport_introspection_c__ReachPose_Result_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotState)();
  emse_moveit_actions__action__ReachPose_Result__rosidl_typesupport_introspection_c__ReachPose_Result_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotTrajectory)();
  emse_moveit_actions__action__ReachPose_Result__rosidl_typesupport_introspection_c__ReachPose_Result_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotTrajectory)();
  if (!emse_moveit_actions__action__ReachPose_Result__rosidl_typesupport_introspection_c__ReachPose_Result_message_type_support_handle.typesupport_identifier) {
    emse_moveit_actions__action__ReachPose_Result__rosidl_typesupport_introspection_c__ReachPose_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &emse_moveit_actions__action__ReachPose_Result__rosidl_typesupport_introspection_c__ReachPose_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "emse_moveit_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__functions.h"
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__struct.h"


// Include directives for member types
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void emse_moveit_actions__action__ReachPose_Feedback__rosidl_typesupport_introspection_c__ReachPose_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  emse_moveit_actions__action__ReachPose_Feedback__init(message_memory);
}

void emse_moveit_actions__action__ReachPose_Feedback__rosidl_typesupport_introspection_c__ReachPose_Feedback_fini_function(void * message_memory)
{
  emse_moveit_actions__action__ReachPose_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember emse_moveit_actions__action__ReachPose_Feedback__rosidl_typesupport_introspection_c__ReachPose_Feedback_message_member_array[1] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(emse_moveit_actions__action__ReachPose_Feedback, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers emse_moveit_actions__action__ReachPose_Feedback__rosidl_typesupport_introspection_c__ReachPose_Feedback_message_members = {
  "emse_moveit_actions__action",  // message namespace
  "ReachPose_Feedback",  // message name
  1,  // number of fields
  sizeof(emse_moveit_actions__action__ReachPose_Feedback),
  emse_moveit_actions__action__ReachPose_Feedback__rosidl_typesupport_introspection_c__ReachPose_Feedback_message_member_array,  // message members
  emse_moveit_actions__action__ReachPose_Feedback__rosidl_typesupport_introspection_c__ReachPose_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  emse_moveit_actions__action__ReachPose_Feedback__rosidl_typesupport_introspection_c__ReachPose_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t emse_moveit_actions__action__ReachPose_Feedback__rosidl_typesupport_introspection_c__ReachPose_Feedback_message_type_support_handle = {
  0,
  &emse_moveit_actions__action__ReachPose_Feedback__rosidl_typesupport_introspection_c__ReachPose_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_emse_moveit_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_Feedback)() {
  if (!emse_moveit_actions__action__ReachPose_Feedback__rosidl_typesupport_introspection_c__ReachPose_Feedback_message_type_support_handle.typesupport_identifier) {
    emse_moveit_actions__action__ReachPose_Feedback__rosidl_typesupport_introspection_c__ReachPose_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &emse_moveit_actions__action__ReachPose_Feedback__rosidl_typesupport_introspection_c__ReachPose_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "emse_moveit_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__functions.h"
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "emse_moveit_actions/action/reach_pose.h"
// Member `goal`
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void emse_moveit_actions__action__ReachPose_SendGoal_Request__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  emse_moveit_actions__action__ReachPose_SendGoal_Request__init(message_memory);
}

void emse_moveit_actions__action__ReachPose_SendGoal_Request__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Request_fini_function(void * message_memory)
{
  emse_moveit_actions__action__ReachPose_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember emse_moveit_actions__action__ReachPose_SendGoal_Request__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(emse_moveit_actions__action__ReachPose_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(emse_moveit_actions__action__ReachPose_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers emse_moveit_actions__action__ReachPose_SendGoal_Request__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Request_message_members = {
  "emse_moveit_actions__action",  // message namespace
  "ReachPose_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(emse_moveit_actions__action__ReachPose_SendGoal_Request),
  emse_moveit_actions__action__ReachPose_SendGoal_Request__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Request_message_member_array,  // message members
  emse_moveit_actions__action__ReachPose_SendGoal_Request__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  emse_moveit_actions__action__ReachPose_SendGoal_Request__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t emse_moveit_actions__action__ReachPose_SendGoal_Request__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Request_message_type_support_handle = {
  0,
  &emse_moveit_actions__action__ReachPose_SendGoal_Request__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_emse_moveit_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_SendGoal_Request)() {
  emse_moveit_actions__action__ReachPose_SendGoal_Request__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  emse_moveit_actions__action__ReachPose_SendGoal_Request__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_Goal)();
  if (!emse_moveit_actions__action__ReachPose_SendGoal_Request__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    emse_moveit_actions__action__ReachPose_SendGoal_Request__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &emse_moveit_actions__action__ReachPose_SendGoal_Request__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "emse_moveit_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__functions.h"
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void emse_moveit_actions__action__ReachPose_SendGoal_Response__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  emse_moveit_actions__action__ReachPose_SendGoal_Response__init(message_memory);
}

void emse_moveit_actions__action__ReachPose_SendGoal_Response__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Response_fini_function(void * message_memory)
{
  emse_moveit_actions__action__ReachPose_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember emse_moveit_actions__action__ReachPose_SendGoal_Response__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(emse_moveit_actions__action__ReachPose_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(emse_moveit_actions__action__ReachPose_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers emse_moveit_actions__action__ReachPose_SendGoal_Response__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Response_message_members = {
  "emse_moveit_actions__action",  // message namespace
  "ReachPose_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(emse_moveit_actions__action__ReachPose_SendGoal_Response),
  emse_moveit_actions__action__ReachPose_SendGoal_Response__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Response_message_member_array,  // message members
  emse_moveit_actions__action__ReachPose_SendGoal_Response__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  emse_moveit_actions__action__ReachPose_SendGoal_Response__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t emse_moveit_actions__action__ReachPose_SendGoal_Response__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Response_message_type_support_handle = {
  0,
  &emse_moveit_actions__action__ReachPose_SendGoal_Response__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_emse_moveit_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_SendGoal_Response)() {
  emse_moveit_actions__action__ReachPose_SendGoal_Response__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!emse_moveit_actions__action__ReachPose_SendGoal_Response__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    emse_moveit_actions__action__ReachPose_SendGoal_Response__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &emse_moveit_actions__action__ReachPose_SendGoal_Response__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "emse_moveit_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers emse_moveit_actions__action__detail__reach_pose__rosidl_typesupport_introspection_c__ReachPose_SendGoal_service_members = {
  "emse_moveit_actions__action",  // service namespace
  "ReachPose_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // emse_moveit_actions__action__detail__reach_pose__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // emse_moveit_actions__action__detail__reach_pose__rosidl_typesupport_introspection_c__ReachPose_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t emse_moveit_actions__action__detail__reach_pose__rosidl_typesupport_introspection_c__ReachPose_SendGoal_service_type_support_handle = {
  0,
  &emse_moveit_actions__action__detail__reach_pose__rosidl_typesupport_introspection_c__ReachPose_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_emse_moveit_actions
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_SendGoal)() {
  if (!emse_moveit_actions__action__detail__reach_pose__rosidl_typesupport_introspection_c__ReachPose_SendGoal_service_type_support_handle.typesupport_identifier) {
    emse_moveit_actions__action__detail__reach_pose__rosidl_typesupport_introspection_c__ReachPose_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)emse_moveit_actions__action__detail__reach_pose__rosidl_typesupport_introspection_c__ReachPose_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_SendGoal_Response)()->data;
  }

  return &emse_moveit_actions__action__detail__reach_pose__rosidl_typesupport_introspection_c__ReachPose_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "emse_moveit_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__functions.h"
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void emse_moveit_actions__action__ReachPose_GetResult_Request__rosidl_typesupport_introspection_c__ReachPose_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  emse_moveit_actions__action__ReachPose_GetResult_Request__init(message_memory);
}

void emse_moveit_actions__action__ReachPose_GetResult_Request__rosidl_typesupport_introspection_c__ReachPose_GetResult_Request_fini_function(void * message_memory)
{
  emse_moveit_actions__action__ReachPose_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember emse_moveit_actions__action__ReachPose_GetResult_Request__rosidl_typesupport_introspection_c__ReachPose_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(emse_moveit_actions__action__ReachPose_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers emse_moveit_actions__action__ReachPose_GetResult_Request__rosidl_typesupport_introspection_c__ReachPose_GetResult_Request_message_members = {
  "emse_moveit_actions__action",  // message namespace
  "ReachPose_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(emse_moveit_actions__action__ReachPose_GetResult_Request),
  emse_moveit_actions__action__ReachPose_GetResult_Request__rosidl_typesupport_introspection_c__ReachPose_GetResult_Request_message_member_array,  // message members
  emse_moveit_actions__action__ReachPose_GetResult_Request__rosidl_typesupport_introspection_c__ReachPose_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  emse_moveit_actions__action__ReachPose_GetResult_Request__rosidl_typesupport_introspection_c__ReachPose_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t emse_moveit_actions__action__ReachPose_GetResult_Request__rosidl_typesupport_introspection_c__ReachPose_GetResult_Request_message_type_support_handle = {
  0,
  &emse_moveit_actions__action__ReachPose_GetResult_Request__rosidl_typesupport_introspection_c__ReachPose_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_emse_moveit_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_GetResult_Request)() {
  emse_moveit_actions__action__ReachPose_GetResult_Request__rosidl_typesupport_introspection_c__ReachPose_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!emse_moveit_actions__action__ReachPose_GetResult_Request__rosidl_typesupport_introspection_c__ReachPose_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    emse_moveit_actions__action__ReachPose_GetResult_Request__rosidl_typesupport_introspection_c__ReachPose_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &emse_moveit_actions__action__ReachPose_GetResult_Request__rosidl_typesupport_introspection_c__ReachPose_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "emse_moveit_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__functions.h"
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "emse_moveit_actions/action/reach_pose.h"
// Member `result`
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void emse_moveit_actions__action__ReachPose_GetResult_Response__rosidl_typesupport_introspection_c__ReachPose_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  emse_moveit_actions__action__ReachPose_GetResult_Response__init(message_memory);
}

void emse_moveit_actions__action__ReachPose_GetResult_Response__rosidl_typesupport_introspection_c__ReachPose_GetResult_Response_fini_function(void * message_memory)
{
  emse_moveit_actions__action__ReachPose_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember emse_moveit_actions__action__ReachPose_GetResult_Response__rosidl_typesupport_introspection_c__ReachPose_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(emse_moveit_actions__action__ReachPose_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(emse_moveit_actions__action__ReachPose_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers emse_moveit_actions__action__ReachPose_GetResult_Response__rosidl_typesupport_introspection_c__ReachPose_GetResult_Response_message_members = {
  "emse_moveit_actions__action",  // message namespace
  "ReachPose_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(emse_moveit_actions__action__ReachPose_GetResult_Response),
  emse_moveit_actions__action__ReachPose_GetResult_Response__rosidl_typesupport_introspection_c__ReachPose_GetResult_Response_message_member_array,  // message members
  emse_moveit_actions__action__ReachPose_GetResult_Response__rosidl_typesupport_introspection_c__ReachPose_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  emse_moveit_actions__action__ReachPose_GetResult_Response__rosidl_typesupport_introspection_c__ReachPose_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t emse_moveit_actions__action__ReachPose_GetResult_Response__rosidl_typesupport_introspection_c__ReachPose_GetResult_Response_message_type_support_handle = {
  0,
  &emse_moveit_actions__action__ReachPose_GetResult_Response__rosidl_typesupport_introspection_c__ReachPose_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_emse_moveit_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_GetResult_Response)() {
  emse_moveit_actions__action__ReachPose_GetResult_Response__rosidl_typesupport_introspection_c__ReachPose_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_Result)();
  if (!emse_moveit_actions__action__ReachPose_GetResult_Response__rosidl_typesupport_introspection_c__ReachPose_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    emse_moveit_actions__action__ReachPose_GetResult_Response__rosidl_typesupport_introspection_c__ReachPose_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &emse_moveit_actions__action__ReachPose_GetResult_Response__rosidl_typesupport_introspection_c__ReachPose_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "emse_moveit_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers emse_moveit_actions__action__detail__reach_pose__rosidl_typesupport_introspection_c__ReachPose_GetResult_service_members = {
  "emse_moveit_actions__action",  // service namespace
  "ReachPose_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // emse_moveit_actions__action__detail__reach_pose__rosidl_typesupport_introspection_c__ReachPose_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // emse_moveit_actions__action__detail__reach_pose__rosidl_typesupport_introspection_c__ReachPose_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t emse_moveit_actions__action__detail__reach_pose__rosidl_typesupport_introspection_c__ReachPose_GetResult_service_type_support_handle = {
  0,
  &emse_moveit_actions__action__detail__reach_pose__rosidl_typesupport_introspection_c__ReachPose_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_emse_moveit_actions
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_GetResult)() {
  if (!emse_moveit_actions__action__detail__reach_pose__rosidl_typesupport_introspection_c__ReachPose_GetResult_service_type_support_handle.typesupport_identifier) {
    emse_moveit_actions__action__detail__reach_pose__rosidl_typesupport_introspection_c__ReachPose_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)emse_moveit_actions__action__detail__reach_pose__rosidl_typesupport_introspection_c__ReachPose_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_GetResult_Response)()->data;
  }

  return &emse_moveit_actions__action__detail__reach_pose__rosidl_typesupport_introspection_c__ReachPose_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "emse_moveit_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__functions.h"
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "emse_moveit_actions/action/reach_pose.h"
// Member `feedback`
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void emse_moveit_actions__action__ReachPose_FeedbackMessage__rosidl_typesupport_introspection_c__ReachPose_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  emse_moveit_actions__action__ReachPose_FeedbackMessage__init(message_memory);
}

void emse_moveit_actions__action__ReachPose_FeedbackMessage__rosidl_typesupport_introspection_c__ReachPose_FeedbackMessage_fini_function(void * message_memory)
{
  emse_moveit_actions__action__ReachPose_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember emse_moveit_actions__action__ReachPose_FeedbackMessage__rosidl_typesupport_introspection_c__ReachPose_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(emse_moveit_actions__action__ReachPose_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(emse_moveit_actions__action__ReachPose_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers emse_moveit_actions__action__ReachPose_FeedbackMessage__rosidl_typesupport_introspection_c__ReachPose_FeedbackMessage_message_members = {
  "emse_moveit_actions__action",  // message namespace
  "ReachPose_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(emse_moveit_actions__action__ReachPose_FeedbackMessage),
  emse_moveit_actions__action__ReachPose_FeedbackMessage__rosidl_typesupport_introspection_c__ReachPose_FeedbackMessage_message_member_array,  // message members
  emse_moveit_actions__action__ReachPose_FeedbackMessage__rosidl_typesupport_introspection_c__ReachPose_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  emse_moveit_actions__action__ReachPose_FeedbackMessage__rosidl_typesupport_introspection_c__ReachPose_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t emse_moveit_actions__action__ReachPose_FeedbackMessage__rosidl_typesupport_introspection_c__ReachPose_FeedbackMessage_message_type_support_handle = {
  0,
  &emse_moveit_actions__action__ReachPose_FeedbackMessage__rosidl_typesupport_introspection_c__ReachPose_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_emse_moveit_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_FeedbackMessage)() {
  emse_moveit_actions__action__ReachPose_FeedbackMessage__rosidl_typesupport_introspection_c__ReachPose_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  emse_moveit_actions__action__ReachPose_FeedbackMessage__rosidl_typesupport_introspection_c__ReachPose_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, emse_moveit_actions, action, ReachPose_Feedback)();
  if (!emse_moveit_actions__action__ReachPose_FeedbackMessage__rosidl_typesupport_introspection_c__ReachPose_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    emse_moveit_actions__action__ReachPose_FeedbackMessage__rosidl_typesupport_introspection_c__ReachPose_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &emse_moveit_actions__action__ReachPose_FeedbackMessage__rosidl_typesupport_introspection_c__ReachPose_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
