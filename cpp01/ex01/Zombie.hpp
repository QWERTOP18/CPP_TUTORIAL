#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void setName(const std::string);
        void announce() const; 
};


Zombie	*zombieHorde(int n, std::string name);


#endif