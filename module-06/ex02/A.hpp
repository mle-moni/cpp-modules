#ifndef A_H
#define A_H

#include "Base.hpp"

class A: public Base
{
private:
	/* data */
public:
	A();
	A(const A& obj);
	~A();
	A& operator=(const A& obj);
};

#endif