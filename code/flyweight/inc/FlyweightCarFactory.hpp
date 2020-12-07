/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef FLYWEIGHT_CAR_FACTORY_HPP_
#define FLYWEIGHT_CAR_FACTORY_HPP_

#include <iostream>
#include <vector>
#include <memory>

class CFlyweightCarFactory
{
    
    std::vector<std::shared_ptr<CCarShared>> mFlyweights;
    
public:
    
    std::shared_ptr<CCar> createCar(const std::string& aProducer, 
        const std::string& aModel, unsigned int aProductionYear, 
        const std::string& aColor, const std::string& aOwnerName)
    {
        std::shared_ptr<CCarShared> foundFlyweight = findShared(aProducer, aModel, aProductionYear);
        if (foundFlyweight == nullptr)
        {
            foundFlyweight = std::make_shared<CCarShared>(aProducer, aModel, aProductionYear);
            mFlyweights.push_back(foundFlyweight);
        }
        
        return std::make_shared<CCar>(*foundFlyweight, aColor, aOwnerName);
    }
    
private:
    
    std::shared_ptr<CCarShared> findShared(const std::string& aProducer, 
        const std::string& aModel, unsigned int aProductionYear)
    {
        for (auto& flyweight : mFlyweights)
        {
            if (flyweight->getProducer() == aProducer && 
                flyweight->getModel() == aModel &&
                flyweight->getProductionYear() == aProductionYear)
            {
                return flyweight;
            }
        }
        return {};
    }

};

#endif // FLYWEIGHT_CAR_FACTORY_HPP_
