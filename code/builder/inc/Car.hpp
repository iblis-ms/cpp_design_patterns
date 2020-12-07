/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef CAR_HPP
#define CAR_HPP

#include <string>

class CCar
{

    std::string mName;
    std::string mColor;
    double mMaxSpeed = 0;
    
public:

    CCar(const std::string& aName, const std::string& mColor, double aMaxSpeed)
    : mName(aName)
    , mColor(mColor)
    , mMaxSpeed(aMaxSpeed)
    {}
    
    const std::string& getName() const
    {
        return mName;
    }
    
    const std::string& getColor() const
    {
        return mColor;
    }
    
    double getMaxSpeed() const
    {
        return mMaxSpeed;
    }
    
};

#endif // CAR_HPP

