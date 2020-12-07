/*
 * Author: Marcin Serwach
 * License: MIT
 */

#include "VehicleProvider.hpp"

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
    CVehicleProvider provider;
    {
        // creator class is not known
        std::shared_ptr<IVehicleCreator> creator = provider.getCreator(CVehicleProvider::EVehicleType::ECAR);
        std::shared_ptr<IVehicle> vehicle = creator->create();
        CVehicleRunner vehicleRunner(vehicle);
        vehicleRunner.run();
    }
    std::cout<<"-----------------------------\n";
    {
        // creator class is not known
        std::shared_ptr<IVehicleCreator> creator = provider.getCreator(CVehicleProvider::EVehicleType::EMOTORCYCLE);
        std::shared_ptr<IVehicle> vehicle = creator->create();
        CVehicleRunner vehicleRunner(vehicle);
        vehicleRunner.run();
    }
    return 0;
}
