#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

#include <typeinfo>

int main()
{
//    std::cout << std::endl;
//
//    FragTrap frag("Frag");
//    ScavTrap scav("Scav");
//    NinjaTrap ninja("Ninj");
//    ClapTrap clap;
//
//    ninja.ninjaShoebox(frag);
//    ninja.ninjaShoebox(scav);
//    ninja.ninjaShoebox(ninja);
//    ninja.ninjaShoebox(clap);

     ScavTrap clap("Clap");
     ScavTrap trap("Trap");
     FragTrap frag("Frag");
     FragTrap prap;

     prap = frag;

     std::cout << std::endl;
     clap.rangedAttack(trap.getName());
     trap.takeDamage(20);
     clap.meleeAttack(trap.getName());
     trap.takeDamage(30);
     trap.beRepaired(35);
     frag.rangedAttack(clap.getName());
     trap.beRepaired(80);
     trap.takeDamage(120);
     frag.beRepaired(7);
     trap.beRepaired(33);
     frag.takeDamage(10);

     frag.vaulthunter_dot_exe("Clap");
     clap.challengeNewcomer("Trap");
     clap.challengeNewcomer("Trap");
     clap.challengeNewcomer("Trap");
     clap.challengeNewcomer("Trap");


    std::cout << std::endl;
    return (0);
}