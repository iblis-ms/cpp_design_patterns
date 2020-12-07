/*
 * Author: Marcin Serwach
 * License: MIT
 */


#include "Car.hpp"
#include "FlyweightCarFactory.hpp"

#include <iostream>

struct CInputData
{
    const char* mProducer;
    const char* mModel;
    unsigned int mProductionYear;
    const char* mColor;
    const char* mOwner;
};

const CInputData inputData[] = {
    {
        "Opel", "Corsa", 2018U, "blue", "Kowalski"
    },
    {
        "Opel", "Corsa", 2018U, "yellow", "Nowak"
    },
    {
        "Opel", "Corsa", 2019U, "black", "Smith"
    },
    {
        "VW", "Passat", 2019U, "black", "Smith"
    }
};
int main()
{
    CFlyweightCarFactory flyweightCarFactory;
    
    std::vector<std::shared_ptr<CCar>> cars;
    
    std::string producer1("Opel");
    std::string model1("Corsa");
    unsigned int productionYear1 = 2018;
    
    for (const auto& input : inputData)
    {
        auto car = flyweightCarFactory.createCar(input.mProducer, input.mModel, input.mProductionYear, input.mColor, input.mOwner);
        cars.push_back(car);
    }
    return 0;
}
