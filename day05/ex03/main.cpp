#include <iostream>
#include <stdexcept>

#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

#define cout std::cout
#define endl std::endl
#define exc std::exception


int
main(void)
{
	Form *f1;
	Form *f2;
	Form *f3;
	Form *f4;
	Intern i1;
	Bureaucrat b1 = Bureaucrat("Mr. Melis", 42);

	f1 = i1.makeForm("robotomyRequest", "vovvoy");
	f2 = i1.makeForm("presidentialPardon", "vovvoy");
	f3 = i1.makeForm("shrubberyCreation", "vovvoy");
	cout << *f1 << endl;
	cout << *f2 << endl;
	cout << *f3 << endl;

	b1.signForm(*f1);
	b1.executeForm(*f1);
	b1.signForm(*f3);
	b1.executeForm(*f3);

	f4 = i1.makeForm("TEST", "Marvin");
	return (0);
}