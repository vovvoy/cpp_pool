//
// Created by Антон Чапарин on 05.03.2021.
// Copyright (c) 2021 a-cha. All rights reserved.
//

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>

class Enemy
{
private:
	int 		hp;
	std::string type;

protected:
	void		reduceHP(int damage);

public:
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy &other);
	virtual ~Enemy();

	Enemy &operator=(const Enemy &other);

	std::string const & getType() const;
	int getHP() const;
	virtual void takeDamage(int damage);
};


#endif //ENEMY_HPP
