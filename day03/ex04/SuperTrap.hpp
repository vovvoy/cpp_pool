#ifndef EX04_SUPERTRAP_HPP
#define EX04_SUPERTRAP_HPP


# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"


class SuperTrap : public virtual FragTrap, public virtual NinjaTrap
{
public:
    SuperTrap(const std::string name);
    SuperTrap(const SuperTrap & op);
    ~SuperTrap();

    SuperTrap &operator=(const SuperTrap & op);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
};

static void pre_message(const std::string & name, unsigned int hp);

#endif