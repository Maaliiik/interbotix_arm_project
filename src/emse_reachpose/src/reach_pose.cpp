#include <memory>

#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include "rcl_interfaces/msg/set_parameters_result.hpp"

//#include <tf2/LinearMath/Quaternion.h>

std::vector<double> position_values = {0.05, 0.0, 0.34, 0.0, 0.0, 0.0, 1.0};

class SampleNodeWithParameters : public rclcpp::Node
{
public:
  SampleNodeWithParameters()
  : Node("node_with_parameters")
  {
 

this->declare_parameter<std::vector<double>>("position", position_values);


    // Create a parameter subscriber that can be used to monitor parameter changes
    // (for this node's parameters as well as other nodes' parameters)
    param_subscriber_ = std::make_shared<rclcpp::ParameterEventHandler>(this);

 
auto cb = [this](const rclcpp::Parameter & p) {
          position_values = p.as_double_array();
          RCLCPP_INFO(this->get_logger(), "Changed position to: [%f, %f, %f]", 
                      position_values[0], position_values[1], position_values[2]);
   // Create the MoveIt MoveGroup Interface
        using moveit::planning_interface::MoveGroupInterface;
        auto move_group_interface = MoveGroupInterface(this->shared_from_this(), "interbotix_arm");
        
        //tf2::Quaternion myQuaternion;
        //myQuaternion.setRPY( 0, 0, 0 ); 
  
  
 
        // Set a target Pose
        auto const target_pose = []() {
        geometry_msgs::msg::Pose msg;
        //[-0.687, 0.060, 0.703, -0.174]
        
        msg.orientation.x = position_values[3];
        msg.orientation.y = position_values[4];
        msg.orientation.z = position_values[5];
        msg.orientation.w = position_values[6];
        msg.position.x = position_values[0];
        
        /*ros2 param set /reach_pose position "[-0.078, 0.297, 0.107, -0.037, -0.710, 0.031, 0.703]" */

        msg.position.y = position_values[1];
        msg.position.z = position_values[2];
         return msg;
        }();
  
   
        move_group_interface.setStartStateToCurrentState();     
        move_group_interface.setPoseTarget(target_pose);
        move_group_interface.setNumPlanningAttempts(10);
        move_group_interface.setPlanningTime(15.0); 
//        move_group_interface.setGoalTolerance(0.2);

        moveit::planning_interface::MoveGroupInterface::Plan my_plan;
        bool success = (move_group_interface.plan(my_plan) ==             		moveit::core::MoveItErrorCode::SUCCESS);

  

        // Execute the plan
        if (success)
        {
         move_group_interface.execute(my_plan);
        }
        else
        {

        RCLCPP_ERROR(this->get_logger(), "Planning failed!");
        }
        
        
        
      };
    cb_handle_ = param_subscriber_->add_parameter_callback("position", cb);
  }



private:
  std::shared_ptr<rclcpp::ParameterEventHandler> param_subscriber_;
  std::shared_ptr<rclcpp::ParameterCallbackHandle> cb_handle_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SampleNodeWithParameters>());
  rclcpp::shutdown();

  return 0;
}























