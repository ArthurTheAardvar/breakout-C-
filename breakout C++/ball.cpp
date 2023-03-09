#include"ball.h"

ball::ball(int x, int y) {
	xpos = x;
	ypos = y;

}
void ball::draw(sf::RenderWindow& window) {
	circle.setRadius(10);
	circle.setFillColor((sf::Color(0, 200, 0)));
	circle.setPosition(xpos, ypos);
	window.draw(circle);
}


