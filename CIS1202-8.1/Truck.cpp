#include "Truck.h"

#include <iostream>

Truck::Truck(const std::string& manufacturer, int year_built, float towing_capacity) : Vehicle(manufacturer, year_built)
{
	this->towing_capacity = towing_capacity;
}

void Truck::display_info()
{
	Vehicle::display_info();
	std::cout << "Towing Capacity: " << towing_capacity << std::endl;
}

int Truck::get_towing_capacity()
{
	return towing_capacity;
}
