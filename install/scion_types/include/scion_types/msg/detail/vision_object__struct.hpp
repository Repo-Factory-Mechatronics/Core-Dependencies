// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from scion_types:msg/VisionObject.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__VISION_OBJECT__STRUCT_HPP_
#define SCION_TYPES__MSG__DETAIL__VISION_OBJECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__scion_types__msg__VisionObject __attribute__((deprecated))
#else
# define DEPRECATED__scion_types__msg__VisionObject __declspec(deprecated)
#endif

namespace scion_types
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VisionObject_
{
  using Type = VisionObject_<ContainerAllocator>;

  explicit VisionObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_name = "";
      this->distance = 0.0f;
    }
  }

  explicit VisionObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_name = "";
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _object_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _object_name_type object_name;
  using _distance_type =
    float;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__object_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->object_name = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scion_types::msg::VisionObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const scion_types::msg::VisionObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scion_types::msg::VisionObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scion_types::msg::VisionObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scion_types::msg::VisionObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scion_types::msg::VisionObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scion_types::msg::VisionObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scion_types::msg::VisionObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scion_types::msg::VisionObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scion_types::msg::VisionObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scion_types__msg__VisionObject
    std::shared_ptr<scion_types::msg::VisionObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scion_types__msg__VisionObject
    std::shared_ptr<scion_types::msg::VisionObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisionObject_ & other) const
  {
    if (this->object_name != other.object_name) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisionObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisionObject_

// alias to use template instance with default allocator
using VisionObject =
  scion_types::msg::VisionObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace scion_types

#endif  // SCION_TYPES__MSG__DETAIL__VISION_OBJECT__STRUCT_HPP_
