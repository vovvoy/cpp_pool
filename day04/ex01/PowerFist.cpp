//
// Created by Антон Чапарин on 05.03.2021.
//

#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) { }

void PowerFist::attack() const
{
	std::cout <<  "* pschhh... SBAM! *" << std::endl;
}
