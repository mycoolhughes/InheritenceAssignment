#include "Car.h"

Car_C::Car_C() : Vehicle_C()
{
	int doors = 0;
}

Car_C::Car_C(int dr) : Vehicle_C()
{
	doors = dr;
}

Car_C::Car_C(int dr, string man, int yr) : Vehicle_C(man, yr)
{
	doors = dr;
}

void Car_C::Set_NumDoors(int dr)
{
	doors = dr;
}

int Car_C::Get_NumDoors() const
{
	return doors;
}

void Car_C::Display_Data()
{
	cout << "\nDoors: " << doors;
}