#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include <ctime>
#include <cstdlib>

class ScavTrap
{
private:
	int			hit_points;
	int			max_hit_points;
	int			energy_points;
	int			max_energy_points;
	int			level;
	int			melee_attack_dammage;
	int			ranged_attack_dammage;
	int			armor_dammage_reduction;
	bool		copy_utility;
	std::string	name;
public:
	ScavTrap();
	ScavTrap(const std::string& p_name);
	ScavTrap(const ScavTrap& obj);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& obj);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	challengeNewcomer(std::string const & target);
};

#endif