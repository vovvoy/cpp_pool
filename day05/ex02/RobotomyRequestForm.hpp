#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <ctime>
# include <cstdlib>
# include <iostream>

# include "Form.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &src);

    ~RobotomyRequestForm(void);

    RobotomyRequestForm     &operator= (const RobotomyRequestForm &other);

    virtual void            execute(const Bureaucrat &executor) const;

};

#endif
