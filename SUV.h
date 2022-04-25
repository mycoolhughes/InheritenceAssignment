#ifndef SUV_C_
#define SUV_C_

#include"Car.h"

class SUV_C : public Car_C
{
private:
	int tankCapacity;

public:
	SUV_C();
	SUV_C(int, int, string, int);

	void Set_TankCapacity(int);

	int Get_TankCapacity() const;

	virtual void Display_Data();
};
#endif;