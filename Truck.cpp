#include "Truck.h"
#include <iostream>
#include <string>
using namespace std;

Truck::Truck(string name, string manufacturer, double top_speed, double weight, double mpg,double cargo_capacity)
: Vehicle(name, manufacturer, top_speed, weight, mpg, 0)
{
    setGarageSpaces(8);
    setNumWheels(18);
    cargo_capacity_=cargo_capacity;

}

bool Truck::add_cargo(double weight_of_cargo)
{
    if (weight_of_cargo <= cargo_capacity_)
    {
        weight_of_held_cargo_ = weight_of_held_cargo_ + weight_of_cargo;

        return true;
    }

    return false;
}
bool Truck::clear() {
    if (weight_of_held_cargo_!=0){
        weight_of_held_cargo_=0;

        return true;

    }
    return false;

}

double Truck::getCargoCapacity() const {
    return cargo_capacity_;
}

double Truck::getHeldCargoWeight() const {
    return weight_of_held_cargo_;
}