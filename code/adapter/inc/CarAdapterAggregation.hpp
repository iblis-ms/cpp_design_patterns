/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef CAR_ADAPTER_AGGREGATION_HPP_
#define CAR_ADAPTER_AGGREGATION_HPP_

#include "Car.hpp"
#include "Motorcycle.hpp"

class CCarAdapterAggregation : public IMotorcycle
{
    CCar& mCar;

public:

    CCarAdapterAggregation(CCar& aCar)
    : mCar(aCar)
    {}
    
    void changeFrontLight() override
    {
        mCar.changFrontLeftLight();
        mCar.changFrontRightLight();
    }
    
};

#endif // CAR_ADAPTER_AGGREGATION_HPP_
