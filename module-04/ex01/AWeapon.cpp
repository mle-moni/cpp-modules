#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const & p_name, int p_ap_cost, int p_damage)
{
	name = p_name;
	ap_cost = p_ap_cost;
	damage = p_damage;
}

AWeapon::AWeapon(const AWeapon& obj)
{
	name = obj.name;
	ap_cost = obj.ap_cost;
	damage = obj.damage;
}

AWeapon::~AWeapon()
{
}

AWeapon& AWeapon::operator=(const AWeapon& obj)
{
	name = obj.name;
	ap_cost = obj.ap_cost;
	damage = obj.damage;
	return (*this);
}

int AWeapon::getAPCost() const
{
	return (ap_cost);
}

int AWeapon::getDamage() const
{
	return (damage);
}

const std::string&	AWeapon::getName() const
{
	return (name);
}

void	AWeapon::setName(const std::string p_name)
{
	name = p_name;
}

void	AWeapon::setCost(int	p_cost)
{
	ap_cost = p_cost;
}

void	AWeapon::setDamage(int	p_damage)
{
	damage = p_damage;
}
