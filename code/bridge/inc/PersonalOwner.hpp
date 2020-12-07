/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef PERSONAL_OWNER_HPP
#define PERSONAL_OWNER_HPP

#include <iostream>
#include <string>
#include "Owner.hpp"

class CPersonalOwner : public IOwner 
{
    std::string mName;
    std::string mSurname;

public:

    CPersonalOwner(const std::string& aName, const std::string& aSurname)
    : mName(aName)
    , mSurname(aSurname)
    {}
    
    void printOwnerInfo() const
    {
        std::cout<<"Name: "<<mName<<"\n";
        std::cout<<"Surname: "<<mSurname<<"\n";
    }

};

#endif // PERSONAL_OWNER_HPP
