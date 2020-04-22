#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>

class Enemy
{
private:
	std::string	type;
	int			hp;
protected:
	Enemy();
	void setType(const std::string& p_type);
	void setHP(int p_hp);
public:
	Enemy(int p_hp, std::string const & p_type);
	virtual	~Enemy();
	Enemy(const Enemy& obj);
	Enemy&	operator=(const Enemy& obj);

	const std::string&	getType() const;
	int getHP() const;

	virtual void takeDamage(int);
};

#endif