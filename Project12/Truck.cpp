// Brandon Heggs
//CIS 1202 501
//November 26, 2022
#ifndef TRUCK_CPP
#define TRUCK_CPP
#include <iostream>
#include "Vehicle.h"
#include "Truck.h"



using namespace std;

Truck::Truck(string manufactor, int year, int towing) : towingCapacity(towing), Vehicle(manufactor, year)
{

}

int Truck::getTowingCapacity()
{
	return towingCapacity;

}

void Truck::setTowingCapacity(int towing)
{
	this->towingCapacity = towing;

}

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing capacity: " << towingCapacity << endl;

}
#endif