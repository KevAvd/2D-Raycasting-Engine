#include "GraphicsE.h"
#include "GameE.h"
#include "Camera.h"
#include "Ray.h"
#include "Map.h"
#define PI 3.1415926f

/// <summary>
/// Limit an angle to 360 degres
/// </summary>
/// <returns> Radian between 0 and 2PI </returns>
float RCE::Stay2PI(float angle) {
	if (angle > 2 * PI) { angle -= (2 * PI); }
	else if (angle < 0) { angle += (2 * PI); }
	return angle;
}

/// <summary>
/// Render the camera view to screen
/// </summary>
/// <param name="cam"> Camera to render </param>
void RCE::GraphicsE::RenderCam(RCE::Camera* cam, RCE::Map* map) {
	float sx = cam->getX();
	float sy = cam->getY();
	float angle = cam->getViewAngle();
	//float nbrOfRays = cam->getViewport()->getSize().x;
	float nbrOfRays = 1;
	//float angleInc = (cam->getFOV()*PI/180) / nbrOfRays;
	//angle = RCE::Stay2PI(angle - ((cam->getFOV() * PI / 180) / 2));

	//Draw Map
	float cellSize = 10;
	sf::RectangleShape cell;
	cell.setFillColor(sf::Color::Magenta);
	cell.setSize(sf::Vector2f(10, 10));
	cell.setPosition(sf::Vector2f(0, -10));

	for (int i = 0; i < 100; i++) {
		if (i % 10 == 0) {
			cell.setPosition(sf::Vector2f(0, cell.getPosition().y + cellSize));
			cell.setFillColor(sf::Color(i + 50, 0, 0));
		}
		cam->getViewport()->draw(cell);
		cell.setPosition(sf::Vector2f(cell.getPosition().x + cellSize, cell.getPosition().y));
	}

	for (int i = 0; i < nbrOfRays; i++) {

		/*************************
		*       Horizontal       *
		**************************/

		//Found the first intersection of the ray
		float dy;
		if (angle < PI) {
			dy = GetDelta(sx, sy, RCE::GraphicsE::Cardinals::South);
		}
		else {
			dy = GetDelta(sx, sy, RCE::GraphicsE::Cardinals::North);
		}
		float dx = abs(dy) / tan(angle);
		
		//Keep casting rays until it hit a wall
		if (map->getValues()[FoundHitPoint(sx + dx, sy + dy, map)] == 0) {
			float nx = sx + dx;
			float ny = sy + dy;
			if (angle < PI) { dy = -1; }
			else { dy = 1; }
			dx = abs(dy) / tan(angle);
			while (map->getValues()[FoundHitPoint(nx + dx, ny + dy, map)] == 0)
			{
				dx += dx;
				dy += dy;
			}
		}

		sf::Vertex line[2];
		line[0].color = sf::Color::Green;
		line[1].color = sf::Color::Green;
		line[0].position = sf::Vector2f(sx, sy);
		line[1].position = sf::Vector2f(sx + dx, sy + dy);
		cam->getViewport()->draw(line, 2, sf::PrimitiveType::Lines, sf::RenderStates::Default);
		//Get ray length
		float Hlength(sqrt(dx * dx + dy * dy));
	}
}

int RCE::GraphicsE::FoundHitPoint(float x, float y, Map* map) {
	float index = floor(y / 1) * map->getWidth() + floor(x / 1);
	if (index >= map->getSize() || index < 0) {
		index = map->getSize() - 1;
	}
	return index;
}

float RCE::GraphicsE::GetDelta(float x, float y, RCE::GraphicsE::Cardinals card) {
	switch (card)
	{
		case Cardinals::North:
			return floor(y / 1) - y;
		case Cardinals::South:
			return floor(y / 1) + 1 - y;
		case Cardinals::East:
			return floor(x / 1) + 1 - x;
		case Cardinals::West:
			return floor(x / 1) - x;
	}
}