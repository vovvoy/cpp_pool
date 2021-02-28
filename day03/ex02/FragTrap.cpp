#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string & name)
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
    pre_message(this->_name, this->_hit_points);
    std::cout << "Time to defense our Dreams!!!" << std::endl;
}

FragTrap::FragTrap(const FragTrap & op)
        :
        ClapTrap(op)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Time to defense our Dreams!!!" << op._name << std::endl;
}

FragTrap::~FragTrap()
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Do not forgot me!!!" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & op)
{
    if (this == &op)
        return (*this);
    ClapTrap::operator = (op);
    return (*this);
}

void        FragTrap::rangedAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Try this " << target << "! Damage point -> " << this->_ranged_attack_damage << "." << std::endl;
}

void        FragTrap::meleeAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "It is over " << target << "!!! You will die!!! meleeAttackPoint -> " << this->_melee_attack_damage << "!" << std::endl;
}

std::string FragTrap::_vaulthunterQuotes[8] = {
    "The series of normal jumps!!!",
    "The funniest jumps in my life!!!",
    "No one can repeate that ....",
    "His fart makes me jump.",
    "I have lost my way.",
    "I'm not FAT!!!!!!!!!!!!!!!!!!!!!!!",
    "BOSS the real BOSS",
    "I am always running (late)."
};

void        FragTrap::vaulthunter_dot_exe(std::string const & target)
{

    if (this->_energy_points < 25)
    {
        pre_message(this->_name, this->_hit_points);
        std::cout << "You gonna die at the next time!!!" << std::endl;
        return;
    }

    this->_energy_points -= 25;

    pre_message(this->_name, this->_hit_points);
    std::cout << FragTrap::_vaulthunterQuotes[std::rand() % 8] << "  :  " <<target << std::endl;

}

void pre_message(std::string& name, unsigned int hp)
{
    std::cout << "FR4G-TP " << name << "(" << hp << ") : ";
}