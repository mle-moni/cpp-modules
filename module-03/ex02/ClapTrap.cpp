#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::srand(std::time(NULL));
	std::cout << "ClapTrap constructor\n";
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 100;
	max_energy_points = 100;
	level = 1;
	name = std::string("default_name");
	type = std::string("ClapTrap");
	melee_attack_dammage = 30;
	ranged_attack_dammage = 20;
	armor_dammage_reduction = 5;
	copy_utility = false;
}

ClapTrap::ClapTrap(const std::string& p_name)
{
	ClapTrap tmp;

	*this = tmp;
	name = p_name;
	tmp.copy_utility = true;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::srand(std::time(NULL));
	std::cout << "ClapTrap constructor\n";
	*this = obj;
}

ClapTrap::~ClapTrap()
{
	if (!copy_utility) {
		std::cout << "ClapTrap destructor\n";
	}
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
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
	type = obj.type;
	copy_utility = false;
	return (*this);
}


void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << type << " " << name << " attacks " << target << " (range), causing " << ranged_attack_dammage << " points of dammages!\n";
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << type << " " << name << " attacks " << target << " (melee), causing " << melee_attack_dammage << " points of dammages!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	long long int	health_points = hit_points;
	long long int new_amount = (long long int)amount - (long long int)armor_dammage_reduction;

	if (new_amount <= 0) {
		std::cout << type << " " << name << " doesn't take any dammages thanks to his armor!\n";
		return ;
	}
	health_points -= (long long int)new_amount;
	if (health_points < 0) {
		hit_points = 0;
	} else {
		hit_points = (int)health_points;
	}
	std::cout << type << " " << name << " takes " << new_amount << " points of dammages! (" << hit_points << " remaining)\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	long long int	health_points = hit_points;

	health_points += (long long int)amount;
	if (health_points > max_hit_points) {
		hit_points = max_hit_points;
	} else {
		hit_points = (int)health_points;
	}
	std::cout << type << " " << name << " is repaired of " << amount << " hit points! (" << hit_points << " remaining)\n";
}
