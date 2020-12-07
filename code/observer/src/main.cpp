/*
 * Author: Marcin Serwach
 * License: MIT
 */


#include "Car.hpp"
#include "Garage.hpp"
#include "Mobile.hpp"

#include <iostream>


int main()
{
    CCar car;
    CGarage garage;
    CMobile mobile;
    
    car.addIgnitionSubscriber(&garage);
    car.addIgnitionSubscriber(&mobile);
    car.start();
    
    car.removeIgnitionSubscriber(&garage);
    car.stop();

    return 0;
}
