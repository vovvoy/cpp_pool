#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) :
	_xp(0),
	type(type)
{ }

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria::~AMateria()
{ }

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		type = other.type;
		_xp = other._xp;
	}
	return *this;
}

std::string const &AMateria::getType() const
{
	return type;
}

unsigned int AMateria::getXP() const
{
	return _xp;
}

void AMateria::use(ICharacter &target)
{
	_xp	+= 10;
}
