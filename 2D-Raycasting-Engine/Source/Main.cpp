#include <iostream>
#include <SFML/Graphics.hpp>

int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

	while (window.isOpen())
	{
		sf::Event evnt;
		if (window.pollEvent(evnt)) {
			if (evnt.Closed) {
				window.close();
			}
		}

		window.clear(sf::Color::Black);
		window.display();
	}
	return 0;
}