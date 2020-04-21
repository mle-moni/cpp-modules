#ifndef SUPERTRAP_H
#define SUPERTRAP_H

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
private:
	
public:
	SuperTrap(const char* p_name);
	~SuperTrap();
};

#endif