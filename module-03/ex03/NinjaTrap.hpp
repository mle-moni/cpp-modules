#ifndef NINJATRAP_H
#define NINJATRAP_H

#include "ClapTrap.hpp"

class NinjaTrap: public ClapTrap
{
typedef void(NinjaTrap::*methods_type)(const ClapTrap& target) const;
private:
	/* data */
public:
	NinjaTrap();
	NinjaTrap(const std::string& p_name);
	NinjaTrap(const NinjaTrap& obj);
	~NinjaTrap();
	NinjaTrap& operator=(const NinjaTrap& obj);

	void	ninjaShoebox(const ClapTrap& target);

	void	sayHello(const ClapTrap& target) const;
	void	sayGoodbye(const ClapTrap& target) const;
	void	sayIHateYou(const ClapTrap& target) const;
	void	sayILoveYou(const ClapTrap& target) const;
	void	ignore(const ClapTrap& target) const;
};

#endif