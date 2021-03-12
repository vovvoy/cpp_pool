#ifndef EX01_JEDI_SWORD_HPP
#define EX01_JEDI_SWORD_HPP

#include "AWeapon.hpp"

class MashineGun : public AWeapon
{
public:
	MashineGun();
	void attack() const;
};


#endif //EX01_JEDI_SWORD_HPP
