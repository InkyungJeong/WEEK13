#pragma once
class Car {
public:
	Car() :speed(0.1), wheels(0), price(0.2), windows(4), distance(0.0), pa(5){};
	Car(float, int, float, int, float, int);
	void setPrice(float);
	float getPrice();
	void setWindows(int);
	int getWindows();
	float speed;
	void speedChange(float);
	int wheels;
	void setWheels(int);
	int getWheels();
	void klaxon(int);
protected:
	float price;
	int pa;
	int windows;
	void speedUp(float);
	void speedDown(float);
private:
	float distance;
	void setdistance(float);
	float getdistance();
};
