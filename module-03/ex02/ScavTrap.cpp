#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor\n";
	energy_points = 50;
	max_energy_points = 50;
	melee_attack_dammage = 20;
	ranged_attack_dammage = 15;
	armor_dammage_reduction = 3;
	type = std::string("ScavTrap");
}

ScavTrap::ScavTrap(const std::string& p_name)
{
	std::cout << "ScavTrap constructor\n";
	energy_points = 50;
	max_energy_points = 50;
	melee_attack_dammage = 20;
	ranged_attack_dammage = 15;
	armor_dammage_reduction = 3;
	type = std::string("ScavTrap");
	name = p_name;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	std::cout << "ScavTrap copy constructor\n";
	*this = obj;
}

ScavTrap::~ScavTrap()
{
	if (!copy_utility) {
		std::cout << "ScavTrap destructor\n";
	}
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
	ClapTrap::operator=(obj);
	return (*this);
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
