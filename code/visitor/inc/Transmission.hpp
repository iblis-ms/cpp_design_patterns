/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef TRANSMISSION_HPP_
#define TRANSMISSION_HPP_

#include <iostream>
#include "Part.hpp"

struct CTransmission : public IPart
{
    
    void fixByMechanic(IMechanic* aMechanic) override
    {
        std::cout<<"Transmission: ";
        aMechanic->fixPart(this);
    }

};

#endif // TRANSMISSION_HPP_
