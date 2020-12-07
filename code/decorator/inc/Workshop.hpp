/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef WORKSHOP_HPP_
#define WORKSHOP_HPP_

#include "Vehicle.hpp"

struct CWorkshop
{

    void checkLights(IVehicle& aVehicle)
    {
        aVehicle.checkLights();
    }

};

#endif // WORKSHOP_HPP_
