#pragma once
#include "Contact.hpp"
#include <iostream>
#include <string>


class PhoneBook
{

    private:
    	Contact contact[8];
        int index;
        int size;
    public:
        PhoneBook();
        ~PhoneBook();
        
        void addContact();
        void searchContact();
        
};