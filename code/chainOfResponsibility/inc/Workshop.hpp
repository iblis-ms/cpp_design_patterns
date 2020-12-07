/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef WORKSHOP_HPP_
#define WORKSHOP_HPP_

#include <iostream>
#include "TransmissionMechanic.hpp"
#include "EngineMechanic.hpp"

class CWorkshop
{

    CTransmissionMechanic mTransmissionMechanic;
    CEngineMechanic mEngineMachanic;
    
public:

    CWorkshop()
    : mTransmissionMechanic(&mEngineMachanic)
    , mEngineMachanic(nullptr)
    {}
    
    IMechanic* getMechanic()
    {
        return &mTransmissionMechanic;
    }

};

#endif // WORKSHOP_HPP_
