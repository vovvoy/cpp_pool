#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include <cctype>

void		to_int(double n, std::string s)
{

	if (!isdigit(s[0]) && (s[0] != '+' && s[0] != '-') && (s.length() >= 3))
		std::cout << "int: impossible" << std::endl;
	else if (n > 2147483647  || n < -2147483648)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(n) << std::endl;
}

void		to_char(double n, std::string s)
{

	if (!isdigit(s[0]) && (s[0] != '+') && (s.length() >= 3))
		std::cout << "char: impossible" << std::endl;
	else if (n > 32 && n < 127)
		std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

int			main(int ac, char *av[])
{
	if (ac != 2)
		std::cout << "Example: ./convert 'number'" << std::endl;
	else
	{
		std::string			str;
		double				num;

		str = av[1];
		if (!isdigit(str[0]) && str.length() == 1)
			num = static_cast<int>(str[0]);
		else
			num = atof(av[1]);
		to_char(num, str);
		to_int(num, str);
		std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(num) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(num) << std::endl;
	}
	return 0;
}

