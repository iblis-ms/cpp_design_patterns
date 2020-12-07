
#include "Motorcycle.hpp"
#include "Car.hpp"

#include <iostream>

int main()
{
    {
        CMotorcycle motorcycle("Harley Davidson Fat Bob");
        std::cout<<"Original motorcycle: "<<std::endl;
        motorcycle.startEngine();
        std::shared_ptr<IVehicle> motorcycleClone = motorcycle.clone();
        std::cout<<"Clone of motorcycle: "<<std::endl;
        motorcycleClone->startEngine();
    }
    {
        CCar car("Ford Mustang");
        std::cout<<"Original car: "<<std::endl;
        car.startEngine();
        std::shared_ptr<IVehicle> carClone = car.clone();
        std::cout<<"Clone of car: "<<std::endl;
        carClone->startEngine();
    }

    return 0;
}
