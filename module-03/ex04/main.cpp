#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	FragTrap	roger("Roger");
	
	ScavTrap	bernard("Bernard");

	NinjaTrap	bob("Bob");

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

	SuperTrap Bill("Bill");

	std::cout << "\n";

	Bill.vaulthunter_dot_exe(std::string("you"));

	Bill.rangedAttack(std::string("you"));
	Bill.meleeAttack(std::string("you"));
	Bill.takeDamage(5);
	Bill.takeDamage(50);
	Bill.takeDamage(1);
	Bill.takeDamage(4294967295); // UINT_MAX
	Bill.takeDamage(50);

	Bill.beRepaired(10);
	Bill.takeDamage(6);
	Bill.beRepaired(4294967295); // UINT_MAX

	Bill.ninjaShoebox(roger);
	Bill.ninjaShoebox(bernard);
	Bill.ninjaShoebox(roger);
	Bill.ninjaShoebox(bernard);
	Bill.ninjaShoebox(bob);

	std::cout << "\n";
	return (0);
}
