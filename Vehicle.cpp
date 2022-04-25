#include "Vehicle.h"

Vehicle_C::Vehicle_C()
{
	manufacturer = "";
	yearBuilt = 0;
}

Vehicle_C::Vehicle_C(string man, int yr)
{
	manufacturer = man;
	yearBuilt = yr;
}

void Vehicle_C::Set_Manufacturer(string man)
{
	manufacturer = man;
}

void Vehicle_C::Set_YearBuilt(int yr)
{
	yearBuilt = yr;
}

string Vehicle_C::Get_Manufacturer() const
{
	return manufacturer;
}

int Vehicle_C::Get_YearBuilt() const
{
	return yearBuilt;
}

void Vehicle_C::Display_Data()
{
	cout << "\nManufacturer: " << manufacturer;
	cout << "\nYear Built: " << yearBuilt;
}