#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <ctime>
#include <cstdlib>

class FragTrap
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
	FragTrap();
	FragTrap(const std::string& p_name);
	FragTrap(const FragTrap& obj);
	~FragTrap();
	FragTrap& operator=(const FragTrap& obj);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	vaulthunter_dot_exe(std::string const & target);
};

#endif