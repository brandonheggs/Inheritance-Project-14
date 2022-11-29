// Brandon Heggs
//CIS 1202 501
//November 26, 2022
#ifndef TRUCK_H
#define TRUCK_H
#include <iostream>
#include "Vehicle.h"


using namespace std;

class Truck : public Vehicle
{
private:
		int towingCapacity;

public: 
	Truck(string manufacturer, int yearBuilt, int towingCapacity);

	int getTowingCapacity();
	void setTowingCapacity(int towingCapacity);

	void displayInfo();
};
#endif