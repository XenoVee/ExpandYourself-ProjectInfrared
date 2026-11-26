#include <iostream>
#include <vector>

#include "Player.h"
#include "BaseObject.h"
#include "Enemy.h"
#include <SFML/Graphics.hpp>

int main()
{

	Player *player1 = new Player();
	Enemy *enemy1 = new Enemy();

	std::vector<BaseObject*> list;

	list.push_back(player1);
	list.push_back(enemy1);

	for (const auto & i : list)
	{
		i->Call();
	}
	sf::RenderWindow window( sf::VideoMode( { 200, 200 } ), "SFML works!" );
	sf::CircleShape shape( 100.f );
	shape.setFillColor( sf::Color::Green );

	while ( window.isOpen() )
	{
		while ( const std::optional event = window.pollEvent() )
		{
			if ( event->is<sf::Event::Closed>() )
				window.close();
		}

		window.clear();
		window.draw( shape );
		window.display();
	}
	return 0;

}