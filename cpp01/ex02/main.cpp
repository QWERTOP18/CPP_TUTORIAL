#include <iostream>
#include <string>


int	main() {
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "string's adress     : " << &string << std::endl;
	std::cout << "string's ptr adress : " << stringPTR << std::endl;
	std::cout << "string's ref adress : " << &stringREF << std::endl;

	std::cout << "string's value      : " << string << std::endl;
	std::cout << "string's ptr value  : " << *stringPTR << std::endl;
	std::cout << "string's ref value  : " << stringREF << std::endl;
}