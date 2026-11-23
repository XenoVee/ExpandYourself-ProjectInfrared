//
// Created by RosaA on 23/11/2026.
//

#include <iostream>
#include "Player.h"

Player::Player()
{
	this->i = 0;
	this->c = 'p';
}

Player::Player(const Player& other)
 : BaseObject(other) {
	this->i = other.i;
	this->c = other.c;
}

Player::~Player()
{

}

inline void Player::Call()
{
	std::cout << "I am a player" << std:: endl;
}
