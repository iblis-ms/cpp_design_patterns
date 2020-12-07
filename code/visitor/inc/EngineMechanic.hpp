/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef ENGINE_MECHANIC_HPP_
#define ENGINE_MECHANIC_HPP_

#include "Mechanic.hpp"
#include <iostream>

struct CEngineMechanic : public IMechanic
{
    
    void fixPart(IPart* aPart) override
    {
        std::cout<<"fixed by engine mechanic\n";
    }

};

#endif // ENGINE_MECHANIC_HPP_
