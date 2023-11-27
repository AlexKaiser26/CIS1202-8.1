#include "Vehicle.h"

#include <iostream>

Vehicle::Vehicle(const std::string& manufacturer, const int year_built)
{
	this->manufacturer = manufacturer;
	this->year_built = year_built;
}

void Vehicle::display_info()
{
	std::cout << "Manufacturer: " << manufacturer << std::endl;
	std::cout << "Year Built: " << year_built << std::endl;
}

std::string Vehicle::get_manufacturer()
{
	return this->manufacturer;
}

int Vehicle::get_year_built()
{
	return this->year_built;
}
