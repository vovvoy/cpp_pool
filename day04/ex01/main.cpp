
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "JediSword.hpp"
#include "DarthVader.hpp"
#include <iostream>

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* mutant = new SuperMutant();
	Enemy* scorp = new RadScorpion();
	Enemy* darth = new DarthVader();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* js = new JediSword();

	std::cout << *me;
	me->attack(scorp);
	me->equip(pr);
	std::cout << *me;
	me->attack(scorp);
	me->equip(pf);
	std::cout << *me;
	me->attack(scorp);
	me->attack(scorp);
	std::cout << *me;
//	me->attack(scorp);
	me->equip(js);
	std::cout << *me;
	me->attack(darth);
	me->attack(darth);
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	me->attack(darth);
	me->equip(pr);
	std::cout << *me;
	me->attack(darth);
//	me->attack(darth);
	me->equip(pf);
	std::cout << *me;
	me->attack(mutant);
	std::cout << *me;

	return 0;
}
