#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    *this = src;
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_name = name;
    this->_grade = grade;
    return ;
}

Bureaucrat::~Bureaucrat(void)
{
    return ;
}

Bureaucrat
&Bureaucrat::operator= (const Bureaucrat &other)
{
    if (this != &other)
    {
        this->_name  = other._name;
        this->_grade = other._grade;
    }
    return (*this);
}


const char
*Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Error: Grade is too low to create Bureaucrat");
}


const char
*Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Error: Grade is too high to create Bureaucrat");
}


void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signs " << form.getName() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << this->_name << " cannot sign " << form.getName()
                  << " because\n\t\t" << e.what() << std::endl;
    }
    return ;
}

void Bureaucrat::incrementGrade(void)
{
    if (this->_grade <= 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else
    {
        this->_grade -= 1;
    }
    return ;
}

void Bureaucrat::decrementGrade(void)
{
    if (this->_grade >= 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else
    {
        this->_grade += 1;
    }
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
