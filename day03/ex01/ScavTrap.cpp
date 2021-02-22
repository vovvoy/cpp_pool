#include "ScavTrap.hpp"

typedef void(ScavTrap::* attacks) (std::string const & target);

static void pre_message(std::string& name, unsigned int hp)
{
    std::cout << "FR4G-TP " << name << "(" << hp << ") : ";
}

ScavTrap::ScavTrap() : _hit_points(), _max_hit_points(), _energy_points(), _max_energy_points(), _level(), _melle_attack_damage(), _ranged_attack_damage(), _armor_damage_reduction()
{
    srand(time(NULL));
    pre_message(this->_name, this->_hit_points);
    std::cout << "Time to defense our Dreams!!!(scavtrap)" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
        :
        _hit_points(100),
        _max_hit_points(100),
        _energy_points(50),
        _max_energy_points(50),
        _level(1),
        _name(name),
        _melle_attack_damage(20),
        _ranged_attack_damage(15),
        _armor_damage_reduction(3)
{
    srand(time(NULL));
    pre_message(this->_name, this->_hit_points);
    std::cout << "Time to defense our Dreams!!!(scavtrap)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& op)
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

void		ScavTrap::rangedAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Try this " << target << "! Damage point -> " << this->_ranged_attack_damage << "(scavtrap)." << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "It is over " << target << "!!! You will die!!! meleeAttackPoint -> " << this->_melle_attack_damage << "(scavtrap)!" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
    amount -= this->_armor_damage_reduction;
    if (amount > this->_hit_points)
        amount = this->_hit_points;
    this->_hit_points -= amount;
    pre_message(this->_name, this->_hit_points);
    std::cout << "Nice try!" << "But it just take " << amount + this->_armor_damage_reduction << " of my HP(scavtrap)!!!" << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
    if (amount + this->_hit_points > this->_max_hit_points)
        amount = this->_max_hit_points - this->_hit_points;
    this->_hit_points += amount;
    pre_message(this->_name, this->_hit_points);
    std::cout << "HP up oooooo Yah!!! " << "HP increase to -> " << amount << " points(scavtrap)!!!" << std::endl;

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

std::string ScavTrap::getName() { return this->_name; }

unsigned int    ScavTrap::getEnergyPoint() const { return this->_energy_points; }
unsigned int    ScavTrap::getRangedAttackPoint() const { return this->_ranged_attack_damage; }
unsigned int    ScavTrap::getMeleeAttackPoint() const { return this->_melle_attack_damage; }

