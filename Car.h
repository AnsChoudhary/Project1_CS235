
#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
#include "Vehicle.h"

class Car: public Vehicle {
public:

    Car(std::string name, std::string manufacturer, double top_speed, double weight, double mpg);

};


#endif
