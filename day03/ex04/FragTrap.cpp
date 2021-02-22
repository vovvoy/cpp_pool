#include "FragTrap.hpp"

typedef void(FragTrap::* attacks) (std::string const & target);

FragTrap::FragTrap()
        :	ClapTrap(0,0,0,0,0,"",0,0,0)
{
    srand(time(NULL));
   pre_message(getName(), getHitPoints());
    std::cout << "Time to defense our Dreams(fragtrap)!!!" << std::endl;
}


FragTrap::FragTrap(std::string name)
        :	ClapTrap(
        100,
        100,
        100,
        100,
        1,
        name,
        30,
        20,
        5
)
{
    srand(time(NULL));
   pre_message(getName(), getHitPoints());
    std::cout << "Time to defense our Dreams(fragtrap)!!!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& op)
        :
        ClapTrap(op)
{
    srand(time(NULL));
   pre_message(this->_name, this->_hit_points);
    std::cout << "Time to defense our Dreams(fragtrap)!!!" << std::endl;
}


FragTrap::~FragTrap()
{
   pre_message(getName(), getHitPoints());
    std::cout << "Do not forgot me(fragtrap)!!!" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap& op)
{
    if (this == &op)
        return (*this);
    ClapTrap::operator=(op);
    return (*this);
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    attacks cmd[] = {
            &FragTrap::blablaAttack,
            &FragTrap::school21Attack,
            &FragTrap::lostAttack,
            &FragTrap::fartAttack,
            &FragTrap::funnyAttack
    };

    if (getEnergyPoints() < 25)
    {
       pre_message(getName(), getHitPoints());
        std::cout << "You gonna die at the next time(fragtrap)!!!" << std::endl;
        return;
    }
    (this->*cmd[rand() % 5])(target);
    setEnergyPoints(getEnergyPoints() - 25);
}

void		FragTrap::blablaAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "It just blabla attack for about 42 points!!! Be ready " << target << "(fragtrap)." << std::endl;
}

void		FragTrap::school21Attack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "OOO that's a special attack which takes 21 points!!! " << target << " time to study at school 21(fragtrap)!!!" << std::endl;
}

void		FragTrap::fartAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Hahaha it's  just a joke and take 5 points!!! " << target << " time to... you know to what(fragtrap)!"<< std::endl;
}

void		FragTrap::lostAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "It's my stronges attack!!! " << target << " , you will be die(fragtrap)!" << std::endl;
}

void		FragTrap::funnyAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "To make some fun!!! " << target << " try to smile sometimes (fragtrap)!!!" << std::endl;
}
