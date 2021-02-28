#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
private:
    static std::string _challenges[8];
public:
    ScavTrap(const std::string name);
    ScavTrap(const ScavTrap & obj);
    virtual ~ScavTrap();

    ScavTrap & operator=(const ScavTrap & op);

    void            rangedAttack(std::string const & target);
    void            meleeAttack(std::string const & target);

    void			challengeNewcomer(std::string const & target);
};

static void pre_message(std::string& name, unsigned int hp);

#endif
