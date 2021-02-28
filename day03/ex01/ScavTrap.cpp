#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name)
        :
        _hit_points(100),
        _max_hit_points(100),
        _energy_points(50),
        _max_energy_points(50),
        _level(1),
        _name(name),
        _melle_attack_damage(20),
        _ranged_attack_damage(15),
        _armor_damage_reduction(3)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Time to defense our Dreams!!!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& op)
        :
        _hit_points(op._hit_points),
        _max_hit_points(op._max_hit_points),
        _energy_points(op._energy_points),
        _max_energy_points(op._max_energy_points),
        _level(op._level),
        _name(op._name),
        _melle_attack_damage(op._melle_attack_damage),
        _ranged_attack_damage(op._ranged_attack_damage),
        _armor_damage_reduction(op._armor_damage_reduction)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Time to defense our Dreams!!!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Do not forgot me!!!" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap& op)
{
    if (this == &op)
        return (*this);
    this->_hit_points = op._hit_points;
    this->_max_hit_points = op._max_hit_points;
    this->_energy_points = op._energy_points;
    this->_max_energy_points = op._max_energy_points;
    this->_level = op._level;
    this->_name = op._name;
    this->_melle_attack_damage = op._melle_attack_damage;
    this->_ranged_attack_damage = op._ranged_attack_damage;
    this->_armor_damage_reduction = op._armor_damage_reduction;
    return (*this);
}

void		ScavTrap::rangedAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Try this " << target << "! Damage point -> " << this->_ranged_attack_damage << "." << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "It is over " << target << "!!! You will die!!! meleeAttackPoint -> " << this->_melle_attack_damage << "!" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
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
    std::cout << "Nice try!     But it just take " << amount  << " of my HP!!!" << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
    amount = std::min(amount, this->_max_hit_points - this->_hit_points);
    this->_hit_points += amount;
    
    pre_message(this->_name, this->_hit_points);
    std::cout << "HP up oooooo Yah!!! " << "HP increase to -> " << amount << " points!!!" << std::endl;

}

std::string ScavTrap::_challenges[8] = {
    "I'm not handsome but...",
    "I can give my hand to someone who need help...",
    "Because beauty is required in heart not in face....",
    "To love someone is nothing.",
    "To be loved by someone is something.",
    "But, to be loved by the one you love is everything!"
    "Words have power!"
};

void		ScavTrap::challengeNewcomer(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << ScavTrap::_challenges[std::rand() % 5] << std::endl;
}

void pre_message(std::string& name, unsigned int hp)
{
    std::cout << "SC4V-TP " << name << "(" << hp << ") : ";
}
