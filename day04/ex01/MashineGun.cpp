#include "MashineGun.hpp"
#include <iostream>

MashineGun::MashineGun() : AWeapon("Mashine Gun", 15, 100) { }

void MashineGun::attack() const
{
	std::cout <<  "* DADADADADADADADADADADADA *" << std::endl;
}
