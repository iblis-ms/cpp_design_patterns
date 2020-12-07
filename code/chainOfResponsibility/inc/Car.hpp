/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef CAR_HPP_
#define CAR_HPP_

#include "Transmission.hpp"
#include "Engine.hpp"
#include "Mechanic.hpp"

class CCar
{

    CTransmission mTransmission;
    CEngine mEngine;

public:

    void checkEngine(IMechanic* aMechanic)
    {
        while (aMechanic != nullptr)
        {
            aMechanic = aMechanic->checkPart(mEngine);
        }
    }
    
};

#endif // CAR_HPP_
