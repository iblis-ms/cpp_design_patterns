/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef CAR_BUILDER_HPP
#define CAR_BUILDER_HPP

#include <memory>
#include "Car.hpp"

class CCarBuilder
{

    std::string mProducer;
    std::string mModel;
    unsigned int mModelYear;
    std::string mColor;
    double mMaxSpeed;
    
public:

    CCarBuilder& appendProducer(const std::string& aProducer)
    {
        mProducer = aProducer;
        return *this;
    }
    
    CCarBuilder& appendModel(const std::string& aModel)
    {
        mModel = aModel;
        return *this;
    }
    
    CCarBuilder& appendModelYear(unsigned int aModelYear)
    {
        mModelYear = aModelYear;
        return *this;
    }
    
    CCarBuilder& appendColor(const std::string& aColor)
    {
        mColor = aColor;
        return *this;
    }
  
    CCarBuilder& appendMaxSpeed(double aMaxSpeed)
    {
        mMaxSpeed = aMaxSpeed;
        return *this;
    }
    
    std::shared_ptr<CCar> create() const
    {
        const std::string name = mProducer + " " + mModel + " " + std::to_string(mModelYear);
        return std::make_shared<CCar>(name, mColor, mMaxSpeed);
    }
    
};

#endif // CAR_BUILDER_HPP
