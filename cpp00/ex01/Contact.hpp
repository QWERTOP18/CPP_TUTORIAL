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

# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"

# define BG_RED "\033[41m"
# define BG_GREEN "\033[42m"
# define BG_YELLOW "\033[43m"
# define BG_BLUE "\033[44m"
# define BG_MAGENTA "\033[45m"
# define BG_CYAN "\033[46m"
# define BG_WHITE "\033[47m"

# define BOLD "\033[1m"
# define UNDERLINE "\033[4m"
# define BLINK "\033[5m"
# define REVERSED "\033[7m"
# define HIDDEN "\033[8m"

#endif /* CONTACT_HPP */