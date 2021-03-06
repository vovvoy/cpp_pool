#include "Form.hpp"
#include "Bureaucrat.hpp"



Form::Form(const Form &src) :
    _signed(src._signed),
    _grade_to_sign(src._grade_to_sign),
    _grade_to_execute(src._grade_to_execute),
    _name(src._name),
    _target(src._target)
{
    *this = src;
    return ;
}


Form::Form(std::string target, std::string name, \
            int grade_to_sign, int grade_to_execute) :
    _signed(false),
    _grade_to_sign(grade_to_sign),
    _grade_to_execute(grade_to_execute),
    _name(name),
    _target(target)
{
    if (this->_grade_to_sign < 1 || this->_grade_to_execute < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if (this->_grade_to_sign > 150 || this->_grade_to_execute > 150)
    {
        throw Form::GradeTooLowException();
    }
    return ;
}

Form::~Form(void)
{
    return ;
}

Form &Form::operator= (const Form &other)
{
    if (this != &other)
    {
        this->_signed = other._signed;
    }
    return (*this);
}


const char *Form::GradeTooHighException::what(void) const throw()
{
    return ("Error: Grade is too high to sign");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
    return ("Error: Grade is too low to sign");
}

const char* Form::NotSignedException::what(void) const throw()
{
    return ("Error: Form not signed, yet");
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_grade_to_sign)
    {
        throw Form::GradeTooLowException();
    }
    else
    {
        this->_signed = true;
    }
    return ;
}


bool Form::getSigned(void) const
{
    return (this->_signed);
}

int Form::getGradeToSign(void) const
{
    return (this->_grade_to_sign);
}

int Form::getGradeToExecute(void) const
{
    return (this->_grade_to_execute);
}

std::string Form::getName(void) const
{
    return (this->_name);
}

std::string Form::getTarget(void) const
{
    return (this->_target);
}

void Form::execute(const Bureaucrat& executor) const
{
    if (executor.getGrade() > _grade_to_execute)
    {
        throw Form::GradeTooLowException();
    }
    else if (!_signed) 
    {
        throw Form::NotSignedException();
    }
}

std::ostream &operator<< (std::ostream &out, const Form &other)
{
    out << "The form: " << other.getName() << " which is " \
        << (other.getSigned() ? "" : "not ") \
        << " signed, which requires a grade " << other.getGradeToSign() \
        << " to sign, and " << other.getGradeToExecute() << " to be executed." \
        << std::endl;
    return (out);
}
