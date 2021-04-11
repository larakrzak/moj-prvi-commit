#include <SFML/Graphics.hpp>
#include <iostream>
#include <stdio.h>



 int Ibrojac;


class Cvijet {

public:
	Cvijet(sf::RenderWindow* window);
	void draw() const;
	
private:
	sf::RenderWindow* mWindow;
	std::vector<sf::CircleShape> mParts;
	
	
};




Cvijet::Cvijet(sf::RenderWindow* window) : mWindow(window)
{
	
	

	sf::RectangleShape line(sf::Vector2f(10.f, 200.f));
	line.setPosition(250, 355);
	line.setFillColor(sf::Color(0, 255, 0));
	line.rotate(180.f);
	window->draw(line);

	sf::CircleShape shape(50);
	shape.setFillColor(sf::Color(50, 250, 0));
	shape.setOutlineThickness(10);
	shape.setOutlineColor(sf::Color(255, 0, 0));
	shape.setPosition(200, 50);
	window->draw(shape);

	sf::CircleShape octagon(40.f, 3);
	octagon.scale(1.5f, 1.f);
	octagon.setPosition(310, 200);
	//octagon.setOutlineThickness(-10);
	octagon.setFillColor(sf::Color(0, 250, 0));
	octagon.rotate(90.f);
	window->draw(octagon);

	
	
	

	
	// Setup mParts similar to the example above
}

void Cvijet::draw() const
{
	sf::RenderStates state;
	// Apply the proper transform for the flower position
	
	


	// Draw the flower parts
	for (const sf::CircleShape& mParts : mParts)
	{
		mWindow->draw(mParts, state);
	}

}


int main()
{
	int i = 0;
	int Ibrojac = 0;
	int ip = 1;

	sf::RenderWindow window(sf::VideoMode(800, 600), "Hello, SFML world!");
	sf::Clock vura;
	vura.restart();


	// window.setFramerateLimit(60);
	
	
	Cvijet cvijet(&window);
	cvijet.draw();
	window.display();
	
	sf::CircleShape shape1(20);

	while (window.isOpen())
	{

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				 window.clear();
				 window.close();
		}
		
		sf::Time elapsed = vura.getElapsedTime();
		Ibrojac = elapsed.asSeconds();

		// kad ovaj kod stavim u klasu, nema nikakvih promjena, kao da se vrijednost varijable ne mijenja

		shape1.setFillColor(sf::Color(150, 250, 0));
		shape1.setOutlineThickness(1);
		shape1.setOutlineColor(sf::Color(0, 0, 0));


		if (Ibrojac % 2 == 0)
		{    
			shape1.setPosition(100, 350);
			shape1.setFillColor(sf::Color(0, 0, 0));
			window.draw(shape1);
			shape1.setFillColor(sf::Color(150, 250, 0));
			shape1.setPosition(100, 50);
		}
		else
		{
			shape1.setPosition(100, 50);
			shape1.setFillColor(sf::Color(0, 0, 0));
			window.draw(shape1);
			shape1.setFillColor(sf::Color(150, 250, 0));
			shape1.setPosition(100, 350);
		}

		window.draw(shape1);
		window.display();
	}
	
	return i;
}