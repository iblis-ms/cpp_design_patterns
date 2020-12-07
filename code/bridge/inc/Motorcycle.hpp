/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef MOTORCYCLE_HPP_
#define MOTORCYCLE_HPP_

#include "Vehicle.hpp"
#include <iostream>
#include <string>

class CMotorcycle : public IVehicle
{
    std::string mModel;

public:

    CMotorcycle(IOwner& aOwner, const std::string& aModel)
    : IVehicle(aOwner)
    , mModel(aModel)
    {}

    void printInfo() const
    {
        mOwner.printOwnerInfo();
        std::cout<<"Motorcycle: "<<mModel<<std::endl;
    }
    
};

#endif // MOTORCYCLE_HPP_
