#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string name)
        :
        ClapTrap(
                100,
                100,
                120,
                120,
                1,
                name,
                60,
                20,
                5
        ),
        FragTrap(name),
        NinjaTrap(name)
{
    pre_message(NinjaTrap::_name, FragTrap::_hit_points);
    std::cout << "I am alive !!!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap & op)
        :
        ClapTrap(op), NinjaTrap(op), FragTrap(op)
{
    pre_message(NinjaTrap::_name, FragTrap::_hit_points);
    std::cout << "I was copied !" << std::endl;
}

SuperTrap::~SuperTrap()
{
    pre_message(NinjaTrap::_name, FragTrap::_hit_points);
    std::cout << "I am die !" << std::endl;
}

SuperTrap & SuperTrap::operator=(const SuperTrap & op)
{
    if (this == &op)
        return (*this);
    SuperTrap::operator = (op);
    return (*this);
}

void SuperTrap::meleeAttack(std::string const & target)
{
    NinjaTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(std::string const & target)
{
    FragTrap::rangedAttack(target);
}

void pre_message(const std::string & name, unsigned int hp)
{
    std::cout << "SP4F-TP " << name << "(" << hp << ") : ";
}