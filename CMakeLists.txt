cmake_minimum_required(VERSION 3.17)
project(Cars4kidsOG1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Cars4kidsOG1 main.cpp Vehicle.cpp Vehicle.h Car.cpp Car.h Motorcycle.cpp Motorcycle.h Bus.cpp Bus.h Truck.cpp Truck.h Garage.cpp Garage.h)