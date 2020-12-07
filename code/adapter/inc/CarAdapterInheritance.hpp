/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef CAR_ADAPTER_INHERITANCE_HPP_
#define CAR_ADAPTER_INHERITANCE_HPP_

#include "Car.hpp"
#include "Motorcycle.hpp"

struct CCarAdapterInheritance : public CCar, public IMotorcycle
{

    void changeFrontLight() override
    {
        changFrontLeftLight();
        changFrontRightLight();
    }
    
};

#endif // CAR_ADAPTER_INHERITANCE_HPP_
