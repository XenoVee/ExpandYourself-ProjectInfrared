//
// Created by RosaA on 23/11/2026.
//

#pragma once
#include "BaseObject.h"

class Player : public BaseObject
{
public:
	Player();
	Player(const Player& other);
	~Player() override;
	void Call() override;
};


