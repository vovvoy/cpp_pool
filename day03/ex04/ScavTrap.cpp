#include "ScavTrap.hpp"


typedef void(ScavTrap::* attacks) (std::string const & target);



ScavTrap::ScavTrap()
        :	ClapTrap(0,0,0,0,0,"",0,0,0)
{
    srand(time(NULL));
    pre_message(this->_name, this->_hit_points);
    std::cout << "Time to defense our Dreams!!!(scavtrap)" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
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
    srand(time(NULL));
    pre_message(this->_name, this->_hit_points);
    std::cout << "Time to defense our Dreams!!!(scavtrap)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& op)
        :
        ClapTrap(op)
{
    srand(time(NULL));
    pre_message(this->_name, this->_hit_points);
    std::cout << "Time to defense our Dreams!!!(scavtrap)" << std::endl;
}

ScavTrap::~ScavTrap()
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Do not forgot me!!!(scavtrap)" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap& op)
{
    if (this == &op)
        return (*this);
    ClapTrap::operator=(op);
    return (*this);
}




void		ScavTrap::challengeNewcomer(std::string const & target)
{
    std::string challenge_list[] = {
            "Do something one !!!",
            "Do something two !!!",
            "Do something three !!!",
            "Do something four !!!",
            "Do something five !!!"
    };

    if (this->_energy_points < 25)
    {
        pre_message(this->_name, this->_hit_points);
        std::cout << "You gonna die at the next time(fragtrap)!!!" << std::endl;
        return;
    }
    std::cout << target <<" " << challenge_list[rand() % 5] << std::endl;
    this->_energy_points -= 25;
}
