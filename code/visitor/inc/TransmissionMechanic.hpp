/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef TRANSMISSION_MECHANIC_HPP_
#define TRANSMISSION_MECHANIC_HPP_

#include "Mechanic.hpp"
#include <iostream>

struct CTransmissionMechanic : public IMechanic
{

    void fixPart(IPart* aPart) override
    {
        std::cout<<"fixed by transmission mechanic\n";
    }

};

#endif // TRANSMISSION_MECHANIC_HPP_
