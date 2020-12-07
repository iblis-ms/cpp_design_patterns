/*
 * Author: Marcin Serwach
 * License: MIT
 */

#include "VehicleProvider.hpp"
#include "motorcycle/MotorcycleCreator.hpp"
#include "car/CarCreator.hpp"


std::shared_ptr<IVehicleCreator> CVehicleProvider::getCreator(EVehicleType aType)
{
    if (aType == EVehicleType::ECAR)
    {
        return std::make_shared<CCarCreator>();
    }
    else if (aType == EVehicleType::EMOTORCYCLE)
    {
        return std::make_shared<CMotorcycleCreator>();
    }
    else
    {
        return nullptr;
    }
}
