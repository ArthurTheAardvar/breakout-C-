#include <SFML/Graphics.hpp>
#include <iostream>
#include "brick.h"
#include "ball.h"

using namespace std;


//----------------------------------------------------------------------------


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Breakout"); //set up screen
	sf::RectangleShape rect;
	sf::CircleShape circle;


	//instantiate some bricks
	brick b1(50, 50);
	brick b2(250, 50);
	brick b3(450, 50);
	brick b4(650, 50);
	brick b5(50, 150);
	brick b6(250, 150);
	brick b7(450, 150);
	brick b8(650, 150);
	brick b9(50, 250);
	brick b10(250, 250);
	brick b11(450, 250);
	brick b12(650, 250);
	brick b13(50, 350);
	brick b14(250, 350);
	brick b15(450, 350);
	brick b16(650, 350);

	ball c1(650, 500);

	while (window.isOpen())//GAME LOOP--------------------------------
	{
		//input section--------------------------------
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		}
		//physics section------------------------------


		//render section-------------------------------
		window.clear();

		//draw bricks
		b1.draw(window);
		b2.draw(window);
		b3.draw(window);
		b4.draw(window);
		b5.draw(window);
		b6.draw(window);
		b7.draw(window);
		b8.draw(window);
		b9.draw(window);
		b10.draw(window);
		b11.draw(window);
		b12.draw(window);
		b13.draw(window);
		b14.draw(window);
		b15.draw(window);
		b16.draw(window);

		c1.draw(window);

		window.display(); //flip the buffer

	}//end game loop-------------------------------------------------

	return 0;
} //end main