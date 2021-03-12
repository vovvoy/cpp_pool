#ifndef EX01_DARTH_HPP
#define EX01_DARTH_HPP

#include "Enemy.hpp"

class Joker : public Enemy
{
public:
	Joker();
	Joker(const Joker &other);
	~Joker();

	void takeDamage(int damage);
};


#endif
