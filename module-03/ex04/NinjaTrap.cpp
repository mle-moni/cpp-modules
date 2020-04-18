#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	std::cout << "NinjaTrap constructor\n";
	hit_points = 60;
	max_hit_points = 60;
	energy_points = 120;
	max_energy_points = 120;
	melee_attack_dammage = 60;
	ranged_attack_dammage = 5;
	armor_dammage_reduction = 0;
	type = std::string("NinjaTrap");
}

NinjaTrap::NinjaTrap(const std::string& p_name)
{
	std::cout << "NinjaTrap constructor\n";
	hit_points = 60;
	max_hit_points = 60;
	energy_points = 120;
	max_energy_points = 120;
	melee_attack_dammage = 60;
	ranged_attack_dammage = 5;
	armor_dammage_reduction = 0;
	type = std::string("NinjaTrap");
	name = p_name;
}

NinjaTrap::NinjaTrap(const NinjaTrap& obj)
{
	std::cout << "NinjaTrap copy constructor\n";
	*this = obj;
}

NinjaTrap::~NinjaTrap()
{
	if (!copy_utility) {
		std::cout << "NinjaTrap destructor\n";
	}
}

NinjaTrap& NinjaTrap::operator=(const NinjaTrap& obj)
{
	ClapTrap::operator=(obj);
	return (*this);
}

void	NinjaTrap::sayHello(const ClapTrap& target) const
{
	std::cout << type << " " << name << " says hello to " << target.getName() << "\n";
}

void	NinjaTrap::sayGoodbye(const ClapTrap& target) const
{
	std::cout << type << " " << name << " says goodbye to " << target.getName() << "\n";
}

void	NinjaTrap::sayIHateYou(const ClapTrap& target) const
{
	std::cout << type << " " << name << " says I hate you to " << target.getName() << "\n";
}

void	NinjaTrap::sayILoveYou(const ClapTrap& target) const
{
	std::cout << type << " " << name << " says I love you to " << target.getName() << "\n";
}

void	NinjaTrap::ignore(const ClapTrap& target) const
{
	std::cout << type << " " << name << " ignores " << target.getName() << "\n";
}

void	NinjaTrap::ninjaShoebox(const ClapTrap& target)
{
	methods_type	actions[5] = {
		&NinjaTrap::sayHello,
		&NinjaTrap::sayGoodbye,
		&NinjaTrap::sayIHateYou,
		&NinjaTrap::sayILoveYou,
		&NinjaTrap::ignore
	};
	int				rand_int = std::rand() % 5;
	(this->*(actions[rand_int]))(target);
}
