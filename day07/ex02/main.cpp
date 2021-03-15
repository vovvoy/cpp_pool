#include <iostream>
#include <string>
#include "Array.hpp"


int main(void)
{
	Array<int> a(20);

	std::cout << "First array -> ";
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	std::cout << "First array after filling it -> ";
	for (unsigned int i = 0; i < a.size(); i++)
	{
		a[i] = i;
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;

	Array<int> b(a);

	std::cout << "Second array copied by First -> ";
	for (unsigned int i = 0; i < b.size(); i++)
	{
		b[i] = i + 1;
		std::cout << b[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "First array again with exception -> ";
	try{
		for (unsigned int i = 0; i < a.size() + 1; i++)
			std::cout << a[i] << " ";
		std::cout << std::endl;
	}

	catch(std::exception &ex){
		std::cout << std::endl << ex.what() << std::endl;
	}

	Array<int> c;

	c = b;
	std::cout << "Third array with operaton '=' -> ";
	for (unsigned int i = 0; i < c.size(); i++)
	{
		c[i]++;
		std::cout << c[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "Second array again -> ";
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;
	std::cout << "Third array size -> " << c.size() << std::endl;
}