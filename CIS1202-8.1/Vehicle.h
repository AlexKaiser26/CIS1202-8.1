#pragma once
#include <string>

class Vehicle
{
public:
	std::string manufacturer;
	int year_built;

	Vehicle(const std::string& manufacturer, int year_built);
	void display_info();

	std::string get_manufacturer();
	int get_year_built();
};

