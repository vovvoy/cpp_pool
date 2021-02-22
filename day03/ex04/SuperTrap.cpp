#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
        :
        ClapTrap(),
        FragTrap(),
        NinjaTrap()
{}

SuperTrap::SuperTrap(std::string name)
        :
        ClapTrap(
                100,
                10,
                120,
                120,
                1,
                name,
                60,
                30,
                5
        ),
        FragTrap(name),
        NinjaTrap(name)
{
    pre_message(getName(), getHitPoints());
    std::cout << "I am alive !!!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& op)
        :
        ClapTrap(op)
{
    pre_message(getName(), getHitPoints());
    std::cout << "Me was copied !" << std::endl;
}

SuperTrap::~SuperTrap()
{
    pre_message(getName(), getHitPoints());
    std::cout << "I am die !" << std::endl;
}

SuperTrap & SuperTrap::operator=(const SuperTrap& op)
{
    if (this == &op)
        return (*this);
    ClapTrap::operator=(op);
    return (*this);
}