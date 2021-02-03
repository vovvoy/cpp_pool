
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {}

ZombieEvent::~ZombieEvent() {}

void ZombieEvent::setZombieType(std::string &type, Zombie *Blabla) {
	Blabla->setZombieType(type);
}

Zombie *ZombieEvent::newZombie(std::string &name) {
	Zombie* vovvoy = new Zombie;
	std::string type;
	for (int i = 0; i < 5; i++)
		type += (char)(rand() % 26 + 97);
	vovvoy->setZombieName(name);
	setZombieType(type, vovvoy);
	return (vovvoy);
}

void ZombieEvent::randomChump() {
	Zombie ljerrica;
	std::string name;
	std::string type;
	for (int i = 0; i < 10; i++)
		if (i == 0)
			name += (char)(rand() % 26 + 97 - 32);
		else
			name += (char)(rand() % 26 + 97);
	for (int i = 0; i < 5; i++)
		type += (char)(rand() % 26 + 97);
	ljerrica.setZombieName(name);
	ljerrica.setZombieType(type);
	ljerrica.announce();
}
