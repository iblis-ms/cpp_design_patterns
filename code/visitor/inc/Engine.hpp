/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef ENGINE_HPP_
#define ENGINE_HPP_

#include <iostream>
#include "Part.hpp"

struct CEngine : public IPart
{
    
    void fixByMechanic(IMechanic* aMechanic) override
    {
        std::cout<<"Engine: ";
        aMechanic->fixPart(this);
    }
    
};

#endif // ENGINE_HPP_
