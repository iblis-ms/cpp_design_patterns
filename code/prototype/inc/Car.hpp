/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef CAR_HPP_
#define CAR_HPP_

#include <memory>
#include <iostream>

#include "Vehicle.hpp"

class CCar : public IVehicle
{
    
   std::string mModel;
    
public:

    CCar(std::string aModel)
    : mModel(std::move(aModel))
    {}
    
    virtual std::shared_ptr<IVehicle> clone() override
    {
        return std::make_shared<CCar>(mModel);
    }
    
    virtual void startEngine() override
    {
        std::cout<<"CAR: "<<mModel<<" start engine\n";
    }

};

#endif // CAR_HPP_
