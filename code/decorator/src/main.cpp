/*
 * Author: Marcin Serwach
 * License: MIT
 */


#include "CarTrailerInheritance.hpp"
#include "CarTrailerAggregation.hpp"
#include "Car.hpp"
#include "Workshop.hpp"

#include <iostream>


int main()
{
    CWorkshop workshop;
    
    {
        CCarTrailerAggregetion decoratorCarTrailer;
        workshop.checkLights(decoratorCarTrailer);
    }
    {
        CCarTrailerInheritance decoratorCarTrailer;
        workshop.checkLights(decoratorCarTrailer);
    }

    return 0;
}
