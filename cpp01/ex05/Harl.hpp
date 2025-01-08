#ifndef HARL_CPP
#define HARL_CPP

#include <iostream>
#include <string>

class Harl
{
	public:
		Harl();
        ~Harl();
	    void complain(std::string level);

	
	private:
        void (Harl::*complainLevel[4])();
		void debug();
		void info();
		void warning();
		void error();
};

const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

#endif