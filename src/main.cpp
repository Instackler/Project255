#include <SFML/Graphics.hpp>
#include <entity.h>


int main()
{
	sf::RenderWindow window(sf::VideoMode(1280, 720), "Project255");

	// create an array of 3 vertices that define a triangle primitive
	sf::VertexArray triangle(sf::Triangles, 3);

	// define the position of the triangle's points
	triangle[0].position = sf::Vector2f(10.f, 10.f);
	triangle[1].position = sf::Vector2f(100.f, 10.f);
	triangle[2].position = sf::Vector2f(100.f, 100.f);

	// define the color of the triangle's points
	triangle[0].color = sf::Color::Yellow;
	triangle[1].color = sf::Color::Yellow;
	triangle[2].color = sf::Color::Yellow;

	sf::Transform t1 = sf::Transform::Identity;

	// a rotation transform
	sf::Transform t2;
	t2.rotate(16.f);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color(30, 30, 30, 255));
		window.draw(triangle, t2);
		window.display();
	}

	return 0;
}