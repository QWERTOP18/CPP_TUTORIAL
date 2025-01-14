#include "ScavTrap.hpp"
/* -------------------------------------------------------------------------- */
/*                          Constructors & Destructors                        */
/* -------------------------------------------------------------------------- */
ScavTrap::ScavTrap() 
    : ClapTrap()
{
    std::cout << BOLD UNDERLINE  "ScavTrap " << "Anonymas was sponed!!!"  RESET << std::endl;
    _type = "ScavTrap" , _hitPoints = 100;  _energyPoints = 50; _attackDamage = 10;
}
ScavTrap::ScavTrap(const std::string& name) 
    : ClapTrap(name)
{
    std::cout << BOLD UNDERLINE  "ScavTrap " <<  _name << " was sponed!!!" RESET << std::endl;
    _type = "ScavTrap" , _hitPoints = 100;  _energyPoints = 50; _attackDamage = 10;
}
ScavTrap::ScavTrap(const ScavTrap& src) 
    : ClapTrap(src)
{
    std::cout << BOLD UNDERLINE  "ScavTrap " <<  _name << " was copied!!!" RESET << std::endl;
    *this = src;
}
ScavTrap::~ScavTrap()
{
    std::cout << BOLD UNDERLINE  "ScavTrap " <<  _name << " was destroyed!!!" RESET << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
    std::cout << BOLD UNDERLINE  "ScavTrap " <<  _name << " was substituted!" RESET << std::endl;
    ClapTrap::operator=(src);
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Setters & Getters                             */
/* -------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------- */
/*                             Members functions                              */
/* -------------------------------------------------------------------------- */

void ScavTrap::attack(const std::string& target)
{
    if (isAlive() == false)  return;
    if (isTired() == true)  return;

    std::cout << "ScapTrap " << _name << " attacks " << UNDERLINE BOLD << target <<  RESET <<  ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ScavTrap::guardGate() 
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}