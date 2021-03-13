#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>

# include "Bureaucrat.hpp"

class Form
{
private:
	const std::string         _name;
	const int                 _grade_to_sign;
	const int                 _grade_to_execute;
	bool                      _signed;

public:
	Form(void);
	Form(const Form &src);
	Form(std::string name, int grade_to_sign, int grade_to_execute);

	~Form(void);

	Form                      &operator= (const Form &rhs);

	void                      beSigned(Bureaucrat &bureaucrat);

	bool                      getSigned(void) const;
	int                       getGradeToSign(void) const;
	int                       getGradeToExecute(void) const;
	std::string               getName(void) const;

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char    *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
      virtual const char    *what() const throw();
    };

};

std::ostream                  &operator<< (std::ostream &out, const Form &rhs);

#endif
