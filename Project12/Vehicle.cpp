// Brandon Heggs
//CIS 1202 501
//November 26, 2022

#ifndef VEHICLE_CPP
#define VEHICLE_CPP
#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle(string manufacturer, int yearBuilt)
{
	this->manufacturer = manufacturer;
	this->yearBuilt = yearBuilt;

}

string Vehicle::getManufacturer()
{ 
	return manufacturer;

}

void Vehicle::setManufacturer(string manufacturer)
{
	this->manufacturer = manufacturer;
}
int Vehicle::getYearBuilt()
{ 
	return yearBuilt;

}

void Vehicle::setYearBuilt(int yearBuilt)
{
	this->yearBuilt = yearBuilt;

}

void Vehicle::displayInfo()
{
	cout << "Vehicle Information" << endl;
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt << endl;

}
#endif