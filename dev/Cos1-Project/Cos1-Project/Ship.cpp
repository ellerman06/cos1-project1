#include "Ship.h"
#include "iostream"

Ship::Ship()
{
	fuel = 100;
	hull = 100;
	credits = 500;
}

void Ship::displayStatus() const
{
	std::cout << "\n===== SHIP STATUS ======\n";
	std::cout << "Fuel: " << fuel << std::endl;
	std::cout << "Hull: " << hull << std::endl;
	std::cout << "Credits: " << credits << std::endl;
	std::cout << "=========================\n";

}
