#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include "Zombie.hpp"

class ZombieEvent {
public:
	ZombieEvent();
	void setZombieType(std::string &type, Zombie* Blabla);
	Zombie* newZombie(std::string &name);
	void randomChump();
	~ZombieEvent();
};
#endif