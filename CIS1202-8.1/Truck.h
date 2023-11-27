#pragma once
#include "Vehicle.h"
class Truck : public Vehicle
{
public:
	float towing_capacity;
	
	Truck(const std::string& manufacturer, int year_built, float towing_capacity);
	void display_info();

	int get_towing_capacity();
};
