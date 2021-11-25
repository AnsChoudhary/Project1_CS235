
#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include "Vehicle.h"
class Motorcycle : public Vehicle {
public:
    Motorcycle(std::string name, std::string manufacturer, double top_speed, double weight, double mpg);

};


#endif
