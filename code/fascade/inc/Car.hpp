/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef CAR_HPP_
#define CAR_HPP_

#include <iostream>

struct CCar
{

    void turnOffAlarm()
    {
        std::cout<<"turn off alarm\n";
    }
    
    void openDoor()
    {
        std::cout<<"open door\n";
    }
    
    void pushClutchPedal()
    {
        std::cout<<"push clutch pdeal\n";
    }
    
    void changeGear(unsigned int aGear)
    {
        std::cout<<"change gear to "<<aGear<<std::endl;
    }
    
    void releaseClutchPedal()
    {
        std::cout<<"release clutch pedeal\n";
    }
    
    void startEngine()
    {
        std::cout<<"start engine\n";
    }
    
    void pushAccelerationPedal()
    {
        std::cout<<"push acceleration pedal\n";
    }
    
};

#endif // CAR_HPP_
