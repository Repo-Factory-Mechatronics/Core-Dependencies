#ifndef PUBLIC_SERVICE_APIS_H
#define PUBLIC_SERVICE_APIS_H

#include "custom_ros_types.hpp"
#include "custom_data_types.hpp"

namespace ServiceAPIs
{
    /* auto-gen*/
    RTL::send_frame_response_t SendFrame(const RTL::node_t& node, const RTL::send_frame_client_t& client, const RTL::SendFrameRequest& request);
};

#endif
