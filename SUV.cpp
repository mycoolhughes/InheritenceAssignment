#include"SUV.h"

SUV_C::SUV_C() : Car_C()
{
	tankCapacity = 0;
}

SUV_C::SUV_C(int tankC, int dr, string man, int yr) : Car_C(dr, man, yr)
{
	tankCapacity = tankC;
}

void SUV_C::Set_TankCapacity(int tankC)
{
	tankCapacity = tankC;
}

int SUV_C::Get_TankCapacity() const
{
	return tankCapacity;
}

void SUV_C::Display_Data()
{
	cout << "\nManufacturer: " << Get_Manufacturer();
	cout << "\nYear Built: " << Get_YearBuilt();
	cout << "\nDoors: " << Get_NumDoors();
	cout << "\nTank capacity: " << tankCapacity << " gallons";
}