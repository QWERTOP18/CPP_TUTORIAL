#pragma once
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
private:
    std::string type;

public:
    Weapon(const std::string &type);
    ~Weapon();
    void setType(const std::string &newType);
    std::string getType() const;
};


#endif /* WEAPON_HPP */