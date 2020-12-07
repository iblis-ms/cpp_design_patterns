/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef CHOPPER_HPP_
#define CHOPPER_HPP_

#include "Motorcycle.hpp"
#include <iostream>

struct CChopper : public IMotorcycle
{

    void changeFrontLight() override
    {
        std::cout<<"CHOPPER: change front light\n";
    }

};

#endif // CHOPPER_HPP_
