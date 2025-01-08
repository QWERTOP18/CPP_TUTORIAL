#include "Harl.hpp"


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

# define UNDERLINE "\033[4m"
# define BLINK "\033[5m"
# define REVERSED "\033[7m"
# define HIDDEN "\033[8m"





Harl::Harl()
{
    this->complainLevel[0] = &Harl::debug;
    this->complainLevel[1] = &Harl::info;
    this->complainLevel[2] = &Harl::warning;
    this->complainLevel[3] = &Harl::error;
}
Harl::~Harl(){}


void Harl::setIgnoreLevel(const std::string& level)
{
    for (int i = 0; i < 4; i++) 
    {
        if (level == levels[i]) 
        {
            this->ignoreLevel = i;
            return;
        }
    }
    this->ignoreLevel = 4;

}

static void print(const std::string &color, const std::string &str) 
{
    std::cout << color << str << RESET << std::endl;
}


void Harl::complain(std::string level) 
{
	

	for (int i = this->ignoreLevel; i < 4; i++) 
    {
		if (level == levels[i]) 
        {
			(this->*complainLevel[i])();
			return;
		}
	}
    print(RESET,"[ Probably complaining about insignificant problems ]");
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



