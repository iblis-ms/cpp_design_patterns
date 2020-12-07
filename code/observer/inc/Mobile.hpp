/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef MOBILE_HPP_
#define MOBILE_HPP_

#include <iostream>
#include "IgnitionObserver.hpp"

struct CMobile : public IIgnitionObserver
{
    
    void onIgnitionOn() override
    {
        std::cout<<"Mobile: car mode activation\n";
    }

    void onIgnitionOff() override
    {
        std::cout<<"Mobile: car mode deactivation\n";
    }

};

#endif // MOBILE_HPP_
