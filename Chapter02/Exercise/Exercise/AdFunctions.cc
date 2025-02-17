#include <cmath>
#include <cstdint>
#include <iostream>

#include "AdConstants.h"
#include "AdFunctions.h"

namespace Ad{
    namespace Utils{
        float kph_to_mps(const float kph){
            return kph / 3.6F;
        }
    }
    namespace Data{
        Ad::Types::VehicleType init_ego_vehicle(){
            Ad::Types::VehicleType ego_car{
                .ID = Ad::Constants::EGO_VEHICLE_ID,
                .Lane = Ad::Types::LaneAssociationType::Center,
                .Speed = Ad::Utils::kph_to_mps(135.0F),
                .Distance = 0.0F
            };

            return ego_car;
        }
    }

    namespace Visualize{
        void print_vehicle(const Ad::Types::VehicleType vehicle){
            std::cout << "ID: " << vehicle.ID << '\n';
        std::cout << "Speed (m/s): " << vehicle.Speed << '\n';
        std::cout << "Distance (m): " << vehicle.Distance << '\n';
        std::cout << "Lane: " << static_cast<std::int32_t>(vehicle.Lane) << '\n';
        }
    }
}
