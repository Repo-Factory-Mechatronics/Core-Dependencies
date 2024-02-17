// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from scion_types:msg/SubState.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__SUB_STATE__STRUCT_HPP_
#define SCION_TYPES__MSG__DETAIL__SUB_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__scion_types__msg__SubState __attribute__((deprecated))
#else
# define DEPRECATED__scion_types__msg__SubState __declspec(deprecated)
#endif

namespace scion_types
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SubState_
{
  using Type = SubState_<ContainerAllocator>;

  explicit SubState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->shutdown = 0;
      this->leak_detect = 0;
      this->host_mode = 0;
    }
  }

  explicit SubState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->shutdown = 0;
      this->leak_detect = 0;
      this->host_mode = 0;
    }
  }

  // field types and members
  using _shutdown_type =
    uint8_t;
  _shutdown_type shutdown;
  using _leak_detect_type =
    uint8_t;
  _leak_detect_type leak_detect;
  using _host_mode_type =
    uint8_t;
  _host_mode_type host_mode;

  // setters for named parameter idiom
  Type & set__shutdown(
    const uint8_t & _arg)
  {
    this->shutdown = _arg;
    return *this;
  }
  Type & set__leak_detect(
    const uint8_t & _arg)
  {
    this->leak_detect = _arg;
    return *this;
  }
  Type & set__host_mode(
    const uint8_t & _arg)
  {
    this->host_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scion_types::msg::SubState_<ContainerAllocator> *;
  using ConstRawPtr =
    const scion_types::msg::SubState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scion_types::msg::SubState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scion_types::msg::SubState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scion_types::msg::SubState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scion_types::msg::SubState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scion_types::msg::SubState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scion_types::msg::SubState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scion_types::msg::SubState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scion_types::msg::SubState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scion_types__msg__SubState
    std::shared_ptr<scion_types::msg::SubState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scion_types__msg__SubState
    std::shared_ptr<scion_types::msg::SubState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SubState_ & other) const
  {
    if (this->shutdown != other.shutdown) {
      return false;
    }
    if (this->leak_detect != other.leak_detect) {
      return false;
    }
    if (this->host_mode != other.host_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const SubState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SubState_

// alias to use template instance with default allocator
using SubState =
  scion_types::msg::SubState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace scion_types

#endif  // SCION_TYPES__MSG__DETAIL__SUB_STATE__STRUCT_HPP_
