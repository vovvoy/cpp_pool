#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB {
private:
	std::string _name;
	Weapon *_w;
public:
	HumanB(const std::string &name);
	void setWeapon(Weapon &club);
	void attack();
	
	~HumanB();
};

#endif