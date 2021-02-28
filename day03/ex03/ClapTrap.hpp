#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

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
    ClapTrap(
            unsigned int        hit_points,
            unsigned int        max_hit_points,
            unsigned int        energy_points,
            unsigned int        max_energy_points,
            unsigned int        level,
            const std::string   name,
            unsigned int        melee_attack_damage,
            unsigned int        ranged_attack_damage,
            unsigned int        armor_damage_reduction
    );
    ClapTrap(const ClapTrap & op);
    ~ClapTrap();

    ClapTrap &operator=(const ClapTrap & op);

    void                takeDamage(unsigned int amount);
    void                beRepaired(unsigned int amount);
    std::string         getName() const;
};

static void pre_message(const std::string & name, unsigned int hp);

#endif
