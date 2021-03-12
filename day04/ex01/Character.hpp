#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <string>

class Character
{
private:
	std::string name;
	int 		ap;
	AWeapon		*weapon;

public:
	Character(std::string const & name);
	Character(const Character &other);
	~Character();

	Character &operator=(const Character &other);

	bool isWeapon() const;
	void recoverAP();
	void equip(AWeapon* pWeapon);
	void attack(Enemy*& enemy);
	std::string const & getName() const;
	int getAP() const;
	std::string getWeaponName() const;
};

std::ostream & operator<<(std::ostream & os, const Character & other);

#endif
