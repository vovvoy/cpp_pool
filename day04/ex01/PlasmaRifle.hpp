//
// Created by Антон Чапарин on 05.03.2021.
//

#ifndef EX01_PLASMARIFLE_HPP
#define EX01_PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	void attack() const;
};


#endif //EX01_PLASMARIFLE_HPP
