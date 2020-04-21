#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const char* p_name): ClapTrap(p_name, 100, 120, "SuperTrap", 60, 20, 5), FragTrap(p_name), NinjaTrap(p_name)
{
	std::cout << "SuperTrap constructor\n";
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap destructor\n";
}
