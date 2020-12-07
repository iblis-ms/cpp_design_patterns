/*
 * Author: Marcin Serwach
 * License: MIT
 */

#include "Motorcycle.hpp"
#include "Car.hpp"
#include "PersonalOwner.hpp"
#include "CompanyOwner.hpp"

#include <iostream>

int main()
{
    CPersonalOwner personalOwner("Jan", "Kowalski");
    CCompanyOwner companyOwner("CompanyPol");
    
    std::cout<<"-----------------------------\n";
    CCar car1(personalOwner, "VW Passat");
    car1.printInfo();
    std::cout<<"-----------------------------\n";
    CCar car2(companyOwner, "Skoda Fabia");
    car2.printInfo();
    std::cout<<"-----------------------------\n";
    
    CMotorcycle motorcycle1(personalOwner, "Harley Davidson Fat Bob");
    motorcycle1.printInfo();
    std::cout<<"-----------------------------\n";
    CMotorcycle motorcycle2(companyOwner, "Suzuki Intruder");
    motorcycle2.printInfo();
    std::cout<<"-----------------------------\n";

    return 0;
}
