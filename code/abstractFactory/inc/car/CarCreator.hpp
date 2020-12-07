/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef CAR_CREATOR_HPP
#define CAR_CREATOR_HPP

#include "VehicleCreator.hpp"
#include "Car.hpp"

struct CCarCreator : public IVehicleCreator
{

    virtual std::shared_ptr<IVehicle> create() override
    {
        return std::make_shared<CCar>();
    }

};

#endif // CAR_CREATOR_HPP
