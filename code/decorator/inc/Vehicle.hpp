/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef VEHICLE_HPP
#define VEHICLE_HPP

struct IVehicle 
{
    
    virtual ~IVehicle() = default;
    
    virtual void checkLights() = 0;

};

#endif // VEHICLE_HPP
