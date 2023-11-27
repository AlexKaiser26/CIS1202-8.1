#include "Car.h"

#include <iostream>

Car::Car(const std::string& manufacturer, const int year_built, const int doors): Vehicle(manufacturer, year_built)
{
	this->doors = doors;
}

void Car::display_info()
{
	Vehicle::display_info();
	std::cout << "Doors: " << doors << std::endl;
}

int Car::get_doors()
{
	return doors;
}
