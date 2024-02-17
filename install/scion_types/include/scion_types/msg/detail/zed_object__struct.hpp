// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from scion_types:msg/ZedObject.idl
// generated code does not contain a copyright notice

#ifndef SCION_TYPES__MSG__DETAIL__ZED_OBJECT__STRUCT_HPP_
#define SCION_TYPES__MSG__DETAIL__ZED_OBJECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'corners'
#include "scion_types/msg/detail/keypoint2_di__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__scion_types__msg__ZedObject __attribute__((deprecated))
#else
# define DEPRECATED__scion_types__msg__ZedObject __declspec(deprecated)
#endif

namespace scion_types
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ZedObject_
{
  using Type = ZedObject_<ContainerAllocator>;

  explicit ZedObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->label_id = 0;
      this->sublabel = "";
      this->confidence = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->position_covariance.begin(), this->position_covariance.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->velocity.begin(), this->velocity.end(), 0.0f);
      this->tracking_available = false;
      this->tracking_state = 0;
      this->action_state = 0;
      std::fill<typename std::array<float, 3>::iterator, float>(this->dimensions_3d.begin(), this->dimensions_3d.end(), 0.0f);
      this->corners.fill(scion_types::msg::Keypoint2Di_<ContainerAllocator>{_init});
    }
  }

  explicit ZedObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc),
    sublabel(_alloc),
    position(_alloc),
    position_covariance(_alloc),
    velocity(_alloc),
    dimensions_3d(_alloc),
    corners(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->label_id = 0;
      this->sublabel = "";
      this->confidence = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->position_covariance.begin(), this->position_covariance.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->velocity.begin(), this->velocity.end(), 0.0f);
      this->tracking_available = false;
      this->tracking_state = 0;
      this->action_state = 0;
      std::fill<typename std::array<float, 3>::iterator, float>(this->dimensions_3d.begin(), this->dimensions_3d.end(), 0.0f);
      this->corners.fill(scion_types::msg::Keypoint2Di_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _label_type label;
  using _label_id_type =
    int16_t;
  _label_id_type label_id;
  using _sublabel_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _sublabel_type sublabel;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _position_type =
    std::array<float, 3>;
  _position_type position;
  using _position_covariance_type =
    std::array<float, 6>;
  _position_covariance_type position_covariance;
  using _velocity_type =
    std::array<float, 3>;
  _velocity_type velocity;
  using _tracking_available_type =
    bool;
  _tracking_available_type tracking_available;
  using _tracking_state_type =
    int8_t;
  _tracking_state_type tracking_state;
  using _action_state_type =
    int8_t;
  _action_state_type action_state;
  using _dimensions_3d_type =
    std::array<float, 3>;
  _dimensions_3d_type dimensions_3d;
  using _corners_type =
    std::array<scion_types::msg::Keypoint2Di_<ContainerAllocator>, 4>;
  _corners_type corners;

  // setters for named parameter idiom
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__label_id(
    const int16_t & _arg)
  {
    this->label_id = _arg;
    return *this;
  }
  Type & set__sublabel(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->sublabel = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__position(
    const std::array<float, 3> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__position_covariance(
    const std::array<float, 6> & _arg)
  {
    this->position_covariance = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::array<float, 3> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__tracking_available(
    const bool & _arg)
  {
    this->tracking_available = _arg;
    return *this;
  }
  Type & set__tracking_state(
    const int8_t & _arg)
  {
    this->tracking_state = _arg;
    return *this;
  }
  Type & set__action_state(
    const int8_t & _arg)
  {
    this->action_state = _arg;
    return *this;
  }
  Type & set__dimensions_3d(
    const std::array<float, 3> & _arg)
  {
    this->dimensions_3d = _arg;
    return *this;
  }
  Type & set__corners(
    const std::array<scion_types::msg::Keypoint2Di_<ContainerAllocator>, 4> & _arg)
  {
    this->corners = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    scion_types::msg::ZedObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const scion_types::msg::ZedObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<scion_types::msg::ZedObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<scion_types::msg::ZedObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      scion_types::msg::ZedObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<scion_types::msg::ZedObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      scion_types::msg::ZedObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<scion_types::msg::ZedObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<scion_types::msg::ZedObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<scion_types::msg::ZedObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__scion_types__msg__ZedObject
    std::shared_ptr<scion_types::msg::ZedObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__scion_types__msg__ZedObject
    std::shared_ptr<scion_types::msg::ZedObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ZedObject_ & other) const
  {
    if (this->label != other.label) {
      return false;
    }
    if (this->label_id != other.label_id) {
      return false;
    }
    if (this->sublabel != other.sublabel) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->position_covariance != other.position_covariance) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->tracking_available != other.tracking_available) {
      return false;
    }
    if (this->tracking_state != other.tracking_state) {
      return false;
    }
    if (this->action_state != other.action_state) {
      return false;
    }
    if (this->dimensions_3d != other.dimensions_3d) {
      return false;
    }
    if (this->corners != other.corners) {
      return false;
    }
    return true;
  }
  bool operator!=(const ZedObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ZedObject_

// alias to use template instance with default allocator
using ZedObject =
  scion_types::msg::ZedObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace scion_types

#endif  // SCION_TYPES__MSG__DETAIL__ZED_OBJECT__STRUCT_HPP_
