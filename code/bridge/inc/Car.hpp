/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef CAR_HPP_
#define CAR_HPP_

#include "Vehicle.hpp"
#include <iostream>

class CCar : public IVehicle
{
    std::string mModel;

public:

    CCar(IOwner& aOwner, const std::string& aModel)
    : IVehicle(aOwner)
    , mModel(aModel)
    {}

    void printInfo() const
    {
        mOwner.printOwnerInfo();
        std::cout<<"Car: "<<mModel<<std::endl;
    }
    
};
#endif // CAR_HPP_
