/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef CAR_SHARED_HPP_
#define CAR_SHARED_HPP_

#include <iostream>
#include <string>

class CCarShared
{
    
    std::string mProducer;
    std::string mModel;
    unsigned int mProductionYear;

public:

    CCarShared(const std::string& aProducer, const std::string& aModel, unsigned int aProductionYear)
    : mProducer(aProducer)
    , mModel(aModel)
    , mProductionYear(aProductionYear)
    {}
    
    const std::string& getProducer() const
    {
        return mProducer;
    }
    
    const std::string& getModel() const
    {
        return mModel;
    }
    
    unsigned int getProductionYear() const
    {
        return mProductionYear;
    }
    
};

#endif // CAR_SHARED_HPP_
