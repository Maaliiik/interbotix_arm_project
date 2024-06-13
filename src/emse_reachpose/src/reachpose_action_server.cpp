#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <geometry_msgs/msg/pose.hpp>
#include <moveit_msgs/msg/move_it_error_codes.hpp>
#include <moveit_msgs/msg/robot_state.hpp>
#include <moveit_msgs/msg/robot_trajectory.hpp>
#include "emse_moveit_actions/action/reach_pose.hpp"

class ReachPoseActionServer : public rclcpp::Node
{
public:
  using ReachPose = emse_moveit_actions::action::ReachPose;
  using GoalHandleReachPose = rclcpp_action::ServerGoalHandle<ReachPose>;

  ReachPoseActionServer()
  : Node("plan_pose_action_server")
  {
    using namespace std::placeholders;

    // Create an action server
    action_server_ = rclcpp_action::create_server<ReachPose>(
      this,
      "plan_pose",
      std::bind(&ReachPoseActionServer::handle_goal, this, _1, _2),
      std::bind(&ReachPoseActionServer::handle_cancel, this, _1),
      std::bind(&ReachPoseActionServer::handle_accepted, this, _1));


  }
  


private:
  rclcpp_action::Server<ReachPose>::SharedPtr action_server_;
  std::shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group_;

  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID & /*uuid*/,
    std::shared_ptr<const ReachPose::Goal> goal)
  {
    RCLCPP_INFO(this->get_logger(), "Received goal request with pose (x: %f, y: %f, z: %f)",
      goal->target_pose.position.x,
      goal->target_pose.position.y,
      goal->target_pose.position.z);
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(
    const std::shared_ptr<GoalHandleReachPose> /*goal_handle*/)
  {
    RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(const std::shared_ptr<GoalHandleReachPose> goal_handle)
  {
    std::thread{std::bind(&ReachPoseActionServer::execute, this, std::placeholders::_1), goal_handle}.detach();
  }

  void execute(const std::shared_ptr<GoalHandleReachPose> goal_handle)
  {
        // Initialize MoveGroupInterface
    move_group_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(this->shared_from_this(), "interbotix_arm");
    RCLCPP_INFO(this->get_logger(), "Executing goal");
    const auto goal = goal_handle->get_goal();

    moveit::planning_interface::MoveGroupInterface::Plan plan;
    auto target_pose = goal->target_pose;

    // Set the target pose
    move_group_->setPoseTarget(target_pose);

    // Plan the motion
    auto error_code = move_group_->plan(plan);

    // Set the result
    auto result = std::make_shared<ReachPose::Result>();
    result->error_code = error_code;
    result->trajectory_start = plan.start_state_;
    result->planned_trajectory = plan.trajectory_;
    result->executed_trajectory = plan.trajectory_; // assuming the same for simplicity
    result->planning_time = plan.planning_time_;

    if (error_code == moveit::core::MoveItErrorCode::SUCCESS)
    {
      goal_handle->succeed(result);
      RCLCPP_INFO(this->get_logger(), "Goal succeeded");
    }
    else
    {
      goal_handle->abort(result);
      RCLCPP_INFO(this->get_logger(), "Goal failed with error code: %d", error_code.val);
    }
  }
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<ReachPoseActionServer>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
