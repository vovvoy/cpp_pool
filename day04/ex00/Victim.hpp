#ifndef VICTIM_HPP
#define VICTIM_HPP

# include <iostream>

class Victim
{
protected:
	std::string _name;

	Victim();

public:
	Victim(std::string name);
	Victim(const Victim &other);

	virtual ~Victim();

	Victim& operator=(const Victim &other);

	virtual void getPolymorphed() const;

	const std::string& getName() const;
};

std::ostream &operator <<(std::ostream &stream, Victim &victim);

#endif