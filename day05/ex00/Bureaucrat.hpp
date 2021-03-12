#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


# include <string>
# include <iostream>
# include <exception>

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;

	int ensureGradeRange(int grade);

public:
	static const int GRADE_LOWEST;
	static const int GRADE_HIGHEST;

	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);

	virtual ~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat &other);

	const std::string& getName() const;
	int getGrade() const;

	int gradeUP();
	int gradeDOWN();

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
		GradeTooHighException(const GradeTooHighException &other);

		virtual ~GradeTooHighException() throw ();

		GradeTooHighException& operator=(const GradeTooHighException & other);

		virtual const char* message() const throw ();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException();
		GradeTooLowException(const GradeTooLowException &other);

		virtual ~GradeTooLowException() throw ();

		GradeTooLowException& operator=(const GradeTooLowException &other);

		virtual const char* message() const throw ();
	};
};

std::ostream& operator<<(std::ostream& outStream, const Bureaucrat& bureaucrat);

#endif
