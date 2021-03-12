//
// Created by Антон Чапарин on 05.03.2021.
//

#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) { }

void PlasmaRifle::attack() const
{
	std::cout <<  "* piouuu piouuu piouuu *" << std::endl;
}
