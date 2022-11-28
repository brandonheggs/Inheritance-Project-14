// Brandon Heggs
//CIS 1202 501
//November 26, 2022
#ifndef VEHICLE_H
#define Vehicle_H
#include <iostream>
#pragma once

using namespace std;

class Vehicle
{ private:
	string manufacturer;
		int yearBuilt;

public :
	Vehicle(string manufacturer, int yearBuilt);

	string getManufacturer();
	void setManufacturer(string manufacturer);

	int getYearBuilt();
	void setYearBuilt();

	virtual void displayInfo();

};

#endif
