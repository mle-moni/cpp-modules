#include "Human.hpp"

static int	miniHash(const std::string& str)
{
	int	final = 0;

	final += str.length();
	for (unsigned long i = 0; i < str.length(); i++) {
		final += (int)(str[i]);
	}
	return (((final % 4) - 1) % 3);
}

Human::Human(void)
{
	methods[miniHash("melee")] = &Human::meleeAttack;
	methods[miniHash("ranged")] = &Human::rangedAttack;
	methods[miniHash("intimidate")] = &Human::intimidatingShout;
}

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "melee attack on " << target << "\n";
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "ranged attack on " << target << "\n";
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "FEAR ME!!! " << target << "\n";
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	// action_name can be "melee", "ranged" or "intimidate"
	(this->*(methods[miniHash(action_name)]))(target);
}
