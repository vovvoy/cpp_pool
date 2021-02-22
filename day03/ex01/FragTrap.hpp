//
// Created by ljerrica on 14.02.2021.
//

#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class FragTrap {
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
    FragTrap();
    explicit FragTrap(std::string name);
    FragTrap(const FragTrap&);
    virtual ~FragTrap();
    FragTrap &operator=(const FragTrap& op);

    void			rangedAttack(std::string const &  target);
    void			meleeAttack(std::string const & target);
    void			takeDamage(unsigned int amount);
    void			beRepaired(unsigned int amount);
    void			vaulthunter_dot_exe(std::string const & target);

    std::string     getName();
    unsigned int    getRangedAttackPoint() const;
    unsigned int    getMelleAttackPoint() const;
    unsigned int    getEnergyPoint() const;
};


#endif //EX00_FRAGTRAP_HPP
