// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from scion_types:msg/Idea.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__IDEA__STRUCT_HPP_
#define SCION_TYPES__MSG__DETAIL__IDEA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__scion_types__msg__Idea __attribute__((deprecated))
#else
# define DEPRECATED__scion_types__msg__Idea __declspec(deprecated)
#endif

namespace scion_types
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Idea_
{
  using Type = Idea_<ContainerAllocator>;

  explicit Idea_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
    }
  }

  explicit Idea_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0l;
    }
  }

  // field types and members
  using _code_type =
    int32_t;
  _code_type code;
  using _parameters_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _parameters_type parameters;

  // setters for named parameter idiom
  Type & set__code(
    const int32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }
  Type & set__parameters(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->parameters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scion_types::msg::Idea_<ContainerAllocator> *;
  using ConstRawPtr =
    const scion_types::msg::Idea_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scion_types::msg::Idea_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scion_types::msg::Idea_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scion_types::msg::Idea_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scion_types::msg::Idea_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scion_types::msg::Idea_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scion_types::msg::Idea_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scion_types::msg::Idea_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scion_types::msg::Idea_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scion_types__msg__Idea
    std::shared_ptr<scion_types::msg::Idea_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scion_types__msg__Idea
    std::shared_ptr<scion_types::msg::Idea_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Idea_ & other) const
  {
    if (this->code != other.code) {
      return false;
    }
    if (this->parameters != other.parameters) {
      return false;
    }
    return true;
  }
  bool operator!=(const Idea_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Idea_

// alias to use template instance with default allocator
using Idea =
  scion_types::msg::Idea_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace scion_types

#endif  // SCION_TYPES__MSG__DETAIL__IDEA__STRUCT_HPP_
