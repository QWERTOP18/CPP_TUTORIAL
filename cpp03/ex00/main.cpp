#include "ClapTrap.hpp"


int main() {
    ClapTrap claptrap("player");

    claptrap.attack("enemy1");
    claptrap.takeDamage(1);
    claptrap.beRepaired(10);
    for (int i = 0; i< 11 ;i++)
    claptrap.attack("enemy1");
    claptrap.takeDamage(100);
    claptrap.attack("enemy2");
    claptrap.takeDamage(100);
    return 0;
}
