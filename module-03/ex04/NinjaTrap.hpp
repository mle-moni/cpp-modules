#ifndef NINJATRAP_H
#define NINJATRAP_H

#include "ClapTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
typedef void(NinjaTrap::*methods_type)(const ClapTrap& target) const;
private:
	/* data */
public:
	NinjaTrap(const char* p_name);
	~NinjaTrap();

	void	ninjaShoebox(const ClapTrap& target);

	void	sayHello(const ClapTrap& target) const;
	void	sayGoodbye(const ClapTrap& target) const;
	void	sayIHateYou(const ClapTrap& target) const;
	void	sayILoveYou(const ClapTrap& target) const;
	void	ignore(const ClapTrap& target) const;
};

#endif