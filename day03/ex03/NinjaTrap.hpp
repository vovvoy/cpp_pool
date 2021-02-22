#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap;

class NinjaTrap : public ClapTrap
{
public:
    NinjaTrap();
    NinjaTrap(const std::string& name);
    NinjaTrap(const NinjaTrap&);
    virtual ~NinjaTrap();
    NinjaTrap &operator=(const NinjaTrap& op);
    void			rangedAttack(std::string const & target);
    void			meleeAttack(std::string const & target);
    void			ninjaShoebox(ClapTrap & claptrap);
    void			ninjaShoebox(NinjaTrap & claptrap);
    void			ninjaShoebox(ScavTrap & claptrap);
    void			ninjaShoebox(FragTrap & claptrap);
};
void pre_message(const std::string& name, unsigned int hp);

#endif //NINJATRAP_HPP
