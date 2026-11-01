
#include <iostream>
#include "Ship.h"

int main()
{
	Ship playerShip;

	playerShip.displayStatus();

	playerShip.useFuel(20);
	playerShip.damageHull(15);
	playerShip.addCredits(250);

	std::cout << "\nAFTER Updates:\n";
	playerShip.displayStatus();

	return 0;

}
