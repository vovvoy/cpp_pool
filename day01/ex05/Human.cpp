#include "Human.hpp"

Human::Human() {}

Brain &Human::getBrain() {
	return (_a);
}
std::string  Human::identify() const{
	return (_a.identify());
}
Human::~Human() {}