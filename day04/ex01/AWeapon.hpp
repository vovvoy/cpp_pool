//
// Created by Антон Чапарин on 05.03.2021.
// Copyright (c) 2021 a-cha. All rights reserved.
//

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


#endif //AWEAPON_HPP
