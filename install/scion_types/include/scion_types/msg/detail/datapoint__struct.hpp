// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from scion_types:msg/Datapoint.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__DATAPOINT__STRUCT_HPP_
#define SCION_TYPES__MSG__DETAIL__DATAPOINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__scion_types__msg__Datapoint __attribute__((deprecated))
#else
# define DEPRECATED__scion_types__msg__Datapoint __declspec(deprecated)
#endif

namespace scion_types
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Datapoint_
{
  using Type = Datapoint_<ContainerAllocator>;

  explicit Datapoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0.0f;
    }
  }

  explicit Datapoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0.0f;
    }
  }

  // field types and members
  using _data_type =
    float;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const float & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scion_types::msg::Datapoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const scion_types::msg::Datapoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scion_types::msg::Datapoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scion_types::msg::Datapoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scion_types::msg::Datapoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scion_types::msg::Datapoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scion_types::msg::Datapoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scion_types::msg::Datapoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scion_types::msg::Datapoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scion_types::msg::Datapoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scion_types__msg__Datapoint
    std::shared_ptr<scion_types::msg::Datapoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scion_types__msg__Datapoint
    std::shared_ptr<scion_types::msg::Datapoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Datapoint_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Datapoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Datapoint_

// alias to use template instance with default allocator
using Datapoint =
  scion_types::msg::Datapoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace scion_types

#endif  // SCION_TYPES__MSG__DETAIL__DATAPOINT__STRUCT_HPP_
