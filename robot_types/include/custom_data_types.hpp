#ifndef STRUCT_TYPES_H
#define STRUCT_TYPES_H
#define CAN_DATA_SIZE 8 // BYTES

namespace RTL
{
    struct SendFrameRequest
    {
        int32_t can_id;
        int8_t can_dlc;
        int8_t status;
        uint8_t can_data[];
    };
}

#endif