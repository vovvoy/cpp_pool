#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human {
private:
	Brain a;
public:
	Human();
	Brain* getBrain(Brain* a);
	void identify();
	~Human();
};
#endif