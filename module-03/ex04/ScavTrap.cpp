#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const char* p_name): ClapTrap(p_name, 50, 50, "ScavTrap", 20, 15, 3)
{
	std::cout << "ScavTrap constructor\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor\n";
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string	actions[5] = {
		"destroy a wall in one hit",
		"eat a raw egg",
		"fight blindfolded",
		"take a selfie with him",
		"solve an equation faster than him"
	};
	std::string	random_challenge = actions[std::rand() % 5];

	std::cout << type << " " << name << " challenges " << target << " to " << random_challenge << "\n";
}
