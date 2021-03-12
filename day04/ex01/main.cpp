
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "MashineGun.hpp"
#include "Joker.hpp"
#include <iostream>

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* mutant = new SuperMutant();
	Enemy* scorp = new RadScorpion();
	Enemy* joker = new Joker();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* mg = new MashineGun();
	std::cout << std::endl;

	me->equip(mg);
	std::cout << *me;
	for (int i = 0; i < 14; i++) {
		me->attack(scorp);
		if (scorp != NULL)
			if (me->getAP() < scorp->getHP()) {
				me->recoverAP();
				std::cout << scorp->getHP() << std::endl;
			}
	}
	std::cout << std::endl << std::endl;
	me->equip(pr);
	std::cout << *me;
	for (int i = 0; i < 14; i++) {
		me->attack(joker);
		if (joker != NULL)
			if (me->getAP() < joker->getHP()) {
				me->recoverAP();
				std::cout << joker->getHP() << std::endl;
			}
	}
	std::cout << std::endl << std::endl;
	me->equip(mg);
	std::cout << *me;
	me->equip(pf);
	std::cout << *me;
	for (int i = 0; i < 14; i++) {
		me->attack(mutant);
		if (mutant != NULL)
			if (me->getAP() < mutant->getHP()) {
				me->recoverAP();
				std::cout << mutant->getHP() << std::endl;
			}
	}
	std::cout << std::endl << std::endl;
	if (pf)
		delete pf;
	if (joker)
		delete joker;
	if (scorp)
		delete scorp;
	if (mutant)
		delete mutant;
	if (me)
		delete me;
	if (pr)
		delete pr;
	if (mg)
		delete mg;

	return 0;
}
