#include "ClapTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & Destructors                        */
/* -------------------------------------------------------------------------- */


ClapTrap::ClapTrap() 
    : _name("PLAYER"),_type("ClapTrap"), _hitPoints(10),_energyPoints(10),_attackDamage(1)
{
    std::cout << BOLD "ClapTrap " << "Anonymas was sponed!!!"  RESET << std::endl << std::endl;
}
ClapTrap::ClapTrap(const std::string &name) 
    : _name(name),_type("ClapTrap"), _hitPoints(10),_energyPoints(10),_attackDamage(1)
{
    std::cout << BOLD "ClapTrap " <<  _name << " was sponed!!!" RESET << std::endl << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << BOLD "ClapTrap" << _name << " was copied!!!" RESET << std::endl << std::endl;
    *this = src;
}
ClapTrap::~ClapTrap()
{
    std::cout << "\n" BOLD "The Game was over! ByeBye ^^" RESET << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    _name = src._name;
    _type = src._type;
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
        std::cout << RED << _type << " " << _name << " was already died :(" << RESET <<  std::endl;
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

    std::cout << _type << " " << _name << " attacks " << UNDERLINE BOLD << target <<  RESET <<  ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (isAlive() == false)  return;
    _hitPoints -= std::fmax(_hitPoints - amount, 0);
    std::cout << _type << " " << _name <<  " owned " << BOLD << amount << RESET << " points of damage!" << std::endl;
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
    std::cout << _type << " " << _name <<  " ate cookies! yammy!! repaired by " << YELLOW BOLD << amount << RESET << " points!!" << std::endl;
    _energyPoints--;
}