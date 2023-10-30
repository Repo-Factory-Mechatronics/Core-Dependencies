cmake_minimum_required(VERSION 3.5)
project(core_dependencies)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 20)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(scion_types REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_srvs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(shape_msgs REQUIRED)
find_package(std_msgs REQUIRED)

include_directories(${PROJECT_NAME} PRIVATE
    robot_types/include
    ros_library/message_publishing/include
    ros_library/public_service_apis/include
)
add_library(${PROJECT_NAME} SHARED 
    ros_library/public_service_apis/src/public_service_apis.cpp
)
install(TARGETS ${PROJECT_NAME} DESTINATION lib)

set(PUBLIC_HEADERS 
    ros_library/public_service_apis/include/public_service_apis.hpp
    robot_types/include/custom_ros_types.hpp
    robot_types/include/custom_data_types.hpp
    robot_types/include/std_ros_types.hpp        
)

install(FILES ${PUBLIC_HEADERS} DESTINATION include/robot_libraries)
ament_target_dependencies(${PROJECT_NAME} scion_types rclcpp std_srvs std_msgs sensor_msgs)

ament_package()