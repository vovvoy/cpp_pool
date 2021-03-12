
//
// Created by Антон Чапарин on 05.03.2021.
// Copyright (c) 2021 a-cha. All rights reserved.
//

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage) :
	name(name),
	apcost(apcost),
	damage(damage)
{ }

AWeapon::AWeapon(const AWeapon &other)
{
	*this = other;
}

AWeapon::~AWeapon()
{

}

AWeapon &AWeapon::operator=(const AWeapon &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->damage = other.damage;
		this->apcost = other.apcost;
	}
	return *this;
}

std::string const &AWeapon::getName() const
{
	return name;
}

int AWeapon::getAPCost() const
{
	return apcost;
}

int AWeapon::getDamage() const
{
	return damage;
}
