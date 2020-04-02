#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include "Brain.hpp"

class Human
{
private:
	const Brain	brain;
	std::string	name;
public:
	Human(void);
	Human(std::string	h_name);
	~Human();

	std::string		identify(void);
	const Brain&	getBrain(void);
};

#endif