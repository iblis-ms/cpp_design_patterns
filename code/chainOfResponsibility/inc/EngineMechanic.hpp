/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef ENGINE_MECHANIC_HPP_
#define ENGINE_MECHANIC_HPP_

#include <string>
#include "Part.hpp"

struct CEngineMechanic : public IMechanic
{

    CEngineMechanic(IMechanic* aNextMechanic)
    : IMechanic(aNextMechanic)
    {}
    
    bool checkPartAndFix(IPart& aPart) override
    {
        if (aPart.getName() == "Engine")
        {
            aPart.fix("Replace engine");
            return true;
        }
        return false;
    }

};

#endif // ENGINE_MECHANIC_HPP_
