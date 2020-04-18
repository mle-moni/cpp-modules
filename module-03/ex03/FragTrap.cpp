#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor\n";
	type = std::string("FragTrap");
}

FragTrap::FragTrap(const std::string& p_name)
{
	std::cout << "FragTrap constructor\n";
	name = p_name;
	type = std::string("FragTrap");
}

FragTrap::FragTrap(const FragTrap& obj)
{
	std::cout << "FragTrap copy constructor\n";
	*this = obj;
}

FragTrap::~FragTrap()
{
	if (!copy_utility) {
		std::cout << "FragTrap destructor\n";
	}
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	ClapTrap::operator=(obj);
	return (*this);
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
