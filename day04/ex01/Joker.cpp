#include "Joker.hpp"
#include <iostream>

Joker::Joker() : Enemy(200, "Joker")
{
	std::cout << "* What doesn't kill you, simply make you stranger *" << std::endl;
}

Joker::Joker(const Joker &other) : Enemy(other)
{
	std::cout << "* What doesn't kill you, simply make you stranger *" << std::endl;
}

Joker::~Joker()
{
	std::cout << "* I'm dead but I smile *" << std::endl;
}

void Joker::takeDamage(int damage)
{
	reduceHP(damage - 5);
}
