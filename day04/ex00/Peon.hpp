#ifndef PEON_HPP
#define PEON_HPP

# include <iostream>

# include "Victim.hpp"

class Peon : public Victim{
protected:
	Peon();

public:
	Peon(std::string name);
	Peon(const Peon &other);

	virtual ~Peon();

	Peon& operator=(const Peon &other);

	virtual void getPolymorphed() const;
};

std::ostream &operator <<(std::ostream &stream, Peon &peon);

#endif
