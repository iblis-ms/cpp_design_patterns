/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef CAR_HPP_
#define CAR_HPP_

#include "Vehicle.hpp"
#include <iostream>

struct CCar : public IVehicle
{

    virtual void checkLights()
    {
        std::cout<<"car lights are OK\n";
    }

};

#endif // CAR_HPP_
