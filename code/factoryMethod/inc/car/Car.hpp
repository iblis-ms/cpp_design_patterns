/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>
#include "Vehicle.hpp"

struct CCar : public IVehicle
{
    
    virtual void startEngine()
    {
        std::cout<<"Car: start engine\n";
    }
    
    virtual void stopEngine()
    {
        std::cout<<"Car: stop engine\n";
    }
    
    virtual unsigned int getNumberOfWheels() const
    {
        return 4U;
    }
    
};

#endif // CAR_HPP
