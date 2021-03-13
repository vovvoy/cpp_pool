#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>

# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &src);

    ~ShrubberyCreationForm(void);

    ShrubberyCreationForm   &operator= (const ShrubberyCreationForm &rhs);

    virtual void            execute(const Bureaucrat &executor) const;

};

#endif
