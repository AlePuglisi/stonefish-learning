cmake_minimum_required(VERSION 3.8)
project(sensor_processing)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED) 
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED)

# define executable
# add_executable(sonar_optical_flow_node 
#   src/sonar_optical_flow_node.cpp
# )
# target_include_directories(sonar_optical_flow_node PUBLIC
#     $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#     $<INSTALL_INTERFACE:include>
# )
# target_link_libraries(sonar_optical_flow_node PRIVATE
#     ${OpenCV_LIBS} 
# )
# ament_target_dependencies(sonar_optical_flow_node PUBLIC
#   rclcpp
#   std_msgs
# )

# add directories
install(DIRECTORY launch DESTINATION share/${PROJECT_NAME})

# add python executable
install(PROGRAMS 
            scripts/imaging_sonar_optical_flow.py
        DESTINATION lib/${PROJECT_NAME})
ament_python_install_package(${PROJECT_NAME})

# install executable
# install(TARGETS sonar_optical_flow_node DESTINATION lib/${PROJECT_NAME})
# install(TARGETS <exec-name> DESTINATION lib/${PROJECT_NAME})

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
