#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const int integer) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = integer << this->_fractionnal_bits;
}
Fixed::Fixed(const float floater) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)(roundf(floater * (1 << this->_fractionnal_bits)));
}
Fixed::Fixed(const Fixed& copy) {
	std::cout << "Copy constructor called" << std::endl;
	this->_value = copy.getRawBits();
}
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed& op) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &op)
		this->_value = op.getRawBits();
	return (*this);
}
int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}
void Fixed::setRawBits(int const raw) { this->_value = raw; }

float Fixed::toFloat(void) const {
	return ((float)this->_value / (float)(1 << this->_fractionnal_bits));
}

int Fixed::toInt(void) const{
	return ((int)(this->_value >> this->_fractionnal_bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixe) {
	out << fixe.toFloat();
	return (out);
}