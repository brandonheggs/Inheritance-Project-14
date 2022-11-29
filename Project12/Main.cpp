// Brandon Heggs
//CIS 1202 501
//November 26, 2022
#include "Truck.h"
#include "Car.h"
#include "Vehicle.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	string manufactorMain;
	int yearMain;
	int numDoorsMain;
	int towingMain;


	cout << "Vehicle program " << endl;
	cout << "Vehicle: " << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufactorMain);
	cout << "Enter the year built: ";
	cin >> yearMain;
	Vehicle vehicle(manufactorMain, yearMain);
	vehicle.displayInfo();
	cin.ignore();

	cout << "Car: " << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufactorMain);
	cout << "Enter the year built: ";
	cin >> yearMain;
	cout << "Enter the number of doors: ";
	cin >> numDoorsMain;
	Car car(manufactorMain, yearMain, numDoorsMain);
	car.displayInfo();
	cin.ignore();

	cout << "Truck: " << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufactorMain);
	cout << "Enter the year built: ";
	cin >> yearMain;
	cout << "Enter the towing capacity: ";
	cin >> towingMain;
	Truck truck(manufactorMain, yearMain ,towingMain);
	truck.displayInfo();

	return 0;







}