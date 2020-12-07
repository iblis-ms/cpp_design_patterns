/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef ENGINE_HPP_
#define ENGINE_HPP_

#include <string>
#include <iostream>
#include "Part.hpp"

struct CEngine : public IPart
{

    CEngine()
    : IPart("Engine")
    {}

    void fix(const std::string& aFixMethod) override
    {
        std::cout<<mName<<": "<<aFixMethod<<std::endl;
    }

};

#endif // ENGINE_HPP_
