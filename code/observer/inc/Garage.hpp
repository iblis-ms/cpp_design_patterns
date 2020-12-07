/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef GARAGE_HPP_
#define GARAGE_HPP_

#include <iostream>
#include "IgnitionObserver.hpp"

struct CGarage : public IIgnitionObserver
{
    
    void onIgnitionOn() override
    {
        std::cout<<"Garage: open doors\n";
    }

    void onIgnitionOff() override
    {
        std::cout<<"Garage: close doors\n";
    }

};

#endif // GARAGE_HPP_
