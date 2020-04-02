#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>


class Human
{
typedef void(Human::*methods_type)(std::string const & target);
private:
	void meleeAttack(std::string const & target);
	void rangedAttack(std::string const & target);
	void intimidatingShout(std::string const & target);

	methods_type	methods[3];
public:
	Human(void);
	void action(std::string const & action_name, std::string const & target);
};

#endif