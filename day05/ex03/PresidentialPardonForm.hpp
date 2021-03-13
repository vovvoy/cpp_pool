# include "Form.hpp"
# include "Bureaucrat.hpp"

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP


class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &src);

    ~PresidentialPardonForm(void);

    PresidentialPardonForm  &operator= (const PresidentialPardonForm &other);

    virtual void            execute(const Bureaucrat &executor) const;

};

#endif
