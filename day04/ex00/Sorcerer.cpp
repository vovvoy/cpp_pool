#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const &name, std::string const &title):
		_name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &other):
		_name(other._name), _title(other._title)
{
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title\
 << ", is dead.  Consequences will never be the same!" << std::endl;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &other)
{
	this->_name = other._name;
	this->_title = other._title;
	return (*this);
}

std::string const &Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string const &Sorcerer::getTitle(void) const
{
	return (this->_title);
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
	out << "I am " << sorcerer.getName() << ", "
		<< sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return (out);
}
