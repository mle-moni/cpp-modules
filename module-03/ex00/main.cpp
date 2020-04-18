#include "FragTrap.hpp"

int	main(void)
{
	std::string	name("Roger");
	FragTrap	roger(name);

	std::string	target("Bill");
	roger.rangedAttack(target);
	roger.meleeAttack(target);
	roger.takeDamage(5);
	roger.takeDamage(50);
	roger.takeDamage(1);
	roger.takeDamage(4294967295); // UINT_MAX
	roger.takeDamage(50);

	roger.beRepaired(10);
	roger.takeDamage(6);
	roger.beRepaired(4294967295); // UINT_MAX

	roger.vaulthunter_dot_exe(target);
	roger.vaulthunter_dot_exe(target);
	roger.vaulthunter_dot_exe(target);
	roger.vaulthunter_dot_exe(target);
	roger.vaulthunter_dot_exe(target);

	return (0);
}
