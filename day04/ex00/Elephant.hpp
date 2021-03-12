#ifndef ELEPHANT_HPP
#define ELEPHANT_HPP

#include "Victim.hpp"

class Elephant : public Victim{
protected:
	Elephant();

public:
	Elephant(std::string name);
	Elephant(const Elephant &other);

	virtual ~Elephant();

	Elephant& operator=(const Elephant &other);

	virtual void getPolymorphed() const;
};

std::ostream &operator <<(std::ostream &stream, Elephant &peon);


#endif
