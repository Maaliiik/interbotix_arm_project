// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from emse_moveit_actions:action/ReachPose.idl
// generated code does not contain a copyright notice

#ifndef EMSE_MOVEIT_ACTIONS__ACTION__DETAIL__REACH_POSE__STRUCT_HPP_
#define EMSE_MOVEIT_ACTIONS__ACTION__DETAIL__REACH_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__emse_moveit_actions__action__ReachPose_Goal __attribute__((deprecated))
#else
# define DEPRECATED__emse_moveit_actions__action__ReachPose_Goal __declspec(deprecated)
#endif

namespace emse_moveit_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ReachPose_Goal_
{
  using Type = ReachPose_Goal_<ContainerAllocator>;

  explicit ReachPose_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_init)
  {
    (void)_init;
  }

  explicit ReachPose_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _target_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _target_pose_type target_pose;

  // setters for named parameter idiom
  Type & set__target_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->target_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    emse_moveit_actions::action::ReachPose_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const emse_moveit_actions::action::ReachPose_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<emse_moveit_actions::action::ReachPose_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<emse_moveit_actions::action::ReachPose_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      emse_moveit_actions::action::ReachPose_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<emse_moveit_actions::action::ReachPose_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      emse_moveit_actions::action::ReachPose_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<emse_moveit_actions::action::ReachPose_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<emse_moveit_actions::action::ReachPose_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<emse_moveit_actions::action::ReachPose_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__emse_moveit_actions__action__ReachPose_Goal
    std::shared_ptr<emse_moveit_actions::action::ReachPose_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__emse_moveit_actions__action__ReachPose_Goal
    std::shared_ptr<emse_moveit_actions::action::ReachPose_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReachPose_Goal_ & other) const
  {
    if (this->target_pose != other.target_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReachPose_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReachPose_Goal_

// alias to use template instance with default allocator
using ReachPose_Goal =
  emse_moveit_actions::action::ReachPose_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace emse_moveit_actions


// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.hpp"
// Member 'trajectory_start'
#include "moveit_msgs/msg/detail/robot_state__struct.hpp"
// Member 'planned_trajectory'
// Member 'executed_trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__emse_moveit_actions__action__ReachPose_Result __attribute__((deprecated))
#else
# define DEPRECATED__emse_moveit_actions__action__ReachPose_Result __declspec(deprecated)
#endif

namespace emse_moveit_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ReachPose_Result_
{
  using Type = ReachPose_Result_<ContainerAllocator>;

  explicit ReachPose_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_code(_init),
    trajectory_start(_init),
    planned_trajectory(_init),
    executed_trajectory(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planning_time = 0.0;
    }
  }

  explicit ReachPose_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_code(_alloc, _init),
    trajectory_start(_alloc, _init),
    planned_trajectory(_alloc, _init),
    executed_trajectory(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planning_time = 0.0;
    }
  }

  // field types and members
  using _error_code_type =
    moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator>;
  _error_code_type error_code;
  using _trajectory_start_type =
    moveit_msgs::msg::RobotState_<ContainerAllocator>;
  _trajectory_start_type trajectory_start;
  using _planned_trajectory_type =
    moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>;
  _planned_trajectory_type planned_trajectory;
  using _executed_trajectory_type =
    moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>;
  _executed_trajectory_type executed_trajectory;
  using _planning_time_type =
    double;
  _planning_time_type planning_time;

  // setters for named parameter idiom
  Type & set__error_code(
    const moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator> & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__trajectory_start(
    const moveit_msgs::msg::RobotState_<ContainerAllocator> & _arg)
  {
    this->trajectory_start = _arg;
    return *this;
  }
  Type & set__planned_trajectory(
    const moveit_msgs::msg::RobotTrajectory_<ContainerAllocator> & _arg)
  {
    this->planned_trajectory = _arg;
    return *this;
  }
  Type & set__executed_trajectory(
    const moveit_msgs::msg::RobotTrajectory_<ContainerAllocator> & _arg)
  {
    this->executed_trajectory = _arg;
    return *this;
  }
  Type & set__planning_time(
    const double & _arg)
  {
    this->planning_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    emse_moveit_actions::action::ReachPose_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const emse_moveit_actions::action::ReachPose_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<emse_moveit_actions::action::ReachPose_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<emse_moveit_actions::action::ReachPose_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      emse_moveit_actions::action::ReachPose_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<emse_moveit_actions::action::ReachPose_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      emse_moveit_actions::action::ReachPose_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<emse_moveit_actions::action::ReachPose_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<emse_moveit_actions::action::ReachPose_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<emse_moveit_actions::action::ReachPose_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__emse_moveit_actions__action__ReachPose_Result
    std::shared_ptr<emse_moveit_actions::action::ReachPose_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__emse_moveit_actions__action__ReachPose_Result
    std::shared_ptr<emse_moveit_actions::action::ReachPose_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReachPose_Result_ & other) const
  {
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->trajectory_start != other.trajectory_start) {
      return false;
    }
    if (this->planned_trajectory != other.planned_trajectory) {
      return false;
    }
    if (this->executed_trajectory != other.executed_trajectory) {
      return false;
    }
    if (this->planning_time != other.planning_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReachPose_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReachPose_Result_

// alias to use template instance with default allocator
using ReachPose_Result =
  emse_moveit_actions::action::ReachPose_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace emse_moveit_actions


#ifndef _WIN32
# define DEPRECATED__emse_moveit_actions__action__ReachPose_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__emse_moveit_actions__action__ReachPose_Feedback __declspec(deprecated)
#endif

namespace emse_moveit_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ReachPose_Feedback_
{
  using Type = ReachPose_Feedback_<ContainerAllocator>;

  explicit ReachPose_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  explicit ReachPose_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  // field types and members
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    emse_moveit_actions::action::ReachPose_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const emse_moveit_actions::action::ReachPose_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<emse_moveit_actions::action::ReachPose_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<emse_moveit_actions::action::ReachPose_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      emse_moveit_actions::action::ReachPose_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<emse_moveit_actions::action::ReachPose_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      emse_moveit_actions::action::ReachPose_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<emse_moveit_actions::action::ReachPose_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<emse_moveit_actions::action::ReachPose_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<emse_moveit_actions::action::ReachPose_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__emse_moveit_actions__action__ReachPose_Feedback
    std::shared_ptr<emse_moveit_actions::action::ReachPose_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__emse_moveit_actions__action__ReachPose_Feedback
    std::shared_ptr<emse_moveit_actions::action::ReachPose_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReachPose_Feedback_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReachPose_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReachPose_Feedback_

// alias to use template instance with default allocator
using ReachPose_Feedback =
  emse_moveit_actions::action::ReachPose_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace emse_moveit_actions


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "emse_moveit_actions/action/detail/reach_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__emse_moveit_actions__action__ReachPose_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__emse_moveit_actions__action__ReachPose_SendGoal_Request __declspec(deprecated)
#endif

namespace emse_moveit_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ReachPose_SendGoal_Request_
{
  using Type = ReachPose_SendGoal_Request_<ContainerAllocator>;

  explicit ReachPose_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ReachPose_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    emse_moveit_actions::action::ReachPose_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const emse_moveit_actions::action::ReachPose_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    emse_moveit_actions::action::ReachPose_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const emse_moveit_actions::action::ReachPose_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<emse_moveit_actions::action::ReachPose_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<emse_moveit_actions::action::ReachPose_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      emse_moveit_actions::action::ReachPose_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<emse_moveit_actions::action::ReachPose_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      emse_moveit_actions::action::ReachPose_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<emse_moveit_actions::action::ReachPose_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<emse_moveit_actions::action::ReachPose_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<emse_moveit_actions::action::ReachPose_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__emse_moveit_actions__action__ReachPose_SendGoal_Request
    std::shared_ptr<emse_moveit_actions::action::ReachPose_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__emse_moveit_actions__action__ReachPose_SendGoal_Request
    std::shared_ptr<emse_moveit_actions::action::ReachPose_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReachPose_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReachPose_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReachPose_SendGoal_Request_

// alias to use template instance with default allocator
using ReachPose_SendGoal_Request =
  emse_moveit_actions::action::ReachPose_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace emse_moveit_actions


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__emse_moveit_actions__action__ReachPose_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__emse_moveit_actions__action__ReachPose_SendGoal_Response __declspec(deprecated)
#endif

namespace emse_moveit_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ReachPose_SendGoal_Response_
{
  using Type = ReachPose_SendGoal_Response_<ContainerAllocator>;

  explicit ReachPose_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ReachPose_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    emse_moveit_actions::action::ReachPose_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const emse_moveit_actions::action::ReachPose_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<emse_moveit_actions::action::ReachPose_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<emse_moveit_actions::action::ReachPose_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      emse_moveit_actions::action::ReachPose_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<emse_moveit_actions::action::ReachPose_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      emse_moveit_actions::action::ReachPose_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<emse_moveit_actions::action::ReachPose_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<emse_moveit_actions::action::ReachPose_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<emse_moveit_actions::action::ReachPose_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__emse_moveit_actions__action__ReachPose_SendGoal_Response
    std::shared_ptr<emse_moveit_actions::action::ReachPose_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__emse_moveit_actions__action__ReachPose_SendGoal_Response
    std::shared_ptr<emse_moveit_actions::action::ReachPose_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReachPose_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReachPose_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReachPose_SendGoal_Response_

// alias to use template instance with default allocator
using ReachPose_SendGoal_Response =
  emse_moveit_actions::action::ReachPose_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace emse_moveit_actions

namespace emse_moveit_actions
{

namespace action
{

struct ReachPose_SendGoal
{
  using Request = emse_moveit_actions::action::ReachPose_SendGoal_Request;
  using Response = emse_moveit_actions::action::ReachPose_SendGoal_Response;
};

}  // namespace action

}  // namespace emse_moveit_actions


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__emse_moveit_actions__action__ReachPose_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__emse_moveit_actions__action__ReachPose_GetResult_Request __declspec(deprecated)
#endif

namespace emse_moveit_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ReachPose_GetResult_Request_
{
  using Type = ReachPose_GetResult_Request_<ContainerAllocator>;

  explicit ReachPose_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ReachPose_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    emse_moveit_actions::action::ReachPose_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const emse_moveit_actions::action::ReachPose_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<emse_moveit_actions::action::ReachPose_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<emse_moveit_actions::action::ReachPose_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      emse_moveit_actions::action::ReachPose_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<emse_moveit_actions::action::ReachPose_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      emse_moveit_actions::action::ReachPose_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<emse_moveit_actions::action::ReachPose_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<emse_moveit_actions::action::ReachPose_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<emse_moveit_actions::action::ReachPose_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__emse_moveit_actions__action__ReachPose_GetResult_Request
    std::shared_ptr<emse_moveit_actions::action::ReachPose_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__emse_moveit_actions__action__ReachPose_GetResult_Request
    std::shared_ptr<emse_moveit_actions::action::ReachPose_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReachPose_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReachPose_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReachPose_GetResult_Request_

// alias to use template instance with default allocator
using ReachPose_GetResult_Request =
  emse_moveit_actions::action::ReachPose_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace emse_moveit_actions


// Include directives for member types
// Member 'result'
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__emse_moveit_actions__action__ReachPose_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__emse_moveit_actions__action__ReachPose_GetResult_Response __declspec(deprecated)
#endif

namespace emse_moveit_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ReachPose_GetResult_Response_
{
  using Type = ReachPose_GetResult_Response_<ContainerAllocator>;

  explicit ReachPose_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ReachPose_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    emse_moveit_actions::action::ReachPose_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const emse_moveit_actions::action::ReachPose_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    emse_moveit_actions::action::ReachPose_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const emse_moveit_actions::action::ReachPose_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<emse_moveit_actions::action::ReachPose_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<emse_moveit_actions::action::ReachPose_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      emse_moveit_actions::action::ReachPose_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<emse_moveit_actions::action::ReachPose_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      emse_moveit_actions::action::ReachPose_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<emse_moveit_actions::action::ReachPose_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<emse_moveit_actions::action::ReachPose_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<emse_moveit_actions::action::ReachPose_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__emse_moveit_actions__action__ReachPose_GetResult_Response
    std::shared_ptr<emse_moveit_actions::action::ReachPose_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__emse_moveit_actions__action__ReachPose_GetResult_Response
    std::shared_ptr<emse_moveit_actions::action::ReachPose_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReachPose_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReachPose_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReachPose_GetResult_Response_

// alias to use template instance with default allocator
using ReachPose_GetResult_Response =
  emse_moveit_actions::action::ReachPose_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace emse_moveit_actions

namespace emse_moveit_actions
{

namespace action
{

struct ReachPose_GetResult
{
  using Request = emse_moveit_actions::action::ReachPose_GetResult_Request;
  using Response = emse_moveit_actions::action::ReachPose_GetResult_Response;
};

}  // namespace action

}  // namespace emse_moveit_actions


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "emse_moveit_actions/action/detail/reach_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__emse_moveit_actions__action__ReachPose_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__emse_moveit_actions__action__ReachPose_FeedbackMessage __declspec(deprecated)
#endif

namespace emse_moveit_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ReachPose_FeedbackMessage_
{
  using Type = ReachPose_FeedbackMessage_<ContainerAllocator>;

  explicit ReachPose_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ReachPose_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    emse_moveit_actions::action::ReachPose_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const emse_moveit_actions::action::ReachPose_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    emse_moveit_actions::action::ReachPose_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const emse_moveit_actions::action::ReachPose_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<emse_moveit_actions::action::ReachPose_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<emse_moveit_actions::action::ReachPose_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      emse_moveit_actions::action::ReachPose_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<emse_moveit_actions::action::ReachPose_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      emse_moveit_actions::action::ReachPose_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<emse_moveit_actions::action::ReachPose_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<emse_moveit_actions::action::ReachPose_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<emse_moveit_actions::action::ReachPose_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__emse_moveit_actions__action__ReachPose_FeedbackMessage
    std::shared_ptr<emse_moveit_actions::action::ReachPose_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__emse_moveit_actions__action__ReachPose_FeedbackMessage
    std::shared_ptr<emse_moveit_actions::action::ReachPose_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReachPose_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReachPose_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReachPose_FeedbackMessage_

// alias to use template instance with default allocator
using ReachPose_FeedbackMessage =
  emse_moveit_actions::action::ReachPose_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace emse_moveit_actions

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace emse_moveit_actions
{

namespace action
{

struct ReachPose
{
  /// The goal message defined in the action definition.
  using Goal = emse_moveit_actions::action::ReachPose_Goal;
  /// The result message defined in the action definition.
  using Result = emse_moveit_actions::action::ReachPose_Result;
  /// The feedback message defined in the action definition.
  using Feedback = emse_moveit_actions::action::ReachPose_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = emse_moveit_actions::action::ReachPose_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = emse_moveit_actions::action::ReachPose_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = emse_moveit_actions::action::ReachPose_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ReachPose ReachPose;

}  // namespace action

}  // namespace emse_moveit_actions

#endif  // EMSE_MOVEIT_ACTIONS__ACTION__DETAIL__REACH_POSE__STRUCT_HPP_
