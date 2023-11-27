//Alex Kaiser
//CIS 1202 801
//November 26, 2023

#include <iostream>

#include "Car.h"

int main()
{
	std::cout << "Vehicle" << std::endl;
	std::string manufacturer;
	int year;
	std::cout << "Manufacturer? ";
	std::getline(std::cin, manufacturer);
	std::cout << "Year Built? ";
	std::cin >> year;
	auto v = Vehicle(manufacturer, year);
	std::cout << "Information" << std::endl;
	v.display_info();

	std::cout << "Car" << std::endl;
	int doors;
	std::cout << "Manufacturer? ";
	std::getline(std::cin.ignore(), manufacturer);
	std::cout << "Year Built? ";
	std::cin >> year;
	std::cout << "Doors? ";
	std::cin >> doors;
	auto c = Car(manufacturer, year, doors);
	std::cout << "Information" << std::endl;
	c.display_info();

	std::cout << "Truck" << std::endl;
	int towing_capacity;
	std::cout << "Manufacturer? ";
	std::getline(std::cin.ignore(), manufacturer);
	std::cout << "Year Built? ";
	std::cin >> year;
	std::cout << "Towing Capacity? ";
	std::cin >> towing_capacity;
	auto t = Car(manufacturer, year, towing_capacity);
	std::cout << "Information" << std::endl;
	t.display_info();
}
