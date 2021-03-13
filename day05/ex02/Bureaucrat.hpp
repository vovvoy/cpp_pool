#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Form;

class Bureaucrat
{
private:
	int                       _grade;
	std::string               _name;
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);

	~Bureaucrat(void);

	Bureaucrat                &operator= (const Bureaucrat &rhs);

	void                      setGrade(int grade);
	void                      setName(std::string name);

	void                      signForm(Form &form);
	void                      executeForm(const Form &form);

	void                      incrementGrade(void);
	void                      decrementGrade(void);

	int                       getGrade(void) const;
	std::string               getName(void) const;

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char    *what(void) const throw();
    };

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char    *what(void) const throw();
    };

};

std::ostream                    &operator<< (std::ostream &out, \
                                  const Bureaucrat &rhs);

#endif
