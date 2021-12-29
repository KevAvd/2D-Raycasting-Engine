#include <iostream>
#include <SFML/Graphics.hpp>
#include "Camera.h"
#include "Map.h"
#include "GraphicsE.h"
#include "DeltaTime.h"
int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
	RCE::GraphicsE graEngine;
	RCE::Camera cam(1.5f,1.5f, 1, 60, window, true);
	int values[] = {
		1,1,1,1,1,1,1,1,1,1,
		1,0,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,1,
		1,0,0,0,0,0,0,0,0,1,
		1,1,1,1,1,1,1,1,1,1
	};
	RCE::Map map(10, 10, values);
	RCE::DeltaTime time;
	while (window.isOpen())
	{
		time.calcElapsedSeconds();
		time.setInitTime();

		sf::Event evnt;
		if (window.pollEvent(evnt)) {
			if (evnt.Closed) {
				window.close();
			}
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {
			cam.setY(cam.getY() + 10 * time.getDeltaTime());
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {
			cam.setX(cam.getX() + -10 * time.getDeltaTime());
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
			cam.setY(cam.getY() + -10 * time.getDeltaTime());
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
			cam.setX(cam.getX() + 10 * time.getDeltaTime());
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Q)) {
			cam.setViewAngle(cam.getViewAngle() + 2*3.14f * time.getDeltaTime());
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::E)) {
			cam.setViewAngle(cam.getViewAngle() + -2*3.14f * time.getDeltaTime());
		}
		std::cout << "Cam angle: " << cam.getViewAngle() << "\n";
		window.clear(sf::Color::Black);
		graEngine.RenderCam(&cam, &map);
		window.display();
	}
	return 0;
}