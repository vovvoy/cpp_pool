#include "ScavTrap.hpp"


typedef void(ScavTrap::* attacks) (std::string const & target);

static void pre_message(std::string& name, unsigned int hp)
{
    std::cout << "FR4G-TP " << name << "(" << hp << ") : ";
}

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



void		ScavTrap::blablaAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "It just blabla attack for about 42 points!!! Be ready " << target << "(fragtrap)." << std::endl;
}

void		ScavTrap::school21Attack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "OOO that's a special attack which takes 21 points!!! " << target << " time to study at school 21(fragtrap)!!!" << std::endl;
}

void		ScavTrap::fartAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Hahaha it's  just a joke and take 5 points!!! " << target << " time to... you know to what(fragtrap)!"<< std::endl;
}

void		ScavTrap::lostAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "It's my stronges attack!!! " << target << " , you will be die(fragtrap)!" << std::endl;
}

void		ScavTrap::funnyAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "To make some fun!!! " << target << " try to smile sometimes (fragtrap)!!!" << std::endl;
}

void		ScavTrap::challengeNewcomer(std::string const & target)
{
    attacks cmd[] = {
            &ScavTrap::blablaAttack,
            &ScavTrap::school21Attack,
            &ScavTrap::fartAttack,
            &ScavTrap::lostAttack,
            &ScavTrap::funnyAttack
    };

    if (this->_energy_points < 25)
    {
        pre_message(this->_name, this->_hit_points);
        std::cout << "You gonna die at the next time(fragtrap)!!!" << std::endl;
        return;
    }
    (this->*cmd[rand() % 5])(target);
    this->_energy_points -= 25;
}
