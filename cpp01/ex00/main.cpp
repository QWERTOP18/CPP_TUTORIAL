#include "Zombie.hpp"

#include <iostream>

int main(int argc, char **argv)
{
    if (argc !=2)
    {
        std::cout << "Usage: ./program <his name>" << std::endl;
		return 1;
    }
    Zombie *zombie = newZombie(argv[1]);
    // if (zombie == NULL)
    // {
    //     return 1;
    // }
    zombie->announce();

    randomChump(argv[1]);
    delete zombie;
    return 0;
}