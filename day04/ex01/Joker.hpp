#ifndef EX01_DARTH_HPP
#define EX01_DARTH_HPP

#include "Enemy.hpp"

class Azar : public Enemy
{
public:
	Azar();
	Azar(const Azar &other);
	~Azar();

	void takeDamage(int damage);
};


#endif
