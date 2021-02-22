#include "FragTrap.hpp"


typedef void(FragTrap::* attacks) (std::string const & target);

static void pre_message(std::string& name, unsigned int hp)
{
    std::cout << "FR4G-TP " << name << "(" << hp << ") : ";
}

FragTrap::FragTrap()
{
    srand(time(NULL));
    pre_message(this->_name, this->_hit_points);
    std::cout << "Time to defense our Dreams!!!" << std::endl;
}

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
    amount -= this->_armor_damage_reduction;
    if (amount > this->_hit_points)
        amount = this->_hit_points;
    this->_hit_points -= amount;
    pre_message(this->_name, this->_hit_points);
    std::cout << "Nice try!" << "But it just take " << amount + this->_armor_damage_reduction << " of my HP!!!" << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount)
{
    if (amount + this->_hit_points > this->_max_hit_points)
        amount = this->_max_hit_points - this->_hit_points;
    this->_hit_points += amount;
    pre_message(this->_name, this->_hit_points);
    std::cout << "HP up oooooo Yah!!! " << "HP increase to -> " << amount << " points!!!" << std::endl;

}

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    attacks cmd[] = {
            &FragTrap::blablaAttack,
            &FragTrap::school21Attack,
            &FragTrap::fartAttack,
            &FragTrap::lostAttack,
            &FragTrap::funnyAttack
    };

    if (this->_energy_points < 25)
    {
        pre_message(this->_name, this->_hit_points);
        std::cout << "You gonna die at the next time!!!" << std::endl;
        return;
    }
    (this->*cmd[rand() % 5])(target);
    this->_energy_points -= 25;
}

void		FragTrap::blablaAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "It just blabla attack for about 42 points!!! Be ready " << target << "." << std::endl;
}

void		FragTrap::school21Attack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "OOO that's a special attack which takes 21 points!!! " << target << " time to study at school 21!!!" << std::endl;
}

void		FragTrap::fartAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Hahaha it's  just a joke and take 5 points!!! " << target << " time to... you know to what!"<< std::endl;
}

void		FragTrap::lostAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "It's my stronges attack!!! " << target << " , you will be die!" << std::endl;
}

void		FragTrap::funnyAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "To make some fun!!! " << target << " try to smile sometimes !!!" << std::endl;
}
std::string FragTrap::getName() { return this->_name; }
unsigned int    FragTrap::getEnergyPoint() const { return this->_energy_points; }
unsigned int    FragTrap::getRangedAttackPoint() const { return this->_ranged_attack_damage; }
unsigned int    FragTrap::getMelleAttackPoint() const { return this->_melle_attack_damage; }