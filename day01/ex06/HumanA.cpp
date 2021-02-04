#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &w): _name(name), _w(&w) { }

void HumanA::attack() {
	std::cout << _name << " attacks with his " << _w->getType() << std::endl;
}
HumanA::~HumanA() { }