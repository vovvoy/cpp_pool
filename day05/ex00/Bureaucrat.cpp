#include "sstream"
#include "Bureaucrat.hpp"

const int Bureaucrat::GRADE_HIGHEST = 1;
const int Bureaucrat::GRADE_LOWEST = 150;

Bureaucrat::Bureaucrat(const std::string name, int grade) :
		_name(name)
{
	this->_grade = ensureGradeRange(grade);
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) :
		_name(other._name)
{
	this->operator =(other);
}

Bureaucrat&
Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		this->_grade = ensureGradeRange(other._grade);
	}

	return (*this);
}

int
Bureaucrat::ensureGradeRange(int grade)
{
	if (grade < Bureaucrat::GRADE_HIGHEST)
		throw Bureaucrat::GradeTooHighException();
	if (grade > Bureaucrat::GRADE_LOWEST)
		throw Bureaucrat::GradeTooLowException();

	return (grade);
}

const std::string&
Bureaucrat::getName() const
{
	return (this->_name);
}

int
Bureaucrat::getGrade() const
{
	return (this->_grade);
}

int
Bureaucrat::gradeUP()
{
	return (this->_grade = ensureGradeRange(_grade - 1));
}

int
Bureaucrat::gradeDOWN()
{
	return (this->_grade = ensureGradeRange(_grade + 1));
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) :
		std::exception()
{
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw ()
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException(
		const GradeTooHighException &other)
{
	this->operator = (other);
}

Bureaucrat::GradeTooHighException&
Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException &other)
{
	(void)other;
	return (*this);
}

const char*
Bureaucrat::GradeTooHighException::message() const throw ()
{
	return "Grade is too high";
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) :
		std::exception()
{
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw ()
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException(
		const GradeTooLowException &other)
{
	this->operator =(other);
}

Bureaucrat::GradeTooLowException&
Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException &other)
{
	(void)other;
	return (*this);
}

const char*
Bureaucrat::GradeTooLowException::message() const throw ()
{
	return "Grade is too low";
}

std::ostream&
operator<<(std::ostream &outStream, const Bureaucrat &bureaucrat)
{
	return (outStream << bureaucrat.getName() //
					  << ", bureaucrat grade " //
					  << bureaucrat.getGrade());
}
