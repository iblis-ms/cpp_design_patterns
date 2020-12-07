/*
 * Author: Marcin Serwach
 * License: MIT
 */

#include "CarBuilder.hpp"

int main()
{
    CCarBuilder builder;
    builder.appendProducer("Cadillac").appendModel("Escalade");
    std::shared_ptr<CCar> car = builder.appendModelYear(2021).appendColor("black").appendMaxSpeed(230.0).create();
    return 0;
}
