#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const std::string name)
        :	ClapTrap(
        60,
        60,
        120,
        120,
        1,
        name,
        60,
        5,
        0
)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Ninja is coming!!! Full!!!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& op)
        :
        ClapTrap(op)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Ninja coping and coming : " << op._name << std::endl;
}

NinjaTrap::~NinjaTrap()
{
   pre_message(this->_name, this->_hit_points);
    std::cout << "This is my sun set!!!" << std::endl;
}

NinjaTrap & NinjaTrap::operator=(const NinjaTrap& op)
{
    if (this == &op)
        return (*this);
    NinjaTrap::operator=(op);
    return (*this);
}

void        NinjaTrap::rangedAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Try this " << target << "! Damage point -> " << this->_ranged_attack_damage << "." << std::endl;
}

void        NinjaTrap::meleeAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "It is over " << target << "!!! You will die!!! meleeAttackPoint -> " << this->_melee_attack_damage << "!" << std::endl;
}

void		NinjaTrap::ninjaShoebox(ClapTrap & claptrap)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "MY name is " << claptrap.getName() <<". ClapTrap is copping!!!"<< std::endl;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap & ninjatrap)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Tada " << ninjatrap.getName() << ". NinjaTrap is copping!!!" << std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap & fragtrap)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Oh ... " << fragtrap.getName() << ". FragTrap is copping!!!" << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap & scavtrap)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "I'm, " << scavtrap.getName() << ", ScavTrap is copping!!!" << std::endl;
}

void pre_message(const std::string & name, unsigned int hp)
{
    std::cout << "NJ4N-TP " << name << "(" << hp << ") : ";
}