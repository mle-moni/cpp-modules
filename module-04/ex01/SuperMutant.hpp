#ifndef SUPERMUTANT_H
#define SUPERMUTANT_H

#include "Enemy.hpp"

class SuperMutant: public virtual Enemy
{
private:
	/* data */
public:
	SuperMutant();
	SuperMutant(const SuperMutant& obj);
	~SuperMutant();
	SuperMutant& operator=(const SuperMutant& obj);

	void	takeDamage(int);
};

#endif