#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::srand(std::time(NULL));
	std::cout << "Does this mean I can start dancing? Pleeeeeeaaaaase?!\n"; // stolen from https://borderlands.fandom.com/wiki/Claptrap/Quotes
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 50;
	max_energy_points = 50;
	level = 1;
	name = std::string("default_name");
	melee_attack_dammage = 20;
	ranged_attack_dammage = 15;
	armor_dammage_reduction = 3;
	copy_utility = false;
}

ScavTrap::ScavTrap(const std::string& p_name)
{
	ScavTrap tmp;

	*this = tmp;
	name = p_name;
	tmp.copy_utility = true;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	std::srand(std::time(NULL));
	std::cout << "Can I shoot something now? Or climb some stairs? SOMETHING exciting?\n"; // stolen from https://borderlands.fandom.com/wiki/Claptrap/Quotes
	*this = obj;
}

ScavTrap::~ScavTrap()
{
	if (!copy_utility) {
		std::cout << "Ahem, ahem. What's going on? Did I break something?\n";
	}
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
	hit_points = obj.hit_points;
	max_hit_points = obj.max_hit_points;
	energy_points = obj.energy_points;
	max_energy_points = obj.max_energy_points;
	level = obj.level;
	name = obj.name;
	melee_attack_dammage = obj.melee_attack_dammage;
	ranged_attack_dammage = obj.ranged_attack_dammage;
	armor_dammage_reduction = obj.armor_dammage_reduction;
	copy_utility = false;
	return (*this);
}


void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "ScavTrap " << name << " attacks " << target << " (range), causing " << ranged_attack_dammage << " points of dammages!\n";
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "ScavTrap " << name << " attacks " << target << " (melee), causing " << melee_attack_dammage << " points of dammages!\n";
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	long long int	health_points = hit_points;
	long long int new_amount = (long long int)amount - (long long int)armor_dammage_reduction;

	if (new_amount <= 0) {
		std::cout << "ScavTrap " << name << " doesn't take any dammages thanks to his armor!\n";
		return ;
	}
	health_points -= (long long int)new_amount;
	if (health_points < 0) {
		hit_points = 0;
	} else {
		hit_points = (int)health_points;
	}
	std::cout << "ScavTrap " << name << " takes " << new_amount << " points of dammages! (" << hit_points << " remaining)\n";
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	long long int	health_points = hit_points;

	health_points += (long long int)amount;
	if (health_points > max_hit_points) {
		hit_points = max_hit_points;
	} else {
		hit_points = (int)health_points;
	}
	std::cout << "ScavTrap " << name << " is repaired of " << amount << " hit points! (" << hit_points << " remaining)\n";
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

	std::cout << "ScavTrap " << name << " challenges " << target << " to " << random_challenge << "\n";
}
