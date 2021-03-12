#include <iostream>
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

int main() {
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* emma = new AssaultTerminator;
	ISpaceMarine* emma1;
//	ISpaceMarine* tom;
	ISquad* vlc = new Squad;
	vlc->push(bob);
//	vlc->push(tom);
	vlc->push(emma);
	emma1 = emma->clone();
	vlc->push(emma1);
//	std::cout << vlc->getCount() << std::endl;
	vlc->push(bob);
//	std::cout << vlc->getCount() << std::endl;
	vlc->push(jim);
	ISquad * vov;
	vov = vlc;
//	std::cout << vlc->getCount() << std::endl;
	for (int i = 0; i < vov->getCount(); ++i)
	{
		ISpaceMarine* cur = vov->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
    return 0;
}
