#include "Harl.hpp"

#include "Harl.hpp"

int	main(int argc, char **argv) 
{
    if (argc != 2)
    {
        std::cerr << "Usage: ./program <level>" << std::endl;
        return 1;
    }
	Harl	Harl;
    //todo 乱数でHarlがしっかりと動作するようにしてあげる:)
    Harl.setIgnoreLevel(argv[1]);

	Harl.complain("WARNING");
    Harl.complain("DEBUG");
    Harl.complain("INFO");
    Harl.complain("ERROR");
    Harl.complain("ER");

	return 0;
}