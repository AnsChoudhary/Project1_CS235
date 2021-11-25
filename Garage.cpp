#include <iostream>
#include <cmath>
#include "Garage.h"

using namespace std;

namespace null
{
    Vehicle v;
}

// Private Function
void Garage::arrange()
{
    Vehicle* temp = new Vehicle[capacity_];

    int index = 0;
    for (size_t i = 0; i < capacity_; i++)
    {
        if (arr_[i] != null::v)
        {
            temp[index] = arr_[i];
            temp[index].setGarageSpaces(arr_[i].getSpaces());
            temp[index].setNumWheels(arr_[i].getNumWheels());
            index++;
        }
    }

    delete[] arr_;

    arr_ = temp;
}

Garage::Garage(size_t capacity) : capacity_(capacity)
{
    arr_ = new Vehicle[capacity_];

    num_vehicles_ = 0;
}

bool Garage::addVehicle(Vehicle to_add)
{
    if (isFull() == true || (num_vehicles_ + to_add.getSpaces() > capacity_))
        return false;

    for (size_t i = num_vehicles_; i < num_vehicles_ + to_add.getSpaces(); i++)
    {
        arr_[i] = to_add;
        arr_[i].setGarageSpaces(to_add.getSpaces());
        arr_[i].setNumWheels(to_add.getNumWheels());
    }

    num_vehicles_ = num_vehicles_+ to_add.getSpaces();

    return true;

}

bool Garage::removeVehicle(Vehicle to_remove)
{
    if (num_vehicles_ == 0)
        return false;

    for (size_t i = 0; i < num_vehicles_; i++)
    {
        if (arr_[i] == to_remove)
        {
            for (size_t j = i; j < to_remove.getSpaces(); j++)
                arr_[j] = null::v;

            num_vehicles_ = num_vehicles_- to_remove.getSpaces();

            arrange();

            return true;
        }
    }

    return false;
}

bool Garage::swapVehicles(Vehicle swap_in, Vehicle swap_out)
{
    bool isSwapDone = false;

    if (removeVehicle(swap_out) == true && addVehicle(swap_in) == true)
        isSwapDone = true;

    return isSwapDone;
}

bool Garage::isFull() const
{
    return num_vehicles_ == capacity_;
}

void Garage::display() const {
    for (size_t i = 0; i < num_vehicles_; i += arr_[i].getSpaces()) {
        if (arr_[i] != null::v) {
            // Print the manufacturer and name ONLY once
            cout << arr_[i].getManufacturer() << " " << arr_[i].getName() << endl;
        }
    }


}



