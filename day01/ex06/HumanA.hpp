#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA {
private:
	std::string _name;
	Weapon *_w;
public:
	HumanA(const std::string &name, Weapon &w);
	void attack();
	~HumanA();
};

#endif