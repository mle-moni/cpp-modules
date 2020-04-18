#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	
public:
	ScavTrap();
	ScavTrap(const std::string& p_name);
	ScavTrap(const ScavTrap& obj);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& obj);

	void	challengeNewcomer(std::string const & target);
};

#endif