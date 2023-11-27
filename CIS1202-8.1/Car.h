#pragma once
#include "Vehicle.h"

class Car : public Vehicle
{
public:
	int doors;

	Car(const std::string& manufacturer, int year_built, int doors);
	void display_info();

	int get_doors();
};
