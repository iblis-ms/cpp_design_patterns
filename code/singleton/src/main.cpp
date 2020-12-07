/*
 * Author: Marcin Serwach
 * License: MIT
 */


#include "Singleton.hpp"

#include <iostream>


void fun()
{
    CSingleton::getInstance().saySth();
}

int main()
{
    CSingleton::getInstance().saySth();
    fun();
    
    return 0;
}
