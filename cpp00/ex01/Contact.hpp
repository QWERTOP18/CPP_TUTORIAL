#pragma once
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip> 


class Contact 
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;

    public:
        Contact();
        ~Contact();

        void setFirstName(const std::string& firstName);
        std::string getFirstName() const;

        void setLastName(const std::string& lastName);
        std::string getLastName() const;

        void setNickName(const std::string& nickName);
        std::string getNickName() const;

        void setPhoneNumber(const std::string& phoneNumber);
        std::string getPhoneNumber() const;

        void setDarkestSecret(const std::string& darkestSecret);
        std::string getDarkestSecret() const;
        void displayContact() const;
        void displayField(const std::string& field) const;
        void displayOneLine() const;

};

#endif /* CONTACT_HPP */