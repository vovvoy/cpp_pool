#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Elephant.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Elephant joe("Joe");
	Peon rob("Robbert");

	std::cout << robert << jim << joe << rob;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(rob);
	return 0;
}