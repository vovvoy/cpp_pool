#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
        :
        _hit_points(0),
        _max_hit_points(0),
        _energy_points(0),
        _max_energy_points(0),
        _level(0),
        _name(),
        _melee_attack_damage(0),
        _ranged_attack_damage(0),
        _armor_damage_reduction(0)
{
    srand(time(NULL));
    std::cout << "Time to defense our Dreams(claptrap)!!!" << std::endl;
}

ClapTrap::ClapTrap(
        unsigned int	hit_points,
        unsigned int	max_hit_points,
        unsigned int	energy_points,
        unsigned int	max_energy_points,
        unsigned int	level,
        std::string		name,
        unsigned int	melee_attack_damage,
        unsigned int	ranged_attack_damage,
        unsigned int	armor_damage_reduction
) :
        _hit_points(hit_points),
        _max_hit_points(max_hit_points),
        _energy_points(energy_points),
        _max_energy_points(max_energy_points),
        _level(level),
        _name(name),
        _melee_attack_damage(melee_attack_damage),
        _ranged_attack_damage(ranged_attack_damage),
        _armor_damage_reduction(armor_damage_reduction)
{
    srand(time(NULL));
    std::cout << "Time to defense our Dreams(claptrap)!!!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& op)
        :
        _hit_points(op._hit_points),
        _max_hit_points(op._max_hit_points),
        _energy_points(op._energy_points),
        _max_energy_points(op._max_energy_points),
        _level(op._level),
        _name(op._name),
        _melee_attack_damage(op._melee_attack_damage),
        _ranged_attack_damage(op._ranged_attack_damage),
        _armor_damage_reduction(op._armor_damage_reduction)
{
    srand(time(NULL));
    std::cout << "Get some data from " << op._name << ", now we are ready!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap class is dieing !(claptrap)" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap& op)
{
    if (this == &op)
        return (*this);
    this->_hit_points = op._hit_points;
    this->_max_hit_points = op._max_hit_points;
    this->_energy_points = op._energy_points;
    this->_max_energy_points = op._max_energy_points;
    this->_level = op._level;
    this->_name = op._name;
    this->_melee_attack_damage = op._melee_attack_damage;
    this->_ranged_attack_damage = op._ranged_attack_damage;
    this->_armor_damage_reduction = op._armor_damage_reduction;
    return (*this);
}

unsigned int	    ClapTrap::getHitPoints(void)                { return (this->_hit_points); }
unsigned int        ClapTrap::getMaxHitPoints(void)             { return (this->_max_hit_points); }
unsigned int        ClapTrap::getEnergyPoints(void)             { return (this->_energy_points); }
unsigned int        ClapTrap::getMaxEnergyPoints(void)          { return (this->_max_energy_points); }
unsigned int        ClapTrap::getLevel(void)                    { return (this->_level); }
std::string	        ClapTrap::getName(void)                     { return (this->_name); }
unsigned int	    ClapTrap::getMeleeAttackDamage(void)        { return (this->_melee_attack_damage); }
unsigned int	    ClapTrap::getRangedAttackDamage(void)       { return (this->_ranged_attack_damage); }
unsigned int	    ClapTrap::getArmorDamageReduction(void)     { return (this->_armor_damage_reduction); }

void		    	ClapTrap::setHitPoints(unsigned int hit_points)                         { this->_hit_points = hit_points; }
void			    ClapTrap::setMaxHitPoints(unsigned int max_hit_points)                  { this->_max_hit_points = max_hit_points; }
void			    ClapTrap::setEnergyPoints(unsigned int energy_points)                   { this->_energy_points = energy_points; }
void			    ClapTrap::setMaxEnergyPoints(unsigned int max_energy_points)            { this->_max_energy_points = max_energy_points; }
void		        ClapTrap::setLevel(unsigned int level)                                  { this->_level = level; }
void                ClapTrap::setName(std::string name)                                     { this->_name = name; }
void			    ClapTrap::setMeleeAttackDamage(unsigned int melee_attack_damage)        { this->_melee_attack_damage = melee_attack_damage; }
void		 	    ClapTrap::setRangedAttackDamage(unsigned int ranged_attack_damage)      { this->_ranged_attack_damage = ranged_attack_damage; }
void			    ClapTrap::setArmorDamageReduction(unsigned int armor_damage_reduction)  { this->_armor_damage_reduction = armor_damage_reduction; }

void pre_message(const std::string& name, unsigned int hp)
{
    std::cout << "XXXX-TP " << name << "(" << hp << ") : ";
}

void		ClapTrap::rangedAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "Try this " << target << "! Damage point -> " << this->_ranged_attack_damage << "(claptrap)." << std::endl;
}

void		ClapTrap::meleeAttack(std::string const & target)
{
    pre_message(this->_name, this->_hit_points);
    std::cout << "It is over " << target << "!!! You will die!!! meleeAttackPoint -> " << this->_melee_attack_damage << "(claptrap)!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
    amount -= this->_armor_damage_reduction;
    pre_message(this->_name, ((int)this->_hit_points - (int)amount >= 0) ? this->_hit_points - amount : 0);
    std::cout << "Nice try!" << "But it just take " << amount + this->_armor_damage_reduction << " of my HP(claptrap)!!!" << std::endl;
    if (amount > this->_hit_points)
        amount = this->_hit_points;
    this->_hit_points -= amount;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
    if (amount + this->_hit_points > this->_max_hit_points)
        amount = this->_max_hit_points - this->_hit_points;
    pre_message(this->_name, this->_hit_points + amount);
    std::cout << "HP up oooooo Yah!!! " << "HP increase to -> " << amount << " points(claptrap)!!!" << std::endl;
    this->_hit_points += amount;
}
