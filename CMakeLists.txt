cmake_minimum_required(VERSION 3.27)
project(Mercedes_Car_Storage)

set(CMAKE_CXX_STANDARD 17)

add_executable(Mercedes_Car_Storage main.cpp
        SUVs.cpp
        SUVs.h
        SEDANs.cpp
        SEDANs.h
        Hatchbacks.cpp
        Hatchbacks.h
        Coupes.cpp
        Coupes.h
        CAR.cpp
        CARs.cpp
        CARs.h)
