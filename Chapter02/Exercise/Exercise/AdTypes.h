#pragma once

#include <cstdint>

#include "AdConstants.h"

namespace Ad{
    namespace Types{
        enum class LaneAssociationType{
            Unknown,
            Left,
            Right,
            Center,
        };

        struct VehicleType{
            std::int32_t ID;
            Ad::Types::LaneAssociationType Lane;
            float Speed;
            float Distance;
        };
    }
}
