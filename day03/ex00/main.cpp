#include "FragTrap.hpp"

int main()
{
    FragTrap ft("FragTrap");
    FragTrap ft2(ft);

    for (int i = 0; i < 5; i++)
        ft.takeDamage(25);

    for (int i = 0; i < 5; i++)
        ft.beRepaired(25);

    ft.rangedAttack("vovvoy");
    ft.meleeAttack("sossoy);

    for (int i = 0; i < 6; i++)
        ft.vaulthunter_dot_exe("Naruto");
    std::cout << std::endl;
    return (0);
}