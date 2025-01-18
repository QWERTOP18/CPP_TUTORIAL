#include "FragTrap.hpp"
/* -------------------------------------------------------------------------- */
/*                                 Constructors                               */
/* -------------------------------------------------------------------- :( -- */
FragTrap::FragTrap() 
    : ClapTrap()
{
    std::cout << BOLD UNDERLINE  "FragTrap " << "Anonymas was sponed!!!"  RESET << std::endl;
    _type = "FragTrap", _hitPoints = 100;  _energyPoints = 50; _attackDamage = 10;
}
FragTrap::FragTrap(const std::string& name) 
    : ClapTrap(name)
{
    std::cout << BOLD UNDERLINE  "FragTrap " <<  _name << " was sponed!!!" RESET << std::endl;
    _type = "FragTrap", _hitPoints = 100;  _energyPoints = 50; _attackDamage = 10;
}
FragTrap::FragTrap(const FragTrap& src) 
    : ClapTrap(src)
{
    std::cout << BOLD UNDERLINE  "FragTrap " <<  _name << " was copied!!!" RESET << std::endl;
    *this = src;
}
FragTrap::~FragTrap()
{
    std::cout << BOLD UNDERLINE  "FragTrap " <<  _name << " was destroyed!!!" RESET << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
    std::cout << BOLD UNDERLINE  "FragTrap " <<  _name << " was substituted!" RESET << std::endl;
    ClapTrap::operator=(src);
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Setters & Getters                             */
/* -------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------- */
/*                             Members functions                              */
/* -------------------------------------------------------------------------- */

void FragTrap::attack(const std::string& target)
{
    if (isAlive() == false)  return;
    if (isTired() == true)  return;

    std::cout << "FragTrap " << _name << " attacks " << UNDERLINE BOLD << target <<  RESET <<  ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a positive high five!!!" << std::endl;
}