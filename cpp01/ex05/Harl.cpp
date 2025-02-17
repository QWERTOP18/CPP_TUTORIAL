#include "Harl.hpp"






Harl::Harl()
{
    this->complainLevel[0] = &Harl::debug;
    this->complainLevel[1] = &Harl::info;
    this->complainLevel[2] = &Harl::warning;
    this->complainLevel[3] = &Harl::error;
}
Harl::~Harl(){}

static void print(const std::string &color, const std::string &str) 
{
    std::cout << color << str << RESET << std::endl;
}


void Harl::complain(std::string level) 
{
	

	for (int i = 0; i < 4; i++) 
    {
		if (level == levels[i]) 
        {
			(this->*complainLevel[i])();
			return;
		}
	}
    std::cerr << "Invalid complain level: " << level << std::endl;
}

void	Harl::debug()
{
	print(UNDERLINE, "DEBUG");
    print(
            WHITE, 
            "I love having extra bacon for my \n"
            "7XL-double-cheese-triple-pickle-specialketchup burger.\n"
            "I really do!\n"
        );
}

void	Harl::info()
{
 	print(UNDERLINE, "INFO");
    print(
            CYAN,
            "I cannot believe adding extra bacon costs more money.\n"
            "You didn't put enough bacon in my burger!\n"
            "If you did, I wouldn't be asking for more!\n" 
        );
}

void Harl::warning() {
    print(UNDERLINE, "WARNING");
    print(
            YELLOW,
            "I think I deserve to have some extra bacon for free.\n"
            "I've been coming foryears\n"
            "whereas you started working here since last month.\n"
        );
    
}

void Harl::error() {
    print(UNDERLINE, "ERROR");
    print(
             RED,
            "This is unacceptable!\n"
            "I want to speak to the manager now.\n"
        );
}