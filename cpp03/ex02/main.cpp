#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"


int main() {
    ClapTrap claptrap("a");

    claptrap.attack("enemy1");
    claptrap.takeDamage(1);
    claptrap.beRepaired(10);
    for (int i = 0; i< 11 ;i++)
    claptrap.attack("enemy1");
    claptrap.takeDamage(100);
    claptrap.attack("enemy2");
    claptrap.takeDamage(100);

    ScavTrap scavtrap("SCAVTRAP");

    scavtrap.takeDamage(30);
    scavtrap.beRepaired(10);
    scavtrap.attack("enemy1");
    scavtrap.guardGate();

    FragTrap fragtrap("FragTrap");

    fragtrap.attack("enemy1");
    fragtrap.takeDamage(20);
    fragtrap.beRepaired(15);
    fragtrap.highFivesGuys();
    return 0;
}



