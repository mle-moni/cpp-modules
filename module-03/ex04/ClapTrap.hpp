#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <ctime>
#include <cstdlib>

class ClapTrap
{
protected:
	int			hit_points;
	int			max_hit_points;
	int			energy_points;
	int			max_energy_points;
	int			level;
	int			melee_attack_dammage;
	int			ranged_attack_dammage;
	int			armor_dammage_reduction;
	std::string	name;
	std::string	type;
public:
	ClapTrap(const char* p_name, int hp, int energy, const char* p_type,
int m_att, int r_att, int armor);
	~ClapTrap();

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string	getName(void) const;
};

#endif