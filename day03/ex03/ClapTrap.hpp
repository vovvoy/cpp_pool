#ifndef EX02_CLAPTRAP_HPP
#define EX02_CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class ClapTrap
{
protected:
    unsigned int	_hit_points;
    unsigned int	_max_hit_points;
    unsigned int	_energy_points;
    unsigned int	_max_energy_points;
    unsigned int	_level;
    std::string		_name;
    unsigned int	_melee_attack_damage;
    unsigned int	_ranged_attack_damage;
    unsigned int	_armor_damage_reduction;

public:
    ClapTrap();

    ClapTrap(
            unsigned int	hit_points,
            unsigned int	max_hit_points,
            unsigned int	energy_points,
            unsigned int	max_energy_points,
            unsigned int	level,
            std::string		name,
            unsigned int	melee_attack_damage,
            unsigned int	ranged_attack_damage,
            unsigned int	armor_damage_reduction
    );

    ClapTrap(const ClapTrap&);
    virtual ~ClapTrap();
    ClapTrap &operator=(const ClapTrap& op);

    unsigned int		getHitPoints();
    unsigned int		getMaxHitPoints();
    unsigned int		getEnergyPoints();
    unsigned int		getMaxEnergyPoints();
    unsigned int		getLevel();
    std::string		 	getName();
    unsigned int		getMeleeAttackDamage();
    unsigned int		getRangedAttackDamage();
    unsigned int		getArmorDamageReduction();

    void				setHitPoints(unsigned int hit_points);
    void				setMaxHitPoints(unsigned int max_hit_points);
    void				setEnergyPoints(unsigned int energy_points);
    void				setMaxEnergyPoints(unsigned int max_energy_points);
    void				setLevel(unsigned int level);
    void				setName(std::string name);
    void				setMeleeAttackDamage(unsigned int melee_attack_damage);
    void				setRangedAttackDamage(unsigned int ranged_attack_damage);
    void				setArmorDamageReduction(unsigned int armor_damage_reduction);

    void				rangedAttack(std::string const & target);
    void				meleeAttack(std::string const & target);
    void				takeDamage(unsigned int amount);
    void				beRepaired(unsigned int amount);
};

void pre_message(const std::string& name, unsigned int hp);

#endif //CLAPTRAP_HPP
