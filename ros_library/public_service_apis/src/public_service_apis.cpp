#include "public_service_apis.hpp"
/* 
 * Two methods
 * Either you have three nodes, and you spin until future 
 * Or you have two nodes and you do an async callback to keep spinning
 * Can't do method two inside of a function, as function will return before callback and it will go out of scope
 */ 

using namespace RTL; // Robot Type Library

namespace
{
    template<typename clientType>
    bool validateService(const clientType client)
    {
        while (!client->wait_for_service(std::chrono::milliseconds(10))) {
            if (!rclcpp::ok())
                return false;
        }
        return true;
    }

    template<typename responseType, typename futureType, typename clientType>
    responseType makeServiceCall(const node_t& node, const clientType& client, const std::function<futureType()> makeRequest)
    {
        if(!validateService(client))
            return nullptr;
        auto future = makeRequest();
        rclcpp::spin_until_future_complete(node, future);
        return future.get();
    }
}

/* auto-gen */
send_frame_response_t ServiceAPIs::SendFrame(const node_t& node, const send_frame_client_t& client, const SendFrameRequest& request)
{
    return makeServiceCall<send_frame_response_t, send_frame_future_t>(node, client, [&]() {
        auto send_frame_request = std::make_shared<scion_types::srv::SendFrame::Request>();
        send_frame_request->can_id = request.can_id;
        send_frame_request->can_dlc = request.can_dlc;
        std::copy
        (
            request.can_data,
            request.can_data + request.can_dlc,
            send_frame_request->can_data.begin()
        );
        return client->async_send_request(send_frame_request).share();
    });
}
