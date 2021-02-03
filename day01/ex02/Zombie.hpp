#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
#include <cstdlib>
#include <ctime>

class Zombie {
private:
	std::string _name;
	std::string _type;
public:
	Zombie();
	void announce();
	~Zombie();
	void setZombieName(std::string &name);
	void setZombieType(std::string &type);
};

#endif