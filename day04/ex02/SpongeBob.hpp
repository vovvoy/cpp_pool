#ifndef EX02_SPONGEBOB_HPP
#define EX02_SPONGEBOB_HPP

#include "ISpaceMarine.hpp"

class SpongeBob : public ISpaceMarine{
public:
	SpongeBob();
	SpongeBob(const SpongeBob &other);

	virtual ~SpongeBob();

	SpongeBob& operator=(const SpongeBob &other);

	virtual ISpaceMarine* clone() const;

	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};


#endif
