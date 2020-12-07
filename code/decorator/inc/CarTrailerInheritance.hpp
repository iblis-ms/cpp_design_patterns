/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef CAR_TRAILER_INHERITANCE_HPP_
#define CAR_TRAILER_INHERITANCE_HPP_

#include "Car.hpp"

struct CCarTrailerInheritance : public CCar
{

    virtual void checkLights()
    {
        std::cout<<"car trailer lights are OK\n";
        CCar::checkLights();
    }

};

#endif // CAR_TRAILER_INHERITANCE_HPP_
