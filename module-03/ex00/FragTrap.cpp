#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::srand(std::time(NULL));
	std::cout << "Get ready for some Fragtrap face time!\n"; // stolen from https://borderlands.fandom.com/wiki/Claptrap/Quotes
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 100;
	max_energy_points = 100;
	level = 1;
	name = std::string("default_name");
	melee_attack_dammage = 30;
	ranged_attack_dammage = 20;
	armor_dammage_reduction = 5;
	copy_utility = false;
}

FragTrap::FragTrap(const std::string& p_name)
{
	FragTrap tmp;

	*this = tmp;
	name = p_name;
	tmp.copy_utility = true;
}

FragTrap::FragTrap(const FragTrap& obj)
{
	std::srand(std::time(NULL));
	std::cout << "Get ready for some Fragtrap face time!\n"; // stolen from https://borderlands.fandom.com/wiki/Claptrap/Quotes
	*this = obj;
}

FragTrap::~FragTrap()
{
	if (!copy_utility) {
		std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death.\n";
	}
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
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


void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target << " (range), causing " << ranged_attack_dammage << " points of dammages!\n";
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target << " (melee), causing " << melee_attack_dammage << " points of dammages!\n";
}

void	FragTrap::takeDamage(unsigned int amount)
{
	long long int	health_points = hit_points;
	long long int new_amount = (long long int)amount - (long long int)armor_dammage_reduction;

	if (new_amount <= 0) {
		std::cout << "FR4G-TP " << name << " doesn't take any dammages thanks to his armor!\n";
		return ;
	}
	health_points -= (long long int)new_amount;
	if (health_points < 0) {
		hit_points = 0;
	} else {
		hit_points = (int)health_points;
	}
	std::cout << "FR4G-TP " << name << " takes " << new_amount << " points of dammages! (" << hit_points << " remaining)\n";
}

void	FragTrap::beRepaired(unsigned int amount)
{
	long long int	health_points = hit_points;

	health_points += (long long int)amount;
	if (health_points > max_hit_points) {
		hit_points = max_hit_points;
	} else {
		hit_points = (int)health_points;
	}
	std::cout << "FR4G-TP " << name << " is repaired of " << amount << " hit points! (" << hit_points << " remaining)\n";
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
	std::cout << "FR4G-TP " << name << " attacks " << target << " with " << random_attack << "\n";
	energy_points -= 25;
	if (energy_points < 0) {
		energy_points = 0;
	}
}
