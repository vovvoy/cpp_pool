//
// Created by Антон Чапарин on 05.03.2021.
//

#ifndef EX01_POWERFIST_HPP
#define EX01_POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	void attack() const;
};


#endif //EX01_POWERFIST_HPP
