/*
Michael Hughes
CIS 1202 101
04/25/2022
*/

#include"SUV.h"

void Display_Info(Vehicle_C& obj);

int main()
{
	string man;
	int yr;
	int dr;
	int tankC;

	Vehicle_C vehicle;
	Car_C car;
	SUV_C suv;

	cout << "\nVehicle: "; // vehicle
	cout << "\nEnter the manufacturer: ";
	getline(cin, man);

	cout << "\nEnter the year built: ";
	cin >> yr;

	vehicle.Set_Manufacturer(man);
	vehicle.Set_YearBuilt(yr);

	cout << "\nVehicle Information: ";
	Display_Info(vehicle); // display vehicle

	cout << endl;
	cin.ignore();
	cin.clear();

	cout << "\nCar: "; // car
	cout << "\nEnter the manufacturer: ";
	getline(cin, man);

	cout << "\nEnter the year built: ";
	cin >> yr;

	cout << "\nEnter the number of doors: ";
	cin >> dr;

	car.Set_Manufacturer(man);
	car.Set_YearBuilt(yr);
	car.Set_NumDoors(dr);

	cout << "\nVehicle Information: ";
	Display_Info(car); // display car

	cout << endl;
	cin.ignore();
	cin.clear();

	cout << "\nSUV: "; // SUV
	cout << "\nEnter the manufacturer: ";
	getline(cin, man);

	cout << "\nEnter the year built: ";
	cin >> yr;

	cout << "\nEnter the number of doors: ";
	cin >> dr;

	cout << "\nEnter tank capacity: ";
	cin >> tankC;

	suv.Set_Manufacturer(man);
	suv.Set_YearBuilt(yr);
	suv.Set_NumDoors(dr);
	suv.Set_TankCapacity(tankC);

	cout << "\nVehicle Information: ";
	Display_Info(suv); // display suv

	cout << endl;

	cout << endl << endl;
	system("pause");
	return 0;
}

void Display_Info(Vehicle_C& obj)
{
	obj.Display_Data();
}