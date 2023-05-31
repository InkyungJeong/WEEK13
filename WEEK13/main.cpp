#include <iostream>
#include "Car.h"
#include "SUV.h"
int main() {
	SUV* newSUV = new SUV();
	Car* newCar = new Car();
	newSUV->setSparewindows(3);
	std::cout << " windows " << newSUV->windows << "\n";
	std::cout << " windows " << newSUV->getWindows() << "\n";
	newSUV->getTotalDistance();
	std::cout << " Total distance is " << newSUV->distance << std::endl;
	newSUV->setSparePA(4);
	std::cout << " PA " << newSUV->pa << "\n";
	std::cout << " PA " << newSUV->getAdditionalPA() << "\n";

	newCar->pa = 4;
	std::cout << " newCar->pa " << newCar->pa << "\n";
	newCar->setWindows(4);
	std::cout << " newCar->windows " << newCar->windows << "\n";
	std::cout << " newCar->windows " << newCar->getWindows() << "\n";
	newCar->distance = 100.0;
	newCar->setdistance(70.0);
	std::cout << " newCar->distance " << newCar->distance << "\n";
	std::cout << " newCar->distance " << newCar->getdistance() << "\n";
	newCar->speedChange(100.0);
	std::cout << " newCar->speed " << newCar->speed << "\n";
	delete newSUV;
	delete newCar;
	return 111;
}