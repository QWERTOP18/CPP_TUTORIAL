#include "PhoneBook.hpp"

int main()
{
    std::string input;
    PhoneBook phoneBook;
    while(true)
    {
        std::cout <<"ENTER:  " BOLD "ADD" RESET " , " BOLD "SEARCH" RESET  " or " BOLD "EXIT" RESET << std::endl;
        std::getline(std::cin, input);
        if(input == "EXIT" || std::cin.eof())
            break;
        else if(input == "ADD")
            phoneBook.addContact();
        else if(input == "SEARCH")
            phoneBook.searchContact();
        else
        {
            std::cout << "Invalid input" << std::endl;
        }

    }


    return 0;
}