#include <iostream>
#include <stdexcept>

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

#define cout std::cout
#define endl std::endl
#define exc std::exception


int main(void)
{


	{
		try {
			Bureaucrat b1("B1", 69);
			ShrubberyCreationForm f1("SCF_2");
			RobotomyRequestForm f2("RRF_2");
			PresidentialPardonForm f3("PDF_2");
			b1.signForm(f1);
			b1.signForm(f2);
			b1.signForm(f3);

			b1.executeForm(f1);
			b1.executeForm(f2);
			b1.executeForm(f3);
		}
		catch (exc &e) {
			cout << e.what() << endl;
		}
	}
	cout << endl;
	{
		try {
			Bureaucrat b2("B2", 42);
			ShrubberyCreationForm f1("SCF_2");
			RobotomyRequestForm f2("RRF_2");
			PresidentialPardonForm f3("PDF_2");
			b2.signForm(f1);
			b2.signForm(f2);
			b2.signForm(f3);

			b2.executeForm(f1);
			b2.executeForm(f2);
			b2.executeForm(f3);
		}
		catch (exc &e) {
			cout << e.what() << endl;
		}
	}
	cout << endl;
	{
		try {
			Bureaucrat b3("B3", 1);
			ShrubberyCreationForm f1("SCF_2");
			RobotomyRequestForm f2("RRF_2");
			PresidentialPardonForm f3("PDF_2");
			b3.signForm(f1);
			b3.signForm(f2);
			b3.signForm(f3);

			b3.executeForm(f1);
			b3.executeForm(f2);
			b3.executeForm(f3);
		}
		catch (exc &e) {
			cout << e.what() << endl;
		}
	}

    return (0);
}
