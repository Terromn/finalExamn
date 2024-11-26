cmake_minimum_required(VERSION 3.29)
project(finalBoringExam)

set(CMAKE_CXX_STANDARD 20)

add_executable(finalBoringExam main.cpp
        CompanyAsset/CompanyAsset.h
        Car/Car.cpp
        Car/Car.h
        CompanyAsset/CompanyAsset.cpp
        Staff/Staff.cpp
        Staff/Staff.h
        RentalSystem/RentalSystem.cpp
        RentalSystem/RentalSystem.h)
