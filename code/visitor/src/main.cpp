/*
 * Author: Marcin Serwach
 * License: MIT
 */


#include "TransmissionMechanic.hpp"
#include "EngineMechanic.hpp"
#include "Transmission.hpp"
#include "Engine.hpp"

int main()
{
    CTransmissionMechanic transmissionMechanic;
    CEngineMechanic engineMechanic;
    
    CTransmission transmission;
    CEngine engine;
    
    engine.fixByMechanic(&engineMechanic);
    engine.fixByMechanic(&transmissionMechanic);
    
    transmission.fixByMechanic(&engineMechanic);
    transmission.fixByMechanic(&transmissionMechanic);

    return 0;
}
