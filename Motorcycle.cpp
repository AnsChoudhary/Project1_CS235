#include "Motorcycle.h"
#include <iostream>
#include <string>
using namespace std;
Motorcycle::Motorcycle(string name,string manufacturer, double top_speed, double weight, double mpg)
:Vehicle(name, manufacturer, top_speed, weight, mpg, 0)
{
    setGarageSpaces(1);
    setNumWheels(2);
}
