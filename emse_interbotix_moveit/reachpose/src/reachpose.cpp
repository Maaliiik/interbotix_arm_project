#include <memory>

#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>

int main(int argc, char* argv[])
{
  // Initialize ROS and create the Node
  rclcpp::init(argc, argv);
  auto const node = std::make_shared<rclcpp::Node>(
      "hello_moveit", rclcpp::NodeOptions().automatically_declare_parameters_from_overrides(true));

  // Create a ROS logger
  auto const logger = rclcpp::get_logger("reachpose");

  // Create the MoveIt MoveGroup Interface
  using moveit::planning_interface::MoveGroupInterface;
  auto move_group_interface = MoveGroupInterface(node, "interbotix_arm");
  
  
 
  // Set a target Pose
  auto const target_pose = [] {
    geometry_msgs::msg::Pose msg;
    msg.orientation.w = 0.503; //0.503
    msg.position.x = 0.09;
    msg.position.y = 0.0;
    msg.position.z = 0.34;
    return msg;
  }();
  
  /*
    const moveit::core::JointModelGroup* joint_model_group =
    move_group_interface.getCurrentState()->getJointModelGroup("interbotix_arm");
  moveit::core::RobotState start_state(*move_group.getCurrentState());
  geometry_msgs::msg::Pose start_pose2;
  start_pose2.orientation.w = 1.0;
  start_pose2.position.x = 0.55;
  start_pose2.position.y = -0.05;
  start_pose2.position.z = 0.8;
  start_state.setFromIK(joint_model_group, start_pose2);
  move_group.setStartState(start_state);
 
  
  
  moveit::core::RobotStatePtr current_state = move_group_interface.getCurrentState(10);
  
  std::vector<double> joint_group_positions;
  current_state->copyJointGroupPositions(joint_model_group, joint_group_positions);
  joint_group_positions[2] = -0.5;  // radians
 
  
  move_group_interface.setMaxVelocityScalingFactor(0.05);
  move_group_interface.setMaxAccelerationScalingFactor(0.05);
  */
   
  move_group_interface.setStartStateToCurrentState(); 
 // move_group_interface.setJointValueTarget(joint_group_positions);
  move_group_interface.setPoseTarget(target_pose);
  move_group_interface.setNumPlanningAttempts(10);
  move_group_interface.setPlanningTime(15.0); 
 // move_group_interface.setGoalPositionTolerance(0.2);
  move_group_interface.setGoalTolerance(0.2);

moveit::planning_interface::MoveGroupInterface::Plan my_plan;
bool success = (move_group_interface.plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);

  


/*
  // Create a plan to that target pose
  auto const [success, plan] = [&move_group_interface] {
    moveit::planning_interface::MoveGroupInterface::Plan msg;
    auto const ok = static_cast<bool>(move_group_interface.plan(msg));
    return std::make_pair(ok, msg);
  }();
*/
  // Execute the plan
  if (success)
  {
    move_group_interface.execute(my_plan);
  }
  else
  {
    RCLCPP_ERROR(logger, "Planning failed!");
  }

  // Shutdown ROS
  rclcpp::shutdown();
  return 0;
}
