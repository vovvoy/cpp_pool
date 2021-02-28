#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap {
private:
    unsigned int	_hit_points;
    unsigned int	_max_hit_points;
    unsigned int	_energy_points;
    unsigned int	_max_energy_points;
    unsigned int	_level;
    std::string		_name;
    unsigned int	_melle_attack_damage;
    unsigned int	_ranged_attack_damage;
    unsigned int	_armor_damage_reduction;

    static  std::string _challenges[8];

public:
    ScavTrap(const std::string & name);
    ScavTrap(const ScavTrap & op);
    ~ScavTrap();

    ScavTrap & operator=(const ScavTrap& op);

    void			rangedAttack(std::string const & target);
    void			meleeAttack(std::string const & target);
    void			takeDamage(unsigned int amount);
    void			beRepaired(unsigned int amount);

    void		    challengeNewcomer(std::string const & target);

};

static void pre_message(std::string& name, unsigned int hp);

#endif
