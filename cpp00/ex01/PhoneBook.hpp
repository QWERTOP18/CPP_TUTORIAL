#pragma once
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <sstream>


#define MAX_CONTACT_SIZE 8

class PhoneBook
{

    private:
    	Contact contact[MAX_CONTACT_SIZE+1];
        int index;
        int size;
    public:
        PhoneBook();
        ~PhoneBook();


        void addContact();
        void searchContact();
        
};

void PhoneBookStart();

#endif /* PHONEBOOK_H */