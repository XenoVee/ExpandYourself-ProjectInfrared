//
// Created by RosaA on 23/11/2026.
//

#pragma once
#include "BaseObject.h"

class Enemy : public BaseObject
{
public:
	Enemy();
	Enemy(const Enemy& other);
	~Enemy() override;
	void Call() override;
};




