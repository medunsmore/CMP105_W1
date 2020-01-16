#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	


	// initialise game objects
	
	//first rect
	rect1.setSize(sf::Vector2f(75, 75));
	rect1.setPosition(100, 300);
	rect1.setFillColor(sf::Color::Red);

	//second rect
	rect2.setSize(sf::Vector2f(50, 50));
	rect2.setPosition(112, 315);
	rect2.setFillColor(sf::Color::Green);

	
	//third rect
	rect3.setSize(sf::Vector2f(25, 25));
	rect3.setPosition(124, 327);
	rect3.setFillColor(sf::Color::Blue);

	circle.setRadius(50);
	circle.setPosition(500, 300);
	circle.setFillColor(sf::Color::Red);
	circle.setOutlineColor(sf::Color::Blue);
	circle.setOutlineThickness(2.f);

	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout<< "Error loading font";
	}
	
	text.setFont(font);
	text.setString("Hello World!");
	text.setFillColor(sf::Color::Red);
	text.setCharacterSize(50);

}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	sf::Vector2u pos = window->getSize();
	
	rect4.setSize(sf::Vector2f(75, 75));
	rect4.setPosition(pos.x - 75, pos.y - 75);
	rect4.setFillColor(sf::Color::Green);
	
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(rect1);
	window ->draw(rect2);
	window->draw(rect3);
	window->draw(circle);
	window->draw(text);
	window->draw(rect4);

	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}