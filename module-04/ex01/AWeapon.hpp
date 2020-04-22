#ifndef AWEAPON_H
#define AWEAPON_H

#include <iostream>

class AWeapon
{
private:
	std::string		name;
	int				ap_cost;
	int				damage;
protected:
	AWeapon();
	void	setName(const std::string p_name);
	void	setCost(int	p_cost);
	void	setDamage(int	p_damage);
public:
	AWeapon(std::string const & p_name, int p_ap_cost, int p_damage);
	virtual	~AWeapon();
	AWeapon(const AWeapon& obj);
	AWeapon&	operator=(const AWeapon& obj);

	const std::string&	getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif