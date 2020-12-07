/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef MECHANIC_HPP_
#define MECHANIC_HPP_

class IPart;

struct IMechanic
{
 
    virtual ~IMechanic() = default;

    virtual void fixPart(IPart* aPart) = 0;
    
};

#endif // MECHANIC_HPP_
