/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef OWNER_HPP
#define OWNER_HPP

struct IOwner 
{
    
    virtual ~IOwner() = default;
    
    virtual void printOwnerInfo() const = 0;

};

#endif // OWNER_HPP
