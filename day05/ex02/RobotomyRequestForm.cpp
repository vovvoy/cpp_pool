#include "RobotomyRequestForm.hpp"



RobotomyRequestForm::RobotomyRequestForm(std::string target) :
    Form(target, "Robotomy", \
    72, 45)
{
    srand(time(NULL));
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) :
    Form("Anonymous", "Robotomy", \
    72, 45)
{
    srand(time(NULL));
    *this = src;
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator= (const RobotomyRequestForm &other)
{
    static_cast <void> (other);
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (this->getSigned())
	{
		if (executor.getGrade() <= this->getGradeToExecute())
		{
			if (rand() % 2)
				std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
			else
				std::cout << this->getTarget() << " the robotomization has failed" << std::endl;
		}
		else
			throw Form::GradeTooLowException();
	}
	else
		throw Form::NotSignedException();
    return ;
}
