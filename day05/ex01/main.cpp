#include <iostream>
#include <stdexcept>

#include "Form.hpp"
#include "Bureaucrat.hpp"

#define cout std::cout
#define endl std::endl
#define exc std::exception

int
main(void)
{
	{
		try {
			Bureaucrat test("Arslan", 400);
			Form anotherOne("Cool", 4, 43);
			test.signForm(anotherOne);
		}
		catch (exc &ex) {
			cout << ex.what() << endl;
		}
	}
	cout << endl << endl;
	{
		try {
			Bureaucrat test("Arslan", 40);
			Form anotherOne("Cool", 4, 43);
			test.signForm(anotherOne);
		}
		catch (exc &ex) {
			cout << ex.what() << endl;
		}
	}
	cout << endl << endl;
	{
		try {
			Bureaucrat test("Arslan", 1);
			Form anotherOne("Cool", 4, 43);
			test.signForm(anotherOne);
		}
		catch (exc &ex) {
			cout << ex.what() << endl;
		}
	}
    return (0);
}
