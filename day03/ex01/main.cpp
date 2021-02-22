#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << std::endl;
    ScavTrap clap("P'titchou");
    ScavTrap trap("Pavlov");
    FragTrap frag("Michel");

    std::cout << std::endl;
    clap.rangedAttack(trap.getName());
    trap.takeDamage(trap.getRangedAttackPoint());
    clap.meleeAttack(trap.getName());
    trap.takeDamage(20);
    trap.beRepaired(35);
    frag.rangedAttack(clap.getName());
    trap.beRepaired(80);
    trap.takeDamage(120);
    frag.beRepaired(7);
    trap.beRepaired(33);

    frag.vaulthunter_dot_exe(clap.getName());
    clap.challengeNewcomer(trap.getName());
    clap.challengeNewcomer(trap.getName());
    clap.challengeNewcomer(trap.getName());
    clap.challengeNewcomer(trap.getName());
    clap.challengeNewcomer(trap.getName());

    std::cout << std::endl;
    return (0);
}