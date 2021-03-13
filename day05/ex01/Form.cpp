#include "Form.hpp"

Form::Form(void) :
    _signed(false),
    _grade_to_sign(1),
    _grade_to_execute(1),
    _name("undefined")
{
    return ;
}

Form::Form(const Form &src) :
    _signed(src._signed),
    _grade_to_sign(src._grade_to_sign),
    _grade_to_execute(src._grade_to_execute),
    _name(src._name)
{
    *this = src;
    return ;
}


Form::Form(std::string name, int grade_to_sign, int grade_to_execute) :
    _signed(false),
    _grade_to_sign(grade_to_sign),
    _grade_to_execute(grade_to_execute),
    _name(name)
{
    if (this->_grade_to_sign < 1 || this->_grade_to_execute < 1)
        throw Form::GradeTooHighException();
    else if (this->_grade_to_sign > 150 || this->_grade_to_execute > 150)
        throw Form::GradeTooLowException();
    return ;
}

Form::~Form(void)
{
    return ;
}

Form
&Form::operator= (const Form &other)
{
    if (this != &other)
    {
        this->_signed = other._signed;
    }
    return (*this);
}


const char
*Form::GradeTooHighException::what() const throw()
{
    return ("Error: Grade is too high to sign");
}

const char
*Form::GradeTooLowException::what() const throw()
{
    return ("Error: Grade is too low to sign");
}


void
Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_grade_to_sign)
        throw Form::GradeTooLowException();
    else
        this->_signed = true;
    return ;
}

bool
Form::getSigned(void) const
{
    return (this->_signed);
}

int
Form::getGradeToSign(void) const
{
    return (this->_grade_to_sign);
}

int
Form::getGradeToExecute(void) const
{
    return (this->_grade_to_execute);
}

std::string
Form::getName(void) const
{
    return (this->_name);
}

std::ostream
&operator<< (std::ostream &out, const Form &other)
{
    out << "The form: " << other.getName() \
        << (other.getSigned() ? " " : " not ") \
        << "signed, which requires " << other.getGradeToSign() \
        << " grade to sign, and " << other.getGradeToExecute() << " to be executed." \
        << std::endl;
    return (out);
}
