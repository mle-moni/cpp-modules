#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <cstdlib>
#include <ctime>

class Zombie
{
private:
	std::string	randomName(void);

	std::string		name;
	std::string		type;
public:
	Zombie(void);
	Zombie(std::string z_name, std::string z_type);
	~Zombie();
	void	announce(void);
};

#endif
