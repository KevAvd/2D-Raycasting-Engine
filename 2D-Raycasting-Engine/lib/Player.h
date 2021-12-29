#ifndef RCE_PLAYER_H
#define RCE_PLAYER_H
#include <SFML/Graphics.hpp>
namespace RCE {
	/// <summary>
	/// Handle player
	/// </summary>
	class Player {
	private:
		//Class member
		float x;
		float y;
		float speed;
		float viewAngle;
		sf::Color color;
	public:
		//Constructors
		Player() : x(0),y(0), speed(0), viewAngle(0), color(sf::Color::Red) {}
		Player(float x, float y, float viewAngle, float speed, sf::Color color)
		: x(x), y(y), speed(speed), viewAngle(viewAngle), color(color) {}

		//Getters
		float getX();
		float getY();
		sf::Vector2f getPosition();
		float getSpeed();
		float getViewAngle();

		//Setters
		void setX(float x);
		void setY(float y);
		void setPosition(float x, float y);
		void setPosition(sf::Vector2f pos);
		void setSpeed(float speed);
		void setViewAngle(float angle);

		//Move functions
		void MoveForward(float dT);
		void MoveBackward(float dT);
		void Moveleft(float dT);
		void MoveRight(float dT);
	};
}
#endif // !RCE_PLAYER_H

