#include "Character.hpp"

Character::Character(const std::string &name) :
		name(name),
		equipped(0)
{
	for (int i = 0; i < MAX_EQUIPPED; i++)
		inventory[i] = NULL;
}

std::string const &Character::getName() const
{
	return name;
}

void Character::equip(AMateria *m)
{
	if (equipped == MAX_EQUIPPED || !m)
		return;
	for (int i = 0; i < equipped; i++)
		if (inventory[i] == m)
			return;
	for (int i = 0; i < MAX_EQUIPPED; i++)
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			break;
		}
	equipped++;
}

void Character::unequip(int idx)
{
	if (equipped > idx)
	{
		inventory[idx] = NULL;
		equipped--;
	}
}

void Character::use(int idx, ICharacter &target)
{
	inventory[idx]->use(target);
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		name = other.name;
		for (int i = 0; i < this->equipped; i++)
			delete this->inventory[i];
		for (int i = 0; i < other.equipped; i++)
			this->inventory[i] = other.inventory[i]->clone();
		equipped = other.equipped;
	}
	return *this;
}

Character::Character(const Character &other)
{
	*this = other;
}

Character::~Character()
{
	for (int i = 0; i < equipped; i++)
		delete inventory[i];
}
