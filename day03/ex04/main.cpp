#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

#include <typeinfo>
int main()
{
    std::cout << std::endl;

    SuperTrap super("Super");
    ScavTrap scav("Scav");
    NinjaTrap ninja("Ninja");
    FragTrap frag("Frag");

    super.ninjaShoebox(scav);
    super.ninjaShoebox(ninja);
    super.vaulthunter_dot_exe(ninja.getName());
    super.vaulthunter_dot_exe(frag.getName());

    std::cout << std::endl;
    return (0);
}