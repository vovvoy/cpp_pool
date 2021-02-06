#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& copy);
	Fixed &operator=(const Fixed& op);
	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int value;
	const static int fractionnal_bits = 8;
};

#endif