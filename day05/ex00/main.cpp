#include <iostream>
#include <stdexcept>

#include "Bureaucrat.hpp"

#define cout std::cout
#define endl std::endl
#define exc std::exception

int main(void)
{
	try {
//		Bureaucrat test01("Abdel", 500);
		Bureaucrat    test("Batyr", 140);
		for (int i = 0; i < 150; i++){
			test.decrementGrade();
//			test.incrementGrade();
			cout << test;
		}
	} catch (exc &ex) {
		cout << ex.what() << endl;
	}

	return (0);
}
