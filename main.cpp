#include "Garage.h"
#include "Bus.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Truck.h"
#include "Vehicle.h"
using namespace std;

int main()
{
    Garage g;

    //Car(std::string name, std::string manufacturer, double top_speed, double weight, double mpg);
    Car c("Camry", "Toyota", 90.0, 3000.0, 40.0 );

    Bus b("XD60","Xcelsior", 60.0, 8000.0, 30.0, 50);

    //Truck(std::string name, std::string manufacturer, double top_speed, double weight, double mpg, double cargo_capacity);
    Truck t("T600", "Kenworth", 60.0, 16000.0, 25.0, 2000.00);

    g.addVehicle(c);
    g.addVehicle(b);
    g.display();
    //cout<<c.getDirection();
    //g.addVehicle(t);

    Car c1("Aventador", "Lamborghini", 140.0, 2000.0, 25.0);
    g.swapVehicles(c1, c);
    g.display();

    return 0;
}