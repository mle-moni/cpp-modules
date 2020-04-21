#include "FragTrap.hpp"

FragTrap::FragTrap(const char* p_name): ClapTrap(p_name, 100, 100, "FragTrap", 30, 20, 5)
{
	std::cout << "FragTrap constructor\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor\n";
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	actions[5] = {
		"an enormous headbutt",
		"his bare robot hands",
		"a sword that was there somehow",
		"a nice gun",
		"an annoying conversation"
	};
	std::string	random_attack = actions[std::rand() % 5];

	if (energy_points < 25) {
		std::cout << "Out of energy, action cancelled (" << energy_points << " energy points)\n";
		return ;
	}
	std::cout << type << " " << name << " attacks " << target << " with " << random_attack << "\n";
	energy_points -= 25;
	if (energy_points < 0) {
		energy_points = 0;
	}
}
