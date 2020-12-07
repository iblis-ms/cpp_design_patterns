# Author: Marcin Serwach
# License: MIT

set(INC_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/inc")
set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")

AddTestTarget(
    TARGET_NAME "AbstractFactory"
    TARGET_TYPE "EXE"
    SRC "${SRC_DIR}/main.cpp"  "${SRC_DIR}/VehicleProvider.cpp" 
    PUBLIC_INC_DIRS "${INC_DIRS}"
)
