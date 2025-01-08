#include "Zombie.hpp"

#include <iostream>

int main()
{
    Zombie *horde = zombieHorde(6, "GAGIGUGEGO");
    if (horde == NULL)
    {
        return 1;
    }

    for (int i = 0; i < 6; i++) {
		std::cout << "[" << i + 1 << "] ";
		horde[i].announce();
	}
    delete[] horde;
    return 0;
}