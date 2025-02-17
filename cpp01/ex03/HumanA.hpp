#pragma once
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
    private:
        std::string name;
        Weapon &weapon;

    public:
        HumanA(const std::string &name, Weapon &weapon);
        ~HumanA();
        void setWeapon(const Weapon &weapon);
        void attack() const;
};


#endif /* HUMAN_HPP */