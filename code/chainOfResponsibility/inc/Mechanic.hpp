/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef MECHANIC_HPP_
#define MECHANIC_HPP_

#include <string>
#include "Part.hpp"

class IMechanic
{

    IMechanic* mNextMechanic;

public:

    IMechanic(IMechanic* aNextMechanic)
    : mNextMechanic(aNextMechanic)
    {}
    
    virtual ~IMechanic() = default;

    IMechanic* checkPart(IPart& aPart)
    {
        const bool fixed = checkPartAndFix(aPart);
        if (fixed)
        {
            return nullptr;
        }
        return mNextMechanic;
    }
    
protected:

    virtual bool checkPartAndFix(IPart& aPart) = 0;

};

#endif // MECHANIC_HPP_
