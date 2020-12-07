/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef CAR_HPP_
#define CAR_HPP_

#include <iostream>
#include "CarShared.hpp"

class CCar
{
    
    CCarShared& mCarShared;
    std::string mColor;
    std::string mOwnerName;

public:
    
    CCar(CCarShared& aCarShared, std::string aColor, std::string aOwnerName)
    : mCarShared(aCarShared)
    , mColor(std::move(aColor))
    , mOwnerName(std::move(aOwnerName))
    {}
    
    const std::string& getColor() const
    {
        return mColor;
    }
    
    const std::string& getOwnerName() const
    {
        return mOwnerName;
    }
    
    const std::string& getProducer() const
    {
        return mCarShared.getProducer();
    }
    
    const std::string& getModel() const
    {
        return mCarShared.getModel();
    }
    
    unsigned int getProductionYear() const
    {
        return mCarShared.getProductionYear();
    }

};

#endif // CAR_HPP_
