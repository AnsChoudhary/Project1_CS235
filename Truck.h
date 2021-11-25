#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : public Vehicle{
public:
    Truck(std::string name, std::string manufacturer, double top_speed, double weight, double mpg, double cargo_capacity);
    bool add_cargo( double weight_of_cargo);
    bool clear();
    double getCargoCapacity() const;
    double getHeldCargoWeight() const;
private:
    double cargo_capacity_;
    double weight_of_held_cargo_;


};


#endif
