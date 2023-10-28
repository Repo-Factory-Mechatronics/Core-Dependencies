#ifndef STRUCT_TYPES_H
#define STRUCT_TYPES_H
#define CAN_DATA_SIZE 8 // BYTES

#include <vector>

namespace RTL
{
    struct SendFrameRequest
    {
        const int32_t can_id;
        const int8_t can_dlc;
        const int8_t status;
        const std::vector<uint8_t> can_data;
    };
}

#endif