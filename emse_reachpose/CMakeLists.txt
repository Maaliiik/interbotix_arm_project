cmake_minimum_required(VERSION 3.8)
project(emse_reachpose)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(rclcpp REQUIRED)
find_package(moveit_core REQUIRED)
find_package(moveit_ros_planning REQUIRED)


add_executable(reachpose src/reachpose.cpp)
target_include_directories(reachpose PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(reachpose PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
  reachpose
  "moveit_ros_planning_interface"
  "rclcpp"
)



add_executable(reachjointconfig src/reachjointconfig.cpp)
target_include_directories(reachjointconfig PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(reachjointconfig PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
  reachjointconfig
  "moveit_ros_planning_interface"
  "rclcpp"
  "moveit_ros_planning"
  "moveit_core"
)



install(TARGETS reachpose reachjointconfig
  DESTINATION lib/${PROJECT_NAME})
  
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
