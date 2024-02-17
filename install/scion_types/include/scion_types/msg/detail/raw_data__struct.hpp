// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from scion_types:msg/RawData.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__RAW_DATA__STRUCT_HPP_
#define SCION_TYPES__MSG__DETAIL__RAW_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__scion_types__msg__RawData __attribute__((deprecated))
#else
# define DEPRECATED__scion_types__msg__RawData __declspec(deprecated)
#endif

namespace scion_types
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RawData_
{
  using Type = RawData_<ContainerAllocator>;

  explicit RawData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device = "";
      this->value = 0.0f;
      this->datatype = 0l;
      this->format = "";
    }
  }

  explicit RawData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : device(_alloc),
    format(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device = "";
      this->value = 0.0f;
      this->datatype = 0l;
      this->format = "";
    }
  }

  // field types and members
  using _device_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _device_type device;
  using _value_type =
    float;
  _value_type value;
  using _datatype_type =
    int32_t;
  _datatype_type datatype;
  using _format_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _format_type format;

  // setters for named parameter idiom
  Type & set__device(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->device = _arg;
    return *this;
  }
  Type & set__value(
    const float & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__datatype(
    const int32_t & _arg)
  {
    this->datatype = _arg;
    return *this;
  }
  Type & set__format(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->format = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scion_types::msg::RawData_<ContainerAllocator> *;
  using ConstRawPtr =
    const scion_types::msg::RawData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scion_types::msg::RawData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scion_types::msg::RawData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scion_types::msg::RawData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scion_types::msg::RawData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scion_types::msg::RawData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scion_types::msg::RawData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scion_types::msg::RawData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scion_types::msg::RawData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scion_types__msg__RawData
    std::shared_ptr<scion_types::msg::RawData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scion_types__msg__RawData
    std::shared_ptr<scion_types::msg::RawData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RawData_ & other) const
  {
    if (this->device != other.device) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->datatype != other.datatype) {
      return false;
    }
    if (this->format != other.format) {
      return false;
    }
    return true;
  }
  bool operator!=(const RawData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RawData_

// alias to use template instance with default allocator
using RawData =
  scion_types::msg::RawData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace scion_types

#endif  // SCION_TYPES__MSG__DETAIL__RAW_DATA__STRUCT_HPP_
