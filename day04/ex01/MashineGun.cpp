#include "JediSword.hpp"
#include <iostream>

JediSword::JediSword() : AWeapon("Jedi Sword", 15, 100) { }

void JediSword::attack() const
{
	std::cout <<  "* whuuuh whuuuh *" << std::endl;
}
