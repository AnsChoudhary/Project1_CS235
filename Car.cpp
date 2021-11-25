#include "Car.h"
#include <iostream>
#include <string>
using namespace std;


Car::Car(string name, string manufacturer, double top_speed, double weight, double mpg)
:Vehicle(name, manufacturer, top_speed, weight, mpg, 0)
{
    setGarageSpaces(2);
    setNumWheels(4);
}






