#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_name = name;
		this->_grade = grade;
	}
}

Bureaucrat::~Bureaucrat(void)
{ }

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &rhs)
{
	if (this != &rhs)
	{
		this->_name  = rhs._name;
		this->_grade = rhs._grade;
	}
	return (*this);
}


const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: Grade is too low...");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Grade is too high");
}


void Bureaucrat::incrementGrade(void)
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;

	return ;
}

void Bureaucrat::decrementGrade(void)
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;

	return ;
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

std::ostream &operator<< (std::ostream &out, const Bureaucrat &other)
{
	out << other.getName() << ", bureaucrat grade " << other.getGrade() \
        << std::endl;
	return (out);
}
