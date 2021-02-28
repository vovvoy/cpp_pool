#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap ft("FragTrap");
    FragTrap ft2(ft);


    std::cout << std::endl;
    for (int i = 0; i < 5; i++)
        ft.takeDamage(20);

    for (int i = 0; i < 5; i++)
        ft.beRepaired(30);

    ft.rangedAttack("vovvoy");
    ft.meleeAttack("sossoy");

    for (int i = 0; i < 5; i++)
        ft.vaulthunter_dot_exe("Naruto");

    ScavTrap st("ScavTrap");
    ScavTrap st2(st);

    for (int i = 0; i < 5; i++)
        st.takeDamage(30);

    for (int i = 0; i < 5; i++)
        st.beRepaired(25);

    st.rangedAttack("Jenish");
    st.meleeAttack("Shamil");

    for (int i = 0; i < 5; i++)
        st.challengeNewcomer("Saske");
    std::cout << std::endl;
}