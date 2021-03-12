#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>

class AWeapon
{
private:
	std::string name;
	int 		damage;
	int 		apcost;

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon& other);
	virtual ~AWeapon();
	
	AWeapon& operator=(const AWeapon& other);

	std::string const & getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};


#endif
