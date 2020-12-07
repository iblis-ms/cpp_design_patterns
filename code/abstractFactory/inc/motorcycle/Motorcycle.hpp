/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef MOTORCYCLE_HPP
#define MOTORCYCLE_HPP

#include <iostream>
#include "Vehicle.hpp"

struct CMotorcycle : public IVehicle
{
    virtual void startEngine()
    {
        std::cout<<"Motorcycle: start engine\n";
    }
    
    virtual void stopEngine()
    {
        std::cout<<"Motorcycle: stop engine\n";
    }
    
    virtual unsigned int getNumberOfWheels() const
    {
        return 2U;
    } 
    
};

#endif // MOTORCYCLE_HPP
