#pragma once
#include "Car.h"
class SUV : public Car {
private:
	int spareWheels;
	int spareWindows;
	int sparePA;
public:
	void klaxon(int);
	void setSparewheels(int);
	int getSparewheels();
	void setSparewindows(int);
	int getTotalwindows();
	void setSparePA(int);
	int getAdditionalPA();
	float getTotalPrice();
	float getTotalDistance();
};