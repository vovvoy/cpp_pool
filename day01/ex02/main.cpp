#include "ZombieEvent.hpp"

int main () {
	ZombieEvent justDoIt;
	std::string name;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
		if (i == 0)
			name += (char)(rand() % 26 + 97 - 32);
		else
			name += (char)(rand() % 26 + 97);
		
	Zombie* ljerrica = justDoIt.newZombie(name);
	ljerrica->announce();
	justDoIt.randomChump();
	delete ljerrica;
	return (0);
}