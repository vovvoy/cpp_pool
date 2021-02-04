#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(&type) { }

const std::string &Weapon::getType() {
	std::string &str = *_type;
	return (str);
}

void Weapon::setType(std::string str) {
	_type = &str;
}
Weapon::~Weapon() { }