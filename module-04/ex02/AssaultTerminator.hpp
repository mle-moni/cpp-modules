#ifndef ASSAULTTERMINATOR_H
#define ASSAULTTERMINATOR_H

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator: public ISpaceMarine
{
private:
	/* data */
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator& obj);
	~AssaultTerminator();
	AssaultTerminator& operator=(const AssaultTerminator& obj);

	void	battleCry() const;
	void	rangedAttack() const;
	void	meleeAttack() const;

	ISpaceMarine* clone() const;
};

#endif