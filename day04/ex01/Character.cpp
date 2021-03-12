//
// Created by Антон Чапарин on 05.03.2021.
// Copyright (c) 2021 a-cha. All rights reserved.
//

#include "Character.hpp"
#include <iostream>

Character::Character(const std::string &name) :
	name(name),
	ap(40),
	weapon()
{ }

Character::Character(const Character &other)
{
	*this = other;
}

Character::~Character() { }

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->ap = other.ap;
		this->weapon = other.weapon;
	}
	return *this;
}

void Character::recoverAP()
{
	ap += 10;
	if (ap > 40)
		ap = 40;
}

void Character::equip(AWeapon *pWeapon)
{
	this->weapon = pWeapon;
}

void Character::attack(Enemy *enemy)
{
	if (enemy)
	{
		if (weapon)
		{
			if (ap >= weapon->getAPCost())
			{
				std::cout << this->getName() << " attacks " << enemy->getType()
						  << " with a " << weapon->getName() << std::endl;
				weapon->attack();
				ap -= weapon->getAPCost();
				enemy->takeDamage(weapon->getDamage());
				if (enemy->getHP() == 0)
					delete enemy;
			} else
				std::cout << "No enough action points for using "
						  << weapon->getName() << std::endl;
		} else
			std::cout << "No weapon equipped" << std::endl;
	} else
		std::cout << "Is there any alive enemy to fight with?" << std::endl;
}

std::string const &Character::getName() const
{
	return name;
}

int Character::getAP() const
{
	return ap;
}

std::string Character::getWeaponName() const
{
	return weapon->getName();
}

bool Character::isWeapon() const
{
	return weapon != NULL;
}

std::ostream & operator<<(std::ostream & os, const Character & other)
{
	if (other.isWeapon())
		os << other.getName() << " has " << other.getAP() << " AP and wields a "
		   << other.getWeaponName() << std::endl;
	else
		std::cout << other.getName() << " has " << other.getAP() << " AP and is unarmed" << std::endl;
	return os;
}
