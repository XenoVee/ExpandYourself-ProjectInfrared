//
// Created by RosaA on 23/11/2026.
//

#include <iostream>
#include "Enemy.h"

Enemy::Enemy()
{
	this->i = 5;
	this->c = 'e';
}



Enemy::Enemy(const Enemy& other)
 : BaseObject(other) {
	this->i = other.i;
	this->c = other.c;
}

Enemy::~Enemy()
{

}

inline void Enemy::Call()
{
	std::cout << "I am an enemy" << std:: endl;
}
