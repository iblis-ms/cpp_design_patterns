/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include "Owner.hpp"

class IVehicle 
{
    
protected:

    IOwner& mOwner;
    
public:
    
    IVehicle(IOwner& aOwner)
    : mOwner(aOwner)
    {}

    virtual ~IVehicle() = default;
    
    virtual void printInfo() const = 0; 

};

#endif // VEHICLE_HPP
