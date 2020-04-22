#ifndef TACTICALMARINE_H
#define TACTICALMARINE_H

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine: public ISpaceMarine
{
private:
	/* data */
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine& obj);
	~TacticalMarine();
	TacticalMarine& operator=(const TacticalMarine& obj);

	void	battleCry() const;
	void	rangedAttack() const;
	void	meleeAttack() const;

	ISpaceMarine* clone() const;
};

#endif