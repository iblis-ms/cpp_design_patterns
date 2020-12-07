/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef MOTORCYCLE_CREATOR_HPP
#define MOTORCYCLE_CREATOR_HPP

#include <memory>
#include "Motorcycle.hpp"
#include "VehicleCreator.hpp"

struct CMotorcycleCreator : public IVehicleCreator
{
    
    virtual std::shared_ptr<IVehicle> create() override
    {
        return std::make_shared<CMotorcycle>();
    }

};

#endif // MOTORCYCLE_CREATOR_HPP
