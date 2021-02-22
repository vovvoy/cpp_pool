#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap&);
    virtual ~ScavTrap();
    ScavTrap &operator=(const ScavTrap& op);

    void			challengeNewcomer(std::string const & target);
};


#endif //EX01_SCAVTRAP_HPP