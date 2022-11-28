// Brandon Heggs
//CIS 1202 501
//November 26, 2022
#include <iostream>
#include "Car.h"
#include "Vehicle.h"
#include "Vehicle.cpp"

using namespace std;

Car::Car(string manufacturer, int yearBuilt, int num) : numDoors(num), Vehicle(manufacturer, yearBuilt)
{

}
int Car::getNumDoors()
{
	return numDoors;
}

void Car::setNumDoors(int numDoors)
{
	this->numDoors = numDoors;

}

void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Doors: " << numDoors << endl;


}