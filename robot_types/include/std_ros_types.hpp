#include "std_srvs/srv/trigger.hpp"
#include "std_srvs/srv/set_bool.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "std_msgs/msg/int32.hpp"
#include "std_msgs/msg/string.hpp"

namespace RTL
{
    typedef rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr                           int_sub_t;
    typedef rclcpp::Subscription<std_msgs::msg::String>::SharedPtr                          string_sub_t;

    typedef rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr                              int_pub_t;
    typedef rclcpp::Publisher<std_msgs::msg::String>::SharedPtr                             string_pub_t;

    typedef rclcpp::Client<std_srvs::srv::Trigger>::SharedPtr                               ros_trigger_client_t;
    typedef rclcpp::Client<std_srvs::srv::SetBool>::SharedPtr                               ros_bool_client_t;
    typedef rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr                              ros_trigger_service_t;

    typedef rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr                              ros_bool_service_t;
    typedef std::shared_ptr<std_srvs::srv::Trigger::Request>                                trigger_request_t;
    typedef std::shared_ptr<std_srvs::srv::Trigger::Response>                               trigger_response_t;    
}
