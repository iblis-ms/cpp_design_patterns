# Author: Marcin Serwach
# License: MIT

cmake_minimum_required(VERSION 3.18)

project(SoftwareDesignPatterns)

include("${CMAKE_SOURCE_DIR}/../build/addTarget.cmake")

enable_testing()

add_subdirectory(factoryMethod)
add_subdirectory(abstractFactory)
add_subdirectory(builder)
add_subdirectory(singleton)
add_subdirectory(prototype)
add_subdirectory(adapter)
add_subdirectory(bridge)
add_subdirectory(decorator)
add_subdirectory(fascade)
add_subdirectory(flyweight)
add_subdirectory(chainOfResponsibility)
add_subdirectory(observer)
add_subdirectory(visitor)


