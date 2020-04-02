#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <sstream>

class Brain
{
private:
	int		IQ;
public:
	Brain(int brainIQ);
	~Brain();

	std::string		identify(void) const;
	int				getIQ(void) const;
};

#endif