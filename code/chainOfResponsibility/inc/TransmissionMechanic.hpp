/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef TRANSMISSION_MECHANIC_HPP_
#define TRANSMISSION_MECHANIC_HPP_

#include <string>
#include "Part.hpp"

struct CTransmissionMechanic : public IMechanic
{

    CTransmissionMechanic(IMechanic* aNextMechanic)
    : IMechanic(aNextMechanic)
    {}
    
    bool checkPartAndFix(IPart& aPart) override
    {
        if (aPart.getName() == "Transmission")
        {
            aPart.fix("Replace transission");
            return true;
        }
        return false;
    }

};

#endif // TRANSMISSION_MECHANIC_HPP_
