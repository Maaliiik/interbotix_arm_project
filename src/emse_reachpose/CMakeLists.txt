cmake_minimum_required(VERSION 3.8)
project(emse_reachpose)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(rclcpp REQUIRED)
find_package(moveit_core REQUIRED)
find_package(moveit_ros_planning REQUIRED)
find_package(rcl_interfaces REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(moveit_msgs REQUIRED)
find_package(moveit REQUIRED)
find_package(emse_moveit_actions REQUIRED)

# Include generated headers
include_directories(${CMAKE_CURRENT_BINARY_DIR}/rosidl_generator_cpp)

# Add executables and link against dependencies
add_executable(reachpose src/reachpose.cpp)
ament_target_dependencies(reachpose
  "moveit_ros_planning_interface"
  "rclcpp"
  "rcl_interfaces"
)
target_include_directories(reachpose PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

add_executable(reach_pose src/reach_pose.cpp)
ament_target_dependencies(reach_pose
  "moveit_ros_planning_interface"
  "rclcpp"
  "rcl_interfaces"
)
target_include_directories(reach_pose PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

add_executable(plan_pose src/reachpose_action_server.cpp)
ament_target_dependencies(plan_pose
  "moveit_ros_planning_interface"
  "rclcpp"
  "rclcpp_action"
  "geometry_msgs"
  "moveit_msgs"
  "moveit"
  "emse_moveit_actions"
)
target_include_directories(plan_pose PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)


install(TARGETS reachpose reach_pose plan_pose
  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

