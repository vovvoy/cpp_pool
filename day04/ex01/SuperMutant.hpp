//
// Created by Антон Чапарин on 05.03.2021.
//

#ifndef EX01_SUPERMUTANT_HPP
#define EX01_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(const SuperMutant &other);
	~SuperMutant();

	void takeDamage(int damage);
};


#endif //EX01_SUPERMUTANT_HPP
