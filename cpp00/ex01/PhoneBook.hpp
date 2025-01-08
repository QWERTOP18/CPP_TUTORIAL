#pragma once
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <string>


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

#endif /* PHONEBOOK_H */