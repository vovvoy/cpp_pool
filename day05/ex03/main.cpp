#include <iostream>
#include <stdexcept>

#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	std::cout << *f1 << std::endl;
	std::cout << *f2 << std::endl;
	std::cout << *f3 << std::endl;

	b1.signForm(*f1);
	b1.executeForm(*f1);

	f4 = i1.makeForm("TEST", "Marvin");

	return (0);
}