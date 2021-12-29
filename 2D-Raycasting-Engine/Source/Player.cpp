#include "Player.h"
#include <SFML/Graphics.hpp>
#define PI 3.1415926f

/***************************************
*              Getters
****************************************/

/// <summary>
/// Get player's X position
/// </summary>
/// <returns> player's X position</returns>
float RCE::Player::getX() {
	return x;
}
/// <summary>
/// Get player's Y position
/// </summary>
/// <returns> Player's Y position </returns>
float RCE::Player::getY() {
	return y;
}
/// <summary>
/// Get player's position
/// </summary>
/// <returns> Player's position </returns>
sf::Vector2f RCE::Player::getPosition() {
	return sf::Vector2f(x, y);
}
/// <summary>
/// Get player's speed
/// </summary>
/// <returns> Player's speed </returns>
float RCE::Player::getSpeed() {
	return speed;
}
/// <summary>
/// Get player's view angle
/// </summary>
/// <returns> Player's view angle </returns>
float RCE::Player::getViewAngle() {
	return viewAngle;
}

/***************************************
*              Setters
****************************************/

/// <summary>
/// Set player's X Position
/// </summary>
/// <param name="x"> X position </param>
void RCE::Player::setX(float x) {
	this->x = x;
}
/// <summary>
/// Set player's Y Position
/// </summary>
/// <param name="y"> Y position </param>
void RCE::Player::setY(float y) {
	this->y = y;
}
/// <summary>
/// Set player's position
/// </summary>
/// <param name="x"> X position </param>
/// <param name="y"> Y position </param>
void RCE::Player::setPosition(float x, float y) {
	this->x = x;
	this->y = y;
}
/// <summary>
/// Set player's position
/// </summary>
/// <param name="pos"> Position vector </param>
void RCE::Player::setPosition(sf::Vector2f pos) {
	this->x = pos.x;
	this->y = pos.y;
}
/// <summary>
/// Set player's speed
/// </summary>
/// <param name="speed"> Speed </param>
void RCE::Player::setSpeed(float speed) {
	this->speed = speed;
}
/// <summary>
/// Set player's view angle
/// </summary>
/// <param name="angle"> view angle </param>
void RCE::Player::setViewAngle(float angle) {
	this->viewAngle = angle;
}

/***************************************
*           Move functions
****************************************/

/// <summary>
/// Move the player forwards according to his actual speed
/// </summary>
/// <param name="dT"> Elapsed time since last frame </param>
void RCE::Player::MoveForward(float dT) {
	float dx = cos(viewAngle) * speed;
	float dy = sin(viewAngle) * speed;
	x += dx * dT;
	y += dy * dT;
}
/// <summary>
/// Move the player backwards according to his actual speed
/// </summary>
/// <param name="dT"> Elapsed time since last frame </param>
void RCE::Player::MoveBackward(float dT) {
	float dx = cos(viewAngle + PI) * speed;
	float dy = sin(viewAngle + PI) * speed;
	x += dx * dT;
	y += dy * dT;
}
/// <summary>
/// Move the player at his left according to his actual speed
/// </summary>
/// <param name="dT"> Elapsed time since last frame </param>
void RCE::Player::Moveleft(float dT) {
	float dx = cos(viewAngle + PI / 2) * speed;
	float dy = sin(viewAngle + PI / 2) * speed;
	x += dx * dT;
	y += dy * dT;
}
/// <summary>
/// Move the player at his right according to his actual speed
/// </summary>
/// <param name="dT"> Elapsed time since last frame </param>
void RCE::Player::MoveRight(float dT) {
	float dx = cos(viewAngle + 3 * PI / 2) * speed;
	float dy = sin(viewAngle + 3 * PI / 2) * speed;
	x += dx * dT;
	y += dy * dT;
}