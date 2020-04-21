#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
private:

public:
	FragTrap(const char* p_name);
	~FragTrap();

	void	vaulthunter_dot_exe(std::string const & target);
};

#endif