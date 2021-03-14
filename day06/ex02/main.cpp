#include <ctime>
#include<cstdlib>
#include <iostream>

class	Base
{
public:
	virtual ~Base(){ };
};

class	A : public Base {};
class	B : public Base {};
class	C : public Base {};



Base* generate(void){
	Base *base;
	int random = rand() % 3;
	if (random == 0)
		base = new A();
	if (random == 1)
		base = new B();
	if (random == 2)
		base = new C();
	return (base);
}
void identify_from_pointer(Base * p){
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base & p){

	try
	{
		A   &a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		static_cast<void>(a);
	}
	catch (std::bad_cast &ex)
	{ }
	try
	{
		B   &b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		static_cast<void>(b);
	}
	catch (std::bad_cast &ex)
	{ }
	try
	{
		C   &c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		static_cast<void>(c);
	}
	catch (std::bad_cast &ex)
	{ }
}

int main(void)
{
	srand(time(NULL));
	Base    *ptr = generate();

	identify_from_pointer(ptr);
	identify_from_reference(*ptr);

	return (0);
}