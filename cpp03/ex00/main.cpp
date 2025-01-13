#include "ClapTrap.hpp"


int main() {
    ClapTrap claptrap("player");

    claptrap.attack("enemy1");
    claptrap.takeDamage(1);
    claptrap.beRepaired(10);
    claptrap.attack("enemy1");
    claptrap.takeDamage(100);
    claptrap.attack("enemy2");
    return 0;
}
