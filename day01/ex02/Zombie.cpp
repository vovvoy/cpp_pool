#include "Zombie.hpp"

Zombie::Zombie() {

}

//std::string Zombie::getZombieName(){
//	return (_name);
//}
//
//std::string Zombie::getZombieType(){
//	return (_type);
//}

void Zombie::setZombieName(std::string &name) {_name = name;}

void Zombie::setZombieType(std::string &type) {_type = type;}

void Zombie::announce() {
	std::cout << _name << " " << _type << "  Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie() {}