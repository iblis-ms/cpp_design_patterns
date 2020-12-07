/*
 * Author: Marcin Serwach
 * License: MIT
 */
 
#ifndef VEHICLE_CREATOR_HPP
#define VEHICLE_CREATOR_HPP

#include <memory>
#include "Vehicle.hpp"

struct IVehicleCreator
{
    virtual ~IVehicleCreator() = default;
    
    virtual std::shared_ptr<IVehicle> create() = 0;
};

#endif // VEHICLE_CREATOR_HPP
