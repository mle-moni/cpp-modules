#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	
public:
	ScavTrap(const char* p_name);
	~ScavTrap();

	void	challengeNewcomer(std::string const & target);
};

#endif