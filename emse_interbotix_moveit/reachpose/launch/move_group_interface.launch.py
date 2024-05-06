from launch import LaunchDescription
from launch_ros.actions import Node
from moveit_configs_utils import MoveItConfigsBuilder


def generate_launch_description():

    moveit_config = (
        MoveItConfigsBuilder("rx150")
        .robot_description(
            file_path="config/rx150.urdf.xacro" )
        
        .robot_description_semantic(file_path="config/srdf/rx150.srdf")
        .trajectory_execution(file_path="config/moveit_controllers.yaml")
        .robot_description_kinematics(file_path="config/kinematics.yaml")
        .planning_pipelines("ompl", ["ompl", "pilz_industrial_motion_planner"])
        .sensors_3d(file_path="config/sensors_3d.yaml")
        .to_moveit_configs()
    )



    # MoveGroupInterface demo executable
    move_group_interface = Node(
        name="reachpose",
        package="reachpose",
        executable="reachpose",
        output="screen",
        parameters=[
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.robot_description_kinematics,
            {"use_sim_time": True }
        ],
        remappings=[
            ('/joint_states', '/rx150/joint_states')
        ],
    )

    return LaunchDescription([move_group_interface])
    
