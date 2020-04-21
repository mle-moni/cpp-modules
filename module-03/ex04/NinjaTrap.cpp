#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const char* p_name): ClapTrap(p_name, 60, 120, "NinjaTrap", 60, 5, 0)
{
	std::cout << "NinjaTrap constructor\n";
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap destructor\n";
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
