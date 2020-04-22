#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(int p_hp, std::string const & p_type)
{
	hp = p_hp;
	type = p_type;
}

Enemy::Enemy(const Enemy& obj)
{
	hp = obj.hp;
	type = obj.type;
}

Enemy::~Enemy()
{
}

Enemy& Enemy::operator=(const Enemy& obj)
{
	hp = obj.hp;
	type = obj.type;
	return (*this);
}

const std::string&	Enemy::getType() const
{
	return (type);
}

int Enemy::getHP() const
{
	return (hp);
}

void Enemy::setType(const std::string& p_type)
{
	type = p_type;
}

void Enemy::setHP(int p_hp)
{
	hp = p_hp;
}

void Enemy::takeDamage(int dmg)
{
	if (dmg < 0) {
		return ;
	}
	if (hp - dmg < 0) {
		hp = 0;
	} else {
		hp -= dmg;
	}
}
