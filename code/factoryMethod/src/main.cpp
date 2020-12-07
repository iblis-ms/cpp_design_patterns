/*
 * Author: Marcin Serwach
 * License: MIT
 */

#include "motorcycle/MotorcycleCreator.hpp"
#include "car/CarCreator.hpp"

#include <iostream>

class CVehicleRunner
{
    std::shared_ptr<IVehicle> mVehicle;
    
public:
    
    CVehicleRunner(std::shared_ptr<IVehicle>& aVehicle)
    : mVehicle(aVehicle)
    {}
    
    void run()
    {
        mVehicle->startEngine();
        const unsigned int wheels = mVehicle->getNumberOfWheels();
        std::cout<<wheels<<" wheels are running\n";
        mVehicle->stopEngine();
    }
    
};

int main()
{
    {
        CCarCreator carCreator;
        std::shared_ptr<IVehicle> car = carCreator.create();
        CVehicleRunner vehicleRunner(car);
        vehicleRunner.run();
    }
    std::cout<<"-----------------------------\n";
    {
        CMotorcycleCreator motorcycleCreator;
        std::shared_ptr<IVehicle> motorcycle = motorcycleCreator.create();
        CVehicleRunner vehicleRunner(motorcycle);
        vehicleRunner.run();
    }
    return 0;
}
