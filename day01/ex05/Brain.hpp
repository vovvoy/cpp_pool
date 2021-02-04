#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <sstream>

class Brain {
private:
	double _memory;
	std::string _nickname;
public:
	Brain();
	std::string identify() const;
	~Brain();
};
#endif