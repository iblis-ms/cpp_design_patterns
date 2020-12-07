/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef CAR_HPP_
#define CAR_HPP_

#include "Garage.hpp"
#include "Mobile.hpp"
#include "IgnitionObserver.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

class CCar
{

    std::vector<IIgnitionObserver*> mObservers;
    
public:

    void addIgnitionSubscriber(IIgnitionObserver* aObserver)
    {
        mObservers.push_back(aObserver);
    }
    
    void removeIgnitionSubscriber(IIgnitionObserver* aObserver)
    {
        mObservers.erase(std::remove(mObservers.begin(), mObservers.end(), aObserver), mObservers.end());
    }

    void start()
    {
        for(auto& observer : mObservers)
        {
            observer->onIgnitionOn();
        }
    }

    void stop()
    {
        for(auto& observer : mObservers)
        {
            observer->onIgnitionOff();
        }
    }

};

#endif // CAR_HPP_
