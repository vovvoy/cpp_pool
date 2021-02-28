#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    static std::string _vaulthunterQuotes[8];

public:
    FragTrap(const std::string & name);
    FragTrap(const FragTrap & obj);
    ~FragTrap();

    FragTrap &operator=(const FragTrap & op);

    void            rangedAttack(std::string const & target);
    void            meleeAttack(std::string const & target);

    void			vaulthunter_dot_exe(std::string const & target);
};

static void pre_message(std::string& name, unsigned int hp);

#endif
