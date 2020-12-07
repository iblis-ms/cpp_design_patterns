/*
 * Author: Marcin Serwach
 * License: MIT
 */


#include "Car.hpp"
#include "Workshop.hpp"

#include <iostream>

int main()
{
    CWorkshop workshop;
    CCar car;
    
    car.checkEngine(workshop.getMechanic());
    return 0;
}
