from launch import LaunchDescription
from launch_ros.actions import Node
from moveit_configs_utils import MoveItConfigsBuilder
from launch_param_builder import ParameterBuilder


def generate_launch_description():

    moveit_ros_benchmarks_config = (
        ParameterBuilder("emse_rx150_benchmarks")
        .yaml(
            parameter_namespace="benchmark_config",
            file_path="ompl_benchmark_rx150.yaml",
        )
        .to_dict()
    )

    moveit_config = (
        MoveItConfigsBuilder("emse_rx150")
        .robot_description(
            file_path="config/rx150.urdf.xacro" )
        
        .robot_description_semantic(file_path="config/srdf/rx150.srdf")
        .trajectory_execution(file_path="config/moveit_controllers.yaml")
        .robot_description_kinematics(file_path="config/kinematics.yaml")
        .planning_pipelines("ompl", ["ompl", "pilz_industrial_motion_planner"])
        .sensors_3d(file_path="config/sensors_3d.yaml")
        .to_moveit_configs()
    )


    warehouse_ros_config = {
        "warehouse_plugin": "warehouse_ros_sqlite::DatabaseConnection", # needed to use sqlite instead of mongodb
        # "warehouse_host": "localhost"  # not needed because host and port are set in benchmark_config
    }

    ompl_planning_pipeline_config = {
        "planning_plugin": "ompl_interface/OMPLPlanner",    # currently a workaround for the Error: Multiple planning plugins available. You should specify the '~planning_plugin' parameter. Using 'chomp_interface/CHOMPPlanner' for now.
    }

    # moveit_ros_benchmark demo executable
    moveit_ros_benchmarks_node = Node(
        name="moveit_run_benchmark",
        package="emse_rx150_benchmarks",
        # prefix='xterm -e gdb --ex=run --args',
        executable="moveit_run_benchmark",
        output="screen",
        parameters=[
            moveit_ros_benchmarks_config,
            moveit_config.to_dict(),
            warehouse_ros_config,
            ompl_planning_pipeline_config,
        ],
    )


    return LaunchDescription([moveit_ros_benchmarks_node]) #, mongodb_server_node])
