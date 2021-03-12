 #include "Azar.hpp"
#include <iostream>

Azar::Azar() : Enemy(200, "Azar")
{
	std::cout << "* You don’t know the power of the dark side *" << std::endl;
}

Azar::Azar(const Azar &other) : Enemy(other)
{
	std::cout << "* You don’t know the power of the dark side *" << std::endl;
}

Azar::~Azar()
{
	std::cout << "* It was said that you would destroy the Sith, not join them! *" << std::endl;
}

void Azar::takeDamage(int damage)
{
	reduceHP(damage - 5);
}
