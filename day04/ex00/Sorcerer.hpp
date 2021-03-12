#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer {
private:
	std::string _name;
	std::string _title;
public:
	Sorcerer(std::string const &name, std::string const &title);
	Sorcerer(const Sorcerer& other);
	virtual ~Sorcerer();

	Sorcerer &operator=(const Sorcerer& other);

	std::string const &getName() const;
	std::string const &getTitle() const;

	void polymorph(Victim const &victim) const;
};


std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer);

#endif
