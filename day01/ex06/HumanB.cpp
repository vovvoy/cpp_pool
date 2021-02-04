#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name){ }

void HumanB::setWeapon(Weapon &club) {
	Weapon &m = club;
	_w = &m;
}

void HumanB::attack() {
	std::cout << _name << " attacks with his " << _w->getType() << std::endl;
}

HumanB::~HumanB() { }