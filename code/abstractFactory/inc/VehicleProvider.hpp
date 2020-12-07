/*
 * Author: Marcin Serwach
 * License: MIT
 */
 
#ifndef VEHICLE_PROVIDER_HPP
#define VEHICLE_PROVIDER_HPP

#include <memory>
#include "VehicleCreator.hpp"

struct CVehicleProvider
{
    enum class EVehicleType
    {
        ECAR, EMOTORCYCLE
    };
    
    std::shared_ptr<IVehicleCreator> getCreator(EVehicleType aType);
};

#endif // VEHICLE_PROVIDER_HPP
