#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human {
private:
	Brain _a = Brain();
public:
	Human();
	Brain &getBrain();
	std::string identify() const;
	~Human();
};
#endif