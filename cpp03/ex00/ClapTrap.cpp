#include "ClapTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                                 Constructors                               */
/* -------------------------------------------------------------------- :( -- */


ClapTrap::ClapTrap() 
    : _name("PLAYER"), _hitPoints(10),_energyPoints(10),_attackDamage(1)
{
    std::cout << REVERSED "ClapTrap " << "Anonymas was sponed!!!"  RESET << std::endl << std::endl;
}
ClapTrap::ClapTrap(const std::string &name) 
    : _name(name), _hitPoints(10),_energyPoints(10),_attackDamage(1)
{
    std::cout << REVERSED "ClapTrap " <<  _name << " was sponed!!!" RESET << std::endl << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "\n" REVERSED "The Game was over! ByeBye ^^" RESET << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << REVERSED "ClapTrap " <<  _name << " was substituted!" RESET << std::endl;
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Setters & Getters                             */
/* -------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------- */
/*                             Members functions                              */
/* -------------------------------------------------------------------------- */

bool ClapTrap::isAlive() const
{
    if (_hitPoints <= 0)
    {
        std::cout << RED << "ClapTrap " << _name << " was already died :(" << RESET <<  std::endl;
        return false;
    }
    return true;
}

bool ClapTrap::isTired() const
{
    if (_energyPoints <= 0)
    {
        std::cout << MAGENTA << "ClapTrap " << _name << " is tired. Give him  some cookies!!" << RESET << std::endl;
        return true;
    }
    return false;
}


void ClapTrap::attack(const std::string& target)
{
    if (isAlive() == false)  return;
    if (isTired() == true)  return;

    std::cout << "ClapTrap " << _name << " attacks " << UNDERLINE BOLD << target <<  RESET <<  ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (isAlive() == false)  return;
    _hitPoints -= std::fmax(_hitPoints - amount, 0);
    std::cout << "ClapTrap " << _name <<  " owned " << BOLD << amount << RESET << " points of damage!" << std::endl;
    if (_hitPoints <= 0)
    {
        std::cout << RED << "ClapTrap " << _name << " was died ###" << RESET << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (isAlive() == false)  return;
    if (isTired() == true)  return;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name <<  " ate cookies! yammy!! repaired by " << YELLOW BOLD << amount << RESET << " points!!" << std::endl;
    _energyPoints--;
}