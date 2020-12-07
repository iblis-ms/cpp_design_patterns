/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef CAR_FASCADE_HPP_
#define CAR_FASCADE_HPP_

#include <memory>
#include <iostream>

#include "Car.hpp"

class CCarFascade
{
   CCar mCar;
    
public:
   
   void run()
   {
       mCar.turnOffAlarm();
       mCar.openDoor();
       mCar.pushClutchPedal();
       mCar.changeGear(1U);
       mCar.startEngine();
       mCar.releaseClutchPedal();
       mCar.pushAccelerationPedal();
   }
};

#endif // CAR_FASCADE_HPP_
