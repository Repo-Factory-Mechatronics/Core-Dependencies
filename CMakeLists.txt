cmake_minimum_required(VERSION 3.5)
project(scion_types)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 20)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(shape_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(scion_types
  "msg/CanFrame.msg"
  "msg/Datapoint.msg"
  "msg/Idea.msg"
  "msg/Keypoint2Di.msg"
  "msg/PidTuning.msg"
  "msg/RawData.msg"
  "msg/SubState.msg"
  "msg/VisionObject.msg"
  "msg/ZedObject.msg"
  "srv/CanCommand.srv"
  "srv/SendFrame.srv"
)

ament_package()