#ifndef Vehicle_C_
#define Vehicle_C_

#include<string>
#include<iostream>

using namespace std;

class Vehicle_C
{
private:
	string manufacturer;
	int yearBuilt;

public:
	Vehicle_C();
	Vehicle_C(string, int);

	void Set_Manufacturer(string);
	void Set_YearBuilt(int);

	string Get_Manufacturer() const;
	int Get_YearBuilt() const;

	virtual void Display_Data();
};
#endif