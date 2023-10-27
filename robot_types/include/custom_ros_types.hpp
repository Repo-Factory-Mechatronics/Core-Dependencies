#ifndef ROBOT_INTERFACE_H
#define ROBOT_INTERFACE_H

#include "rclcpp/rclcpp.hpp"
#include "custom_data_types.hpp"
#include "scion_types/srv/send_frame.hpp"
#include "scion_types/msg/datapoint.hpp"
#include "scion_types/msg/sub_state.hpp"

namespace RTL   // RobotTypeLibrary
{
    /* General ROS Types */
    typedef rclcpp::Node::SharedPtr                                                         node_t;
    typedef rclcpp::TimerBase::SharedPtr                                                    ros_timer_t;

    /* Clients  */
    typedef rclcpp::Client<scion_types::srv::SendFrame>::SharedPtr                          send_frame_client_t;

    /* Services */
    typedef rclcpp::Service<scion_types::srv::SendFrame>::SharedPtr                         send_frame_service_t;

    /* Subscriptions */
    typedef rclcpp::Subscription<scion_types::msg::Datapoint>::SharedPtr                    datapoint_sub_t;
    typedef rclcpp::Subscription<scion_types::msg::SubState>::SharedPtr                     sub_state_sub_t;

    /* Publishers */
    typedef rclcpp::Publisher<scion_types::msg::Datapoint>::SharedPtr                       datapoint_pub_t;
    typedef rclcpp::Publisher<scion_types::msg::SubState>::SharedPtr                        sub_state_pub_t;
    
    /* Requests/Responses */
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    typedef std::shared_ptr<scion_types::srv::SendFrame::Request>                           send_frame_request_t;
    typedef std::shared_ptr<scion_types::srv::SendFrame::Response>                          send_frame_response_t;
    typedef rclcpp::Client<scion_types::srv::SendFrame>::SharedFuture                       send_frame_future_t;
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

#endif
