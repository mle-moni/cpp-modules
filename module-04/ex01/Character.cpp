#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const & p_name)
{
	name = p_name;
	ap = 40;
	weapon = 0;
}

Character::Character(const Character& obj)
{
	name = obj.name;
	ap = obj.ap;
	weapon = obj.weapon;
}

Character::~Character()
{
	delete weapon;
}

Character& Character::operator=(const Character& obj)
{
	name = obj.name;
	ap = obj.ap;
	weapon = obj.weapon;
	return (*this);
}

void		Character::recoverAP()
{
	ap += 10;
	if (ap > 40) {
		ap  = 40;
	}
}

void		Character::equip(AWeapon* p_weapon)
{
	weapon = p_weapon;
}

void		Character::attack(Enemy* enemy)
{
	if (!weapon) {
		std::cout << "No weapon to attack!\n";
		return ;
	}
	if (ap < weapon->getAPCost()) {
		std::cout << "Not enough Action Points to attack!\n";
		return ;
	}
	std::cout << name << " attacks " << enemy->getType() << " with a " << weapon->getName() << "\n";
	ap -= weapon->getAPCost();
	weapon->attack();
	enemy->takeDamage(weapon->getDamage());
	if (enemy->getHP() <= 0) {
		delete enemy;
	}
}

const std::string&	Character::getName() const
{
	return (name);
}

int					Character::getAP() const
{
	return (ap);
}

const AWeapon		*Character::getWeapon() const
{
	return (weapon);
}

std::ostream&	operator<<(std::ostream& stream, const Character& obj)
{
	const AWeapon	*wp;

	wp = obj.getWeapon();
	stream << obj.getName() << " has " << obj.getAP() << " AP and ";
	if (wp) {
		stream << "wields a " << wp->getName() << "\n";
	} else {
		stream << "is unarmed\n";
	}
	return (stream);
}
