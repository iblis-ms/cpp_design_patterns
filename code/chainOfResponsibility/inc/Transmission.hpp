/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef TRANSMISSION_HPP_
#define TRANSMISSION_HPP_

#include <string>
#include <iostream>
#include "Part.hpp"

struct CTransmission : public IPart
{

    CTransmission()
    : IPart("Transmission")
    {}

    void fix(const std::string& aFixMethod) override
    {
        std::cout<<mName<<": "<<aFixMethod<<std::endl;
    }

};

#endif // TRANSMISSION_HPP_
