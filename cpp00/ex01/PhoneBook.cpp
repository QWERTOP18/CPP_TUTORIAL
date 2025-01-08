#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): index(0), size(0)
{
    std::cout << "Welcome!" << std::endl;
    this->contact[MAX_CONTACT_SIZE].setFirstName("firstname");
    this->contact[MAX_CONTACT_SIZE].setLastName("lastname");
    this->contact[MAX_CONTACT_SIZE].setNickName("nickname");
    this->contact[MAX_CONTACT_SIZE].setPhoneNumber("phone");
    this->contact[MAX_CONTACT_SIZE].setDarkestSecret("secret");
}
PhoneBook::~PhoneBook()
{
    std::cout << "Goodbye!" << std::endl;
}


void PhoneBook::addContact()
{
    std::string input;

    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    this->contact[this->index].setFirstName(input);
    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    this->contact[this->index].setLastName(input);
    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    this->contact[this->index].setNickName(input);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    this->contact[this->index].setPhoneNumber(input);
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    this->contact[this->index].setDarkestSecret(input);

    this->index = (this->index + 1) % MAX_CONTACT_SIZE;
    this->size = (this->size ==  MAX_CONTACT_SIZE)? MAX_CONTACT_SIZE : this->size+1;
}

void PhoneBook::searchContact()
{
    std::string input;
    int index = -1;


    std::cout << std::string(48, '-') << std::endl;
    std::cout << "    ";
    this->contact[MAX_CONTACT_SIZE].displayOneLine();
    std::cout << std::string(48, '-') << std::endl;
    for(int i=0; i<this->size; i++)
    {
            std::cout << "[" << i+1 << "] ";
            this->contact[i].displayOneLine();
    }
    std::cout << std::string(48, '-') << std::endl;
    std::cout << "Enter the number :";
    std::getline(std::cin, input);
    try {index = std::stoi(input);}
    catch (const std::exception& e) {index = -1;}
    if(index > 0 && index <= this->size)
        this->contact[index-1].displayContact();
    else
    {
        std::cout << "Contact not found" << std::endl;
        if (std::cin.eof())return;
        searchContact();
    }
}

