#include "Enemy.hpp"
#include <iostream>

Enemy::Enemy(int hp, std::string const & type) :
	hp(hp),
	type(type)
{ }

Enemy::Enemy(const Enemy &other)
{
	*this = other;
}

Enemy::~Enemy() { }

Enemy &Enemy::operator=(const Enemy &other)
{
	if (this != &other)
	{
		this->hp = other.hp;
		this->type = other.type;
	}
	return *this;
}

std::string const &Enemy::getType() const
{
	return type;
}

int Enemy::getHP() const
{
	return hp;
}

void Enemy::reduceHP(int damage)
{
	if (damage > 0)
	{
		hp -= damage;
		if (hp < 0)
			hp = 0;
	}
}

void Enemy::takeDamage(int damage)
{
	reduceHP(damage);
}
