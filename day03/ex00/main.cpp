#include "FragTrap.hpp"

int main()
{
    std::cout << std::endl;
    FragTrap clap("vovvoy");
    FragTrap trap("sossoy");

    std::cout << std::endl;
    clap.rangedAttack(trap.getName());
    trap.takeDamage(clap.getRangedAttackPoint());
    clap.meleeAttack(trap.getName());
    trap.takeDamage(clap.getMelleAttackPoint());
    trap.beRepaired(35);
    trap.beRepaired(80);
    trap.takeDamage(120);
    trap.beRepaired(33);

    clap.vaulthunter_dot_exe(trap.getName());
    clap.vaulthunter_dot_exe(trap.getName());
    clap.vaulthunter_dot_exe(trap.getName());
    clap.vaulthunter_dot_exe(trap.getName());
    clap.vaulthunter_dot_exe(trap.getName());

    std::cout << std::endl;
    return (0);
}