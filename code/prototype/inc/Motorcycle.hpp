/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef MOTORCYCLE_HPP_
#define MOTORCYCLE_HPP_

#include <memory>
#include <iostream>

#include "Vehicle.hpp"

class CMotorcycle : public IVehicle
{
    
   std::string mModel;
    
public:

    CMotorcycle(std::string aModel)
    : mModel(std::move(aModel))
    {}
    
    virtual std::shared_ptr<IVehicle> clone() override
    {
        return std::make_shared<CMotorcycle>(mModel);
    }
    
    virtual void startEngine() override
    {
        std::cout<<"MOTORCYCLE: "<<mModel<<" start engine\n";
    }
    
};

#endif // MOTORCYCLE_HPP_
