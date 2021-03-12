#ifndef EX02_ASSAULTTERMINATOR_HPP
#define EX02_ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator :public ISpaceMarine {
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator & other);
	~AssaultTerminator();
	AssaultTerminator& operator=(const AssaultTerminator & other);
	virtual ISpaceMarine* clone() const;

	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};


#endif
