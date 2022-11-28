// Brandon Heggs
//CIS 1202 501
//November 26, 2022
#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "Vehicle.h"
#pragma once

using namespace std;

class Car : public Vehicle
{  
private: 
	int numDoors;
	
public:
	Car(string manufacturer, int yearBuilt, int numDoors);

	int getNumDoors();
	void setNumDoors(int numDoors);
	
	void displayInfo();

};




#endif

