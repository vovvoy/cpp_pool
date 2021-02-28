#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name)
        :	ClapTrap(
        100,
        100,
        50,
        50,
        1,
        name,
        20,
        15,
        3
)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Time to defense our Dreams!!!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & op)
        :
        ClapTrap(op)
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
    ClapTrap::operator = (op);
    return (*this);
}

void        ScavTrap::rangedAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Try this " << target << "! Damage point -> " << this->_ranged_attack_damage << "." << std::endl;
}

void        ScavTrap::meleeAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "It is over " << target << "!!! You will die!!! meleeAttackPoint -> " << this->_melee_attack_damage << "!" << std::endl;
}

std::string ScavTrap::_challenges[8] = {
    "I'm not handsome but...",
    "I can give my hand to someone who need help...",
    "Because beauty is required in heart not in face....",
    "To love someone is nothing.",
    "To be loved by someone is something.",
    "But, to be loved by the one you love is everything!",
    "Words have power!",
    "Be careful who you trust."
};

void        ScavTrap::challengeNewcomer(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << ScavTrap::_challenges[std::rand() % 8] << std::endl;
}

void pre_message(const std::string& name, unsigned int hp)
{
    std::cout << "SC4V-TP " << name << "(" << hp << ") : ";
}
