/*
 * Author: Marcin Serwach
 * License: MIT
 */


#include "Chopper.hpp"
#include "Car.hpp"
#include "Workshop.hpp"
#include "CarAdapterInheritance.hpp"
#include "CarAdapterAggregation.hpp"

#include <iostream>

void changeFrontLightsOnlyForCars(CCar& aCar)
{
    std::cout<<"Car only change: \n";
    aCar.changFrontLeftLight();
    aCar.changFrontRightLight();
}

int main()
{
    CWorkshop workshop;
    CChopper chopper;
    workshop.changeFrontLight(chopper);
    std::cout<<"-----------------------------\n";
    
    {
        CCar car;
        CCarAdapterAggregation adapter(car);
        workshop.changeFrontLight(adapter);
        changeFrontLightsOnlyForCars(car);
    }
    std::cout<<"-----------------------------\n";
    {
        CCarAdapterInheritance adapterAndCar;
        workshop.changeFrontLight(adapterAndCar);
        changeFrontLightsOnlyForCars(adapterAndCar);
    }

    return 0;
}
