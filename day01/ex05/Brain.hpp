#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
private:
	double _memory;
	std::string _nickname;
public:
	Brain();
	std::string* identify();
	~Brain();
};
#endif