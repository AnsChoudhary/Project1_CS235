#ifndef BUS_H
#define BUS_H
#include "Vehicle.h"

class Bus :public Vehicle{
public:
    Bus(std::string name, std::string manufacturer, double top_speed, double weight, double mpg, size_t number_seats);
    size_t getNumSeats() const;

private:
    size_t number_seats;
    size_t numSeats;
};


#endif
