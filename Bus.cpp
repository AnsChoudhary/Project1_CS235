#include "Bus.h"
#include <iostream>
#include <string>
using namespace std;
Bus::Bus(string name, string manufacturer, double top_speed, double weight, double mpg,size_t number_seats)
: Vehicle(name, manufacturer, top_speed, weight, mpg, 0)
{
    setGarageSpaces(4);
    setNumWheels(8);
    number_seats=numSeats;
}
size_t Bus::getNumSeats() const {
    return numSeats;
}
