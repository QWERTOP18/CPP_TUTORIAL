#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor called." << std::endl;
    }

    virtual ~Base() {
        std::cout << "Base destructor called." << std::endl;
    }

    virtual void print() {
        std::cout << "Base print called." << std::endl;
    }

    static void identify(Base *p);
    static void identify(Base &p);
};



#endif