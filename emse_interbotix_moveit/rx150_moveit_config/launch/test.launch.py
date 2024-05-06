import os

from ament_index_python.packages import get_package_share_directory
from interbotix_xs_modules.xs_common import (
    get_interbotix_xsarm_models,
)
from interbotix_xs_modules.xs_launch import (
    declare_interbotix_xsarm_robot_description_launch_arguments,
    determine_use_sim_time_param,
)
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    OpaqueFunction,
)
from launch.conditions import IfCondition, LaunchConfigurationEquals
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import (
    LaunchConfiguration,
    PathJoinSubstitution,
    PythonExpression,
    TextSubstitution,
)
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
import yaml
from moveit_configs_utils import MoveItConfigsBuilder



def launch_setup(context, *args, **kwargs):

    robot_model_launch_arg = LaunchConfiguration('robot_model') 
    robot_name_launch_arg = LaunchConfiguration('robot_name')    
    mode_configs_launch_arg = LaunchConfiguration('mode_configs')		
    use_moveit_rviz_launch_arg = LaunchConfiguration('use_moveit_rviz')
    rviz_frame_launch_arg = LaunchConfiguration('rviz_frame')
    rviz_config_file_launch_arg = LaunchConfiguration('rviz_config_file')
    world_filepath_launch_arg = LaunchConfiguration('world_filepath')
    robot_description_launch_arg = LaunchConfiguration('robot_description')
    hardware_type_launch_arg = LaunchConfiguration('hardware_type')
    show_ar_tag_launch_arg = LaunchConfiguration('show_ar_tag')

    # sets use_sim_time parameter to 'true' if using gazebo hardware
    use_sim_time_param = determine_use_sim_time_param(
        context=context,
        hardware_type_launch_arg=hardware_type_launch_arg
    )

   
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
    
    planning_scene_monitor_parameters = {
        'publish_planning_scene': True,
        'publish_geometry_updates': True,
        'publish_state_updates': True,
        'publish_transforms_updates': True,
        'publish_robot_description' : True ,
        'publish_robot_description_semantic' : True 
    }
    
    
    kinematic_parameter = { 'interbotix_arm.kinematics_solver' : 'lma_kinematics_plugin/LMAKinematicsPlugin' }

    move_group_node = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        output="screen",
        parameters=[moveit_config.to_dict(), {"use_sim_time": use_sim_time_param} ,planning_scene_monitor_parameters, kinematic_parameter],
        remappings=[
            ('/joint_states', '/rx150/joint_states'),
              (
            f'{robot_name_launch_arg.perform(context)}/get_planning_scene',
            f'/{robot_name_launch_arg.perform(context)}/get_planning_scene'
              ),
              (
            '/arm_controller/follow_joint_trajectory',
            f'/{robot_name_launch_arg.perform(context)}/arm_controller/follow_joint_trajectory'
              ),
            (
            '/gripper_controller/follow_joint_trajectory',
            f'/{robot_name_launch_arg.perform(context)}/gripper_controller/follow_joint_trajectory'
             ),
        ],
        arguments=["--ros-args", "--log-level", "info" ],
    ) 
#,"--params-file", "/home/malik/interbotix_moveit/move_group_config_correct.yaml"    
  
  

    moveit_rviz_node = Node(
        condition=IfCondition(use_moveit_rviz_launch_arg),
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        # namespace=robot_name_launch_arg,
        arguments=[
            '-d', rviz_config_file_launch_arg,
            '-f', rviz_frame_launch_arg,
        ],
        parameters=[
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.planning_pipelines,
            moveit_config.robot_description_kinematics,
            {'use_sim_time': use_sim_time_param},
        ],
        remappings=[
            ('/joint_states', '/rx150/joint_states')
        ],
        output={'both': 'log'},
    )




    xsarm_ros_control_launch_include = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare('interbotix_xsarm_ros_control'),
                'launch',
                'xsarm_ros_control.launch.py'
            ])
        ]),
        launch_arguments={
            'robot_model': robot_model_launch_arg,
            'robot_name': robot_name_launch_arg,
            'show_ar_tag': show_ar_tag_launch_arg,
            'show_gripper_bar': 'true',
            'show_gripper_fingers': 'true',
            'use_rviz': 'false',
            'mode_configs': mode_configs_launch_arg,
            'hardware_type': hardware_type_launch_arg,
            'robot_description': robot_description_launch_arg,
            'use_sim_time': use_sim_time_param,
        }.items(),
        condition=IfCondition(
            PythonExpression(
                ['"', hardware_type_launch_arg, '"', " in ('actual', 'fake')"]
            )
        ),
    )

    xsarm_gz_classic_launch_include = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare('interbotix_xsarm_sim'),
                'launch',
                'xsarm_gz_classic.launch.py'
            ])
        ]),
        launch_arguments={
	    'robot_model': robot_model_launch_arg,
            'robot_name': robot_name_launch_arg,
            'show_ar_tag': show_ar_tag_launch_arg,
            'show_gripper_bar': 'true',
            'show_gripper_fingers': 'true',
            'use_rviz': 'false',
            'world_filepath': world_filepath_launch_arg,
            'hardware_type': hardware_type_launch_arg,
            'robot_description': robot_description_launch_arg,
            'use_sim_time': use_sim_time_param,
        }.items(),
        condition=LaunchConfigurationEquals(
            launch_configuration_name='hardware_type',
            expected_value='gz_classic'
        ),
    )

    return [
        move_group_node,
        moveit_rviz_node,
        xsarm_ros_control_launch_include,
        xsarm_gz_classic_launch_include,
    ]








def generate_launch_description():
    declared_arguments = []
    
    declared_arguments.append(
        DeclareLaunchArgument(
            'robot_model',
            choices=get_interbotix_xsarm_models(),
            default_value='rx150',
            description='model type of the Interbotix Arm such as `wx200` or `rx150`.',
        )
    )

    declared_arguments.append(
        DeclareLaunchArgument(
            'robot_name',
            default_value='rx150',
            description=(
                'name of the robot (typically equal to ``, but could be anything).'
            ),
        )
    )

    declared_arguments.append(
        DeclareLaunchArgument(
            'external_srdf_loc',
            default_value=TextSubstitution(text=''),
            description=(
                'the file path to the custom semantic description file that you would like to '
                "include in the Interbotix robot's semantic description."
            ),
        )
    )


    declared_arguments.append(
        DeclareLaunchArgument(
            'mode_configs',
            default_value=PathJoinSubstitution([
                FindPackageShare('interbotix_xsarm_moveit'),
                'config',
                'modes.yaml',
            ]),
            description="the file path to the 'mode config' YAML file.",
        )
    )

    declared_arguments.append(
        DeclareLaunchArgument(
            'use_moveit_rviz',
            default_value='true',
            choices=('true', 'false'),
            description="launches RViz with MoveIt's RViz configuration/",
        )
    )
    
    declared_arguments.append(
        DeclareLaunchArgument(
            'rviz_frame',
            default_value='world',
            description=(
                'defines the fixed frame parameter in RViz. Note that if `use_world_frame` is '
                '`false`, this parameter should be changed to a frame that exists.'
            ),
        )
    )
    
    declared_arguments.append(
        DeclareLaunchArgument(
            'rviz_config_file',
            default_value=PathJoinSubstitution([
                FindPackageShare('interbotix_xsarm_moveit'),
                'rviz',
                'xsarm_moveit.rviz'
            ]),
            description='file path to the config file RViz should load.',
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            'world_filepath',
            default_value=PathJoinSubstitution([
                FindPackageShare('interbotix_common_sim'),
                'worlds',
                'interbotix.world',
            ]),
            description="the file path to the Gazebo 'world' file to load.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            choices=('true', 'false'),
            description=(
                'tells ROS nodes asking for time to get the Gazebo-published simulation time, '
                'published over the ROS topic /clock; this value is automatically set to `true` if'
                ' using Gazebo hardware.'
            )
        )
    )
    declared_arguments.extend(
        declare_interbotix_xsarm_robot_description_launch_arguments(
            show_gripper_bar='true',
            show_gripper_fingers='true',
            hardware_type='actual',
        )
    )

    return LaunchDescription(declared_arguments + [OpaqueFunction(function=launch_setup)])
