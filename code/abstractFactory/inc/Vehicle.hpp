/*
 * Author: Marcin Serwach
 * License: MIT
 */
 
#ifndef VEHICLE_HPP
#define VEHICLE_HPP

struct IVehicle 
{
    virtual ~IVehicle() = default;
    
    virtual void startEngine() = 0;
    
    virtual void stopEngine() = 0;
    
    virtual unsigned int getNumberOfWheels() const = 0;  
};

#endif // VEHICLE_HPP
