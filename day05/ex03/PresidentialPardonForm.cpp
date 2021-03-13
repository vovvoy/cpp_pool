#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    Form(target, "Presidential", \
    25, 5)
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &s):
    Form("Anonymous", "Presidential", \
    25, 5)
{
    *this = s;
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    return ;
}

PresidentialPardonForm
&PresidentialPardonForm::operator= (const PresidentialPardonForm &other)
{
    static_cast <void> (other);
    return (*this);
}

void
PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (this->getSigned())
	{
		if (executor.getGrade() <= this->getGradeToExecute())
			std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		else
			throw Form::GradeTooLowException();
	}
	else
		throw Form::NotSignedException();
    return ;
}
