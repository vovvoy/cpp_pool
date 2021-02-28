#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
        :
        _hit_points(100),
        _max_hit_points(100),
        _energy_points(100),
        _max_energy_points(100),
        _level(1),
        _name(name),
        _melle_attack_damage(30),
        _ranged_attack_damage(20),
        _armor_damage_reduction(5)
{
    srand(time(NULL));
    pre_message(this->_name, this->_hit_points);
    std::cout << "Time to defense our Dreams!!!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& op)
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
    srand(time(NULL));
    pre_message(this->_name, this->_hit_points);
    std::cout << "Time to defense our Dreams!!!" << std::endl;
}

FragTrap::~FragTrap()
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Do not forgot me!!!" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap& op)
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

void		FragTrap::rangedAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Try this " << target << "! Damage point -> " << this->_ranged_attack_damage << "." << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "It is over " << target << "!!! You will die!!! meleeAttackPoint -> " << this->_melle_attack_damage << "!" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
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

void		FragTrap::beRepaired(unsigned int amount)
{
    amount = std::min(amount, this->_max_hit_points - this->_hit_points);
    this->_hit_points += amount;

    pre_message(this->_name, this->_hit_points);
    std::cout << "Now i feel my self healthier => +" << amount << std::endl;
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

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
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