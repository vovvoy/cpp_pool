#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>

# include "Bureaucrat.hpp"

class Form
{
private:
	bool                      _signed;
	const int                 _grade_to_sign;
	const int                 _grade_to_execute;
	const std::string         _name;
	std::string               _target;

public:
	Form(const Form &src);
	Form(std::string target, std::string name, \
         int grade_to_sign, int grade_to_execute);

	virtual ~Form() = 0;

	Form                      &operator= (const Form &other);

	void                      beSigned(Bureaucrat &bureaucrat);

	bool                      getSigned(void) const;
	int                       getGradeToSign(void) const;
	int                       getGradeToExecute(void) const;
	std::string               getName(void) const;
	std::string               getTarget(void) const;

	virtual void              execute(const Bureaucrat &executor) const = 0;

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char    *what(void) const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char    *what(void) const throw();
    };

    class NotSignedException : public std::exception
    {
    public:
        virtual const char    *what(void) const throw();
    };

};

std::ostream                  &operator<< (std::ostream &out, const Form &other);

#endif
