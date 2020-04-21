#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const char* p_name, int hp, int energy, const char* p_type,
int m_att, int r_att, int armor)
{
	std::srand(std::time(NULL));
	std::cout << "ClapTrap constructor\n";
	hit_points = hp;
	max_hit_points = hp;
	energy_points = energy;
	max_energy_points = energy;
	level = 1;
	name = std::string(p_name);
	type = std::string(p_type);
	melee_attack_dammage = m_att;
	ranged_attack_dammage = r_att;
	armor_dammage_reduction = armor;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor\n";
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

std::string	ClapTrap::getName(void) const
{
	return (name);
}
