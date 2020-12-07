/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef IGNITION_OBSERVER_HPP_
#define IGNITION_OBSERVER_HPP_

struct IIgnitionObserver
{
    
    virtual ~IIgnitionObserver() = default;
    
    virtual void onIgnitionOn() = 0;

    virtual void onIgnitionOff() = 0;

};

#endif // IGNITION_OBSERVER_HPP_
