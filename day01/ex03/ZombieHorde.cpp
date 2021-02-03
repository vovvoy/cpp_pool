#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n): _n(n) { }

ZombieHorde::~ZombieHorde(){ }

void ZombieHorde::announce() {
	Zombie* vovvoy = new Zombie[_n];
	std::string name;
	std::string type;
	int j = 1;

	for (int i = 0; i < _n; i++) {
		srand(j++);
		name = "";
		type = "";
		for (int i = 0; i < 10; i++)
			if (i == 0)
				name += (char)(rand() % 26 + 97 - 32);
			else
				name += (char)(rand() % 26 + 97);
		for (int i = 0; i < 5; i++)
			type += (char)(rand() % 26 + 97);
		vovvoy[i].setZombieName(name);
		vovvoy[i].setZombieType(type);
		vovvoy[i].announce();
	}
	delete [] vovvoy;
}