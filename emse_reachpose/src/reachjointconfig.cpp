#include <memory>

#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/robot_model_loader/robot_model_loader.h>
#include <moveit/robot_model/robot_model.h>
#include <moveit/robot_state/robot_state.h>

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
  const moveit::core::JointModelGroup* joint_model_group =
    move_group_interface.getCurrentState()->getJointModelGroup("interbotix_arm");
  
  
  
  moveit::core::RobotStatePtr current_state = move_group_interface.getCurrentState(10);
  std::vector<double> joint_group_positions;
  current_state->copyJointGroupPositions(joint_model_group, joint_group_positions);
  joint_group_positions[2] = -0.5;  // radians
  
  
  const Eigen::Isometry3d& end_effector_state = current_state->getGlobalLinkTransform("ee_arm");

  /* Print end-effector pose. Remember that this is in the model frame */
  RCLCPP_INFO_STREAM(logger, "Translation: \n" << end_effector_state.translation() << "\n");
  RCLCPP_INFO_STREAM(logger, "Rotation: \n" << end_effector_state.rotation() << "\n");


 
  
  move_group_interface.setMaxVelocityScalingFactor(0.05);
  move_group_interface.setMaxAccelerationScalingFactor(0.05);
  
  move_group_interface.setStartStateToCurrentState(); 
  move_group_interface.setJointValueTarget(joint_group_positions);
 // move_group_interface.setPoseTarget(target_pose);
  move_group_interface.setNumPlanningAttempts(10);
  move_group_interface.setPlanningTime(15.0); 
 // move_group_interface.setGoalPositionTolerance(0.2);
  move_group_interface.setGoalTolerance(0.2);

moveit::planning_interface::MoveGroupInterface::Plan my_plan;
bool success = (move_group_interface.plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);


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
