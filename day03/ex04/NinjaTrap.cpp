#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
        :	ClapTrap(0,0,0,0,0,"",0,0,0)
{
    srand(time(NULL));
    pre_message(_name, _hit_points);
    std::cout << "Ninja is coming!!!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
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
    srand(time(NULL));
    pre_message(getName(), getHitPoints());
    std::cout << "Ninja is coming!!! Full!!!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& op)
        :
        ClapTrap(op)
{
    srand(time(NULL));
    pre_message(this->_name, this->_hit_points);
    std::cout << "Ninja coping and coming : " << op._name << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    pre_message(getName(), getHitPoints());
    std::cout << "This is my sun set!!!" << std::endl;
}

NinjaTrap & NinjaTrap::operator=(const NinjaTrap& op)
{
    if (this == &op)
        return (*this);
    ClapTrap::operator=(op);
    return (*this);
}

void		NinjaTrap::ninjaShoebox(ClapTrap & claptrap)
{
    pre_message(getName(), getHitPoints());
    std::cout << "MY name is " << claptrap.getName() <<". ClapTrap is copping!!!"<< std::endl;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap & ninjatrap)
{
    pre_message(getName(), getHitPoints());
    std::cout << "Tada " << ninjatrap.getName() << ". NinjaTrap is copping!!!" << std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap & fragtrap)
{
    pre_message(getName(), getHitPoints());
    std::cout << "Oh ... " << fragtrap.getName() << ". FragTrap is copping!!!" << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap & scavtrap)
{
    pre_message(getName(), getHitPoints());
    std::cout << "Oh ...  " << scavtrap.getName() << ". ScavTrap is copping!!!"<< std::endl;
}