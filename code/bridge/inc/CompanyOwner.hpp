/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef COMPANY_OWNER_HPP
#define COMPANY_OWNER_HPP

#include <iostream>
#include <string>
#include "Owner.hpp"

class CCompanyOwner : public IOwner 
{
    std::string mName;

public:

    CCompanyOwner(const std::string& aName)
    : mName(aName)
    {}
    
    void printOwnerInfo() const
    {
        std::cout<<"Name: "<<mName<<"\n";
    }

};

#endif // COMPANY_OWNER_HPP
