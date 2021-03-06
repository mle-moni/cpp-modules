#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int	main(void)
{
	std::string	name("Roger");
	FragTrap	roger(name);
	
	std::string	name2("Bernard");
	ScavTrap	bernard(name2);

	std::string	name3("Bob");
	NinjaTrap	bob(name3);

	std::string	target("Bill");
	std::cout << "\n";

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

	std::cout << "\n";

	bernard.rangedAttack(target);
	bernard.meleeAttack(target);
	bernard.takeDamage(5);
	bernard.takeDamage(50);
	bernard.takeDamage(1);
	bernard.takeDamage(4294967295); // UINT_MAX
	bernard.takeDamage(50);

	bernard.beRepaired(10);
	bernard.takeDamage(6);
	bernard.beRepaired(4294967295); // UINT_MAX

	bernard.challengeNewcomer(target);
	bernard.challengeNewcomer(target);
	bernard.challengeNewcomer(target);
	bernard.challengeNewcomer(target);
	bernard.challengeNewcomer(target);

	std::cout << "\n";

	bob.rangedAttack(target);
	bob.meleeAttack(target);
	bob.takeDamage(5);
	bob.takeDamage(50);
	bob.takeDamage(1);
	bob.takeDamage(4294967295); // UINT_MAX
	bob.takeDamage(50);

	bob.beRepaired(10);
	bob.takeDamage(6);
	bob.beRepaired(4294967295); // UINT_MAX

	bob.ninjaShoebox(roger);
	bob.ninjaShoebox(bernard);
	bob.ninjaShoebox(roger);
	bob.ninjaShoebox(bernard);
	bob.ninjaShoebox(bob);
	std::cout << "\n";

	return (0);
}
