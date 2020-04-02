#ifndef PONY_H
#define PONY_H

#include <iostream>

class Pony
{
private:
	std::string	name;
	bool		is_running;
	int			speed;
	
public:
	Pony(const std::string pony_name);
	~Pony();
	void	run(int pony_speed);
	void	stop(void);
	void	neigh(void);
};

#endif