/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef PART_HPP_
#define PART_HPP_

#include <string>

class IPart
{
protected:
    
    std::string mName;
    
public:

    IPart(const std::string& aName)
    : mName(aName)
    {}
    
    virtual ~IPart() = default;
   
    const std::string& getName() const
    {
       return mName;
    }

    virtual void fix(const std::string& aFixMethod) = 0;

};

#endif // PART_HPP_
