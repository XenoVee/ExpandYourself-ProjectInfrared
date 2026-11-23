#include <iostream>
#include <vector>

#include "Player.h"
#include "BaseObject.h"
#include "Enemy.h"


int main()
{

	Player *player1 = new Player();
	Enemy *enemy1 = new Enemy();

	std::vector<BaseObject*> list;

	list.push_back(player1);
	list.push_back(enemy1);

	for (int i = 0; i < list.size(); i++)
	{
		list[i]->Call();
	}

	return 0;

}