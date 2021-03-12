
#include "SpongeBob.hpp"
#include "iostream"

SpongeBob::SpongeBob() {
	std::cout << "I'm ready for battle!" << std::endl;
}

SpongeBob::SpongeBob(const SpongeBob &other) {
	this->operator = (other);
}

SpongeBob::~SpongeBob() {
	std::cout << "Buy Buy..." << std::endl;
}

SpongeBob & SpongeBob::operator=(const SpongeBob &other) {
	(void)other;
	return (*this);
}

ISpaceMarine* SpongeBob::clone() const
{
	return (new SpongeBob(*this));
}

void SpongeBob::battleCry() const {
	std::cout << "Aye-aye, captain!" << std:: endl;
}

void SpongeBob::rangedAttack() const {
	std::cout << "* Fish paste *" << std::endl;
}

void SpongeBob::meleeAttack() const {
	std::cout << "* No problemo *" << std::endl;
}