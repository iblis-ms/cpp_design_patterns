/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef CAR_TRAILER_AGGREGETION_HPP_
#define CAR_TRAILER_AGGREGETION_HPP_

#include "Vehicle.hpp"
#include "Car.hpp"

class CCarTrailerAggregetion : public IVehicle
{
    
    CCar mCar;
    
public:

    virtual void checkLights()
    {
        std::cout<<"car lights are OK\n";
        mCar.checkLights();
    }

};

#endif // CAR_TRAILER_AGGREGETION_HPP_
