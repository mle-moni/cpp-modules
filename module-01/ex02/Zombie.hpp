#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
private:
	std::string		name;
	std::string		type;
public:
	Zombie(std::string z_name, std::string z_type);
	~Zombie();
	void	announce(void);
};

#endif
