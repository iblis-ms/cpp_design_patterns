/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef MOTORCYCLE_HPP_
#define MOTORCYCLE_HPP_

#include <iostream>

struct IMotorcycle
{

    virtual ~IMotorcycle() = default;
    
    virtual void changeFrontLight() = 0;
};

#endif // MOTORCYCLE_HPP_
