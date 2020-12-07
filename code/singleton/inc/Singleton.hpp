/*
 * Author: Marcin Serwach
 * License: MIT
 */

#ifndef SINGLETON_HPP_
#define SINGLETON_HPP_

#include <iostream>

class CSingleton
{
    
    CSingleton(){}
    CSingleton(const CSingleton&) = delete;
    CSingleton& operator=(const CSingleton&) = delete;
    
public:

    static CSingleton& getInstance()
    {
        static CSingleton instance; // it could be also done by dynamic memory allocation but it requires thread safe mechanism
        return instance;
    }
    
    void saySth()
    {
        std::cout<<"hello\n";
    }
    
};

#endif // SINGLETON_HPP_
