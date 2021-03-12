#include "Elephant.hpp"

Elephant::Elephant() :
		Victim()
{
}

Elephant::Elephant(std::string name) :
		Victim(name)
{
	std::cout << "!!!PRREW!!!" << std::endl;
}

Elephant::Elephant(const Elephant &other) :
		Victim(other)
{
	std::cout << "!!!PRREW!!!" << std::endl;
}

Elephant::~Elephant()
{
	std::cout << "aaaaaaagh..." << std::endl;
}

Elephant&
Elephant::operator=(const Elephant &other)
{
	Victim::operator =(other);

	return (*this);
}

void
Elephant::getPolymorphed() const
{
	std::cout << _name << " was just polymorphed into a small mouse!" << std::endl;
}

std::ostream&
operator <<(std::ostream &stream, Elephant &elephant)
{
	return (stream << "I'm " << elephant.getName() << " and I like have fun!" << std::endl);
}
