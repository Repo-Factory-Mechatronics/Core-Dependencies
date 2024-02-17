// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from scion_types:srv/CanCommand.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__SRV__DETAIL__CAN_COMMAND__STRUCT_HPP_
#define SCION_TYPES__SRV__DETAIL__CAN_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__scion_types__srv__CanCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__scion_types__srv__CanCommand_Request __declspec(deprecated)
#endif

namespace scion_types
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CanCommand_Request_
{
  using Type = CanCommand_Request_<ContainerAllocator>;

  explicit CanCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->device = 0;
      this->topic = 0;
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  explicit CanCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->device = 0;
      this->topic = 0;
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  // field types and members
  using _command_type =
    int16_t;
  _command_type command;
  using _device_type =
    int16_t;
  _device_type device;
  using _topic_type =
    int16_t;
  _topic_type topic;
  using _data_type =
    std::array<uint8_t, 4>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__command(
    const int16_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__device(
    const int16_t & _arg)
  {
    this->device = _arg;
    return *this;
  }
  Type & set__topic(
    const int16_t & _arg)
  {
    this->topic = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<uint8_t, 4> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scion_types::srv::CanCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const scion_types::srv::CanCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scion_types::srv::CanCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scion_types::srv::CanCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scion_types::srv::CanCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scion_types::srv::CanCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scion_types::srv::CanCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scion_types::srv::CanCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scion_types::srv::CanCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scion_types::srv::CanCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scion_types__srv__CanCommand_Request
    std::shared_ptr<scion_types::srv::CanCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scion_types__srv__CanCommand_Request
    std::shared_ptr<scion_types::srv::CanCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanCommand_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->device != other.device) {
      return false;
    }
    if (this->topic != other.topic) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanCommand_Request_

// alias to use template instance with default allocator
using CanCommand_Request =
  scion_types::srv::CanCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace scion_types


#ifndef _WIN32
# define DEPRECATED__scion_types__srv__CanCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__scion_types__srv__CanCommand_Response __declspec(deprecated)
#endif

namespace scion_types
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CanCommand_Response_
{
  using Type = CanCommand_Response_<ContainerAllocator>;

  explicit CanCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit CanCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scion_types::srv::CanCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const scion_types::srv::CanCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scion_types::srv::CanCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scion_types::srv::CanCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scion_types::srv::CanCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scion_types::srv::CanCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scion_types::srv::CanCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scion_types::srv::CanCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scion_types::srv::CanCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scion_types::srv::CanCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scion_types__srv__CanCommand_Response
    std::shared_ptr<scion_types::srv::CanCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scion_types__srv__CanCommand_Response
    std::shared_ptr<scion_types::srv::CanCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanCommand_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanCommand_Response_

// alias to use template instance with default allocator
using CanCommand_Response =
  scion_types::srv::CanCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace scion_types

namespace scion_types
{

namespace srv
{

struct CanCommand
{
  using Request = scion_types::srv::CanCommand_Request;
  using Response = scion_types::srv::CanCommand_Response;
};

}  // namespace srv

}  // namespace scion_types

#endif  // SCION_TYPES__SRV__DETAIL__CAN_COMMAND__STRUCT_HPP_
