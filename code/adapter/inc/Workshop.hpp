/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef WORKSHOP_HPP_
#define WORKSHOP_HPP_

#include "Motorcycle.hpp"

struct CWorkshop
{

    void changeFrontLight(IMotorcycle& aMotorcycle)
    {
        aMotorcycle.changeFrontLight();
    }

};

#endif // WORKSHOP_HPP_
