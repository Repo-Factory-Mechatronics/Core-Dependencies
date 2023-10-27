#ifndef STRUCT_TYPES_H
#define STRUCT_TYPES_H
#define CAN_DATA_SIZE 8 // BYTES
#include <array>

typedef uint8_t Byte; 
typedef std::array<Byte, CAN_DATA_SIZE> ByteArray;
namespace RTL
{
    struct SendFrameRequest
    {
        int32_t can_id;
        int8_t can_dlc;
        ByteArray can_data;
        int8_t status;
    };
}

#endif