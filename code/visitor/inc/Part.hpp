/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef PART_HPP_
#define PART_HPP_

struct IPart
{

    virtual ~IPart() = default;
   
    virtual void fixByMechanic(IMechanic* aMechanic) = 0;

};

#endif // PART_HPP_
