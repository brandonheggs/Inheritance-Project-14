// Brandon Heggs
//CIS 1202 501
//November 26, 2022
#include "Truck.cpp"
#include "Car.cpp"
#include "Vehicle.cpp"
#include <iostream>

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
	cin.ignore();
	cout << "Enter the year built: ";
	cin >> yearMain;
	Vehicle vehicle(manufactorMain, yearMain);
	vehicle.displayInfo();

	cout << "Car: " << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufactorMain);
	cin.ignore();
	cout << "Enter the year built: ";
	cin >> yearMain;
	cout << "Enter the number of doors: ";
	cin >> numDoorsMain;
	Car car(manufactorMain, yearMain, numDoorsMain);
	car.displayInfo();

	cout << "Truck: " << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufactorMain);
	cin.ignore();
	cout << "Enter the year built: ";
	cin >> yearMain;
	cout << "Enter the towing capacity: ";
	cin >> towingMain;
	Truck truck(manufactorMain, yearMain ,towingMain);
	truck.displayInfo();







}