# include "Brain.hpp"

Brain::Brain() { }

std::string  Brain::identify() const{
	std::stringstream core;
	core << this;
	return (core.str());
}

Brain::~Brain() { }