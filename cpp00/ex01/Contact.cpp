#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

void Contact::setFirstName(const std::string& firstName){this->firstName = firstName;}
std::string Contact::getFirstName() const{return this->firstName;}

void Contact::setLastName(const std::string& lastName){this->lastName = lastName;}
std::string Contact::getLastName() const{return this->lastName;}

void Contact::setNickName(const std::string& nickName){this->nickName = nickName;}
std::string Contact::getNickName() const{return this->nickName;}

void Contact::setPhoneNumber(const std::string& phoneNumber){this->phoneNumber = phoneNumber;}
std::string Contact::getPhoneNumber() const{return this->phoneNumber;}

void Contact::setDarkestSecret(const std::string& darkestSecret){this->darkestSecret = darkestSecret;}
std::string Contact::getDarkestSecret() const{return this->darkestSecret;}

void Contact::displayContact() const
{
    std::cout << "Name:           " << firstName << " " << lastName << std::endl;
    std::cout << "Nickname:       " << nickName << std::endl;
    std::cout << "Phone Number:   " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

void Contact::displayField(const std::string& field) const
{
    if (field.length() > 10) 
        std::cout << field.substr(0, 9) << ".|";
    else 
        std::cout << std::setw(10) << field << "|";
}

void Contact::displayOneLine() const
{
    displayField(firstName);
    displayField(lastName);
    displayField(nickName);
    displayField(phoneNumber);
    std::cout << std::endl;
}