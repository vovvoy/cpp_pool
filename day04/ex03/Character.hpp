#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#define MAX_EQUIPPED (4)

class Character : public ICharacter
{
private:
	std::string name;
	AMateria	*inventory[MAX_EQUIPPED];
	int 		equipped;

public:
	explicit Character(std::string const & name);
	Character(const Character &other);
	virtual ~Character();

	Character &operator=(const Character &other);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif
