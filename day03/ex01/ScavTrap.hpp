#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

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

    void			blablaAttack(std::string const & target);
    void			school21Attack(std::string const & target);
    void			fartAttack(std::string const & target);
    void			lostAttack(std::string const & target);
    void			funnyAttack(std::string const & target);
public:
    ScavTrap();
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& op);
    ~ScavTrap();
    ScavTrap &operator=(const ScavTrap& op);

    void			rangedAttack(std::string const & target);
    void			meleeAttack(std::string const & target);
    void			takeDamage(unsigned int amount);
    void			beRepaired(unsigned int amount);
    void		    challengeNewcomer(std::string const & target);

    std::string     getName();
    unsigned int    getRangedAttackPoint() const;
    unsigned int    getMeleeAttackPoint() const;
    unsigned int    getEnergyPoint() const;
};


#endif //EX01_SCAVTRAP_HPP
