#include "ClapTrap.hpp"

ClapTrap::ClapTrap(
        unsigned int            hit_points,
        unsigned int	       max_hit_points,
        unsigned int	       energy_points,
        unsigned int	       max_energy_points,
        unsigned int	       level,
        const std::string		name,
        unsigned int	       melee_attack_damage,
        unsigned int	       ranged_attack_damage,
        unsigned int	       armor_damage_reduction
) :
        _hit_points(hit_points),
        _max_hit_points(max_hit_points),
        _energy_points(energy_points),
        _max_energy_points(max_energy_points),
        _level(level),
        _name(name),
        _melee_attack_damage(melee_attack_damage),
        _ranged_attack_damage(ranged_attack_damage),
        _armor_damage_reduction(armor_damage_reduction)
{
    pre_message(_name, _hit_points);
    std::cout << "Time to defense our Dreams!!!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & op)
        :
        _hit_points(op._hit_points),
        _max_hit_points(op._max_hit_points),
        _energy_points(op._energy_points),
        _max_energy_points(op._max_energy_points),
        _level(op._level),
        _name(op._name),
        _melee_attack_damage(op._melee_attack_damage),
        _ranged_attack_damage(op._ranged_attack_damage),
        _armor_damage_reduction(op._armor_damage_reduction)
{
    pre_message(_name, _hit_points);
    std::cout << "Get some data from " << op._name << ", now we are ready!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    pre_message(_name, _hit_points);
    std::cout << "Claptrap class is dieing !" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap& op)
{
    if (this == &op)
        return (*this);
    this->_hit_points = op._hit_points;
    this->_max_hit_points = op._max_hit_points;
    this->_energy_points = op._energy_points;
    this->_max_energy_points = op._max_energy_points;
    this->_level = op._level;
    this->_name = op._name;
    this->_melee_attack_damage = op._melee_attack_damage;
    this->_ranged_attack_damage = op._ranged_attack_damage;
    this->_armor_damage_reduction = op._armor_damage_reduction;
    return (*this);
}


void		ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > this->_armor_damage_reduction)
        amount -= this->_armor_damage_reduction;
    else
        amount = 0;

    if (amount < this->_hit_points)
        this->_hit_points -= amount;
    else
        this->_hit_points = 0;

    pre_message(this->_name, this->_hit_points);
    std::cout << "Nice try!" << "But it just take " << amount << " of my HP(claptrap)!!!" << std::endl;

}

std::string ClapTrap::getName(void) const { return this->_name; }

void		ClapTrap::beRepaired(unsigned int amount)
{
    amount = std::min(amount, this->_max_hit_points - this->_hit_points);
    this->_hit_points += amount;

    pre_message(this->_name, this->_hit_points);
    std::cout << "HP up oooooo Yah!!! " << "HP increase to -> " << amount << " points(claptrap)!!!" << std::endl;
}

void pre_message(const std::string& name, unsigned int hp)
{
    std::cout << "CT4M-TP " << name << "(" << hp << ") : ";
}
