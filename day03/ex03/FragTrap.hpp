#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    void			blablaAttack(std::string const & target);
    void			school21Attack(std::string const & target);
    void			fartAttack(std::string const & target);
    void			lostAttack(std::string const & target);
    void			funnyAttack(std::string const & target);

public:
    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap&);
    virtual ~FragTrap();
    FragTrap &operator=(const FragTrap& op);
    void			vaulthunter_dot_exe(std::string const & target);
};


#endif //FRAGTRAP_HPP
