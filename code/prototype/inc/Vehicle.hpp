/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <memory>

struct IVehicle
{
   
    virtual ~IVehicle() = default;
    
    virtual std::shared_ptr<IVehicle> clone() = 0;
    
    virtual void startEngine() = 0;
    
};

#endif // VEHICLE_HPP
