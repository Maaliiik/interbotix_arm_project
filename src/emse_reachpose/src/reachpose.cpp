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
  
RCLCPP_INFO(logger, "Planning frame: %s", move_group_interface.getPlanningFrame().c_str());

RCLCPP_INFO(logger, "End effector link: %s", move_group_interface.getEndEffectorLink().c_str());  


RCLCPP_INFO(logger, "End effector pose: %f ,%f, %f ", move_group_interface.getCurrentPose().pose.position.x,move_group_interface.getCurrentPose().pose.position.y,move_group_interface.getCurrentPose().pose.position.z);
  // Set a target Pose
  auto const target_pose = [] {
    geometry_msgs::msg::Pose msg;
    msg.orientation.w = 0.503; //0.503
    msg.position.x = 0.09;
    msg.position.y = 0.0;
    msg.position.z = 0.34;
    return msg;
  }();
  

   
  move_group_interface.setStartStateToCurrentState(); 
  move_group_interface.setPoseTarget(target_pose);
  move_group_interface.setNumPlanningAttempts(10);
  move_group_interface.setPlanningTime(15.0); 
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
  
RCLCPP_INFO(logger, "End effector pose: %f ,%f, %f ", move_group_interface.getCurrentPose().pose.position.x,move_group_interface.getCurrentPose().pose.position.y,move_group_interface.getCurrentPose().pose.position.z);

  // Shutdown ROS
  
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

