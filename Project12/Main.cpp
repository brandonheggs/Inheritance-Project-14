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
	int numDoorMain;
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




}