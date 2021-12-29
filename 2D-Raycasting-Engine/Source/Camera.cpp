/*
* Autor : Kevin Avdylaj
* Description : this is the source code of the Camera class
*/

#include <SFML/Graphics.hpp>
#include "Camera.h"
#include "GameE.h"

/***************************************
*              Getters
****************************************/

/// <summary>
/// Get X position
/// </summary>
/// <returns> Camera's X position </returns>
float RCE::Camera::getX() {
	return x;
}
/// <summary>
/// Get Y position
/// </summary>
/// <returns> Camera's Y position </returns>
float RCE::Camera::getY() {
	return y;
}
/// <summary>
/// Get position
/// </summary>
/// <returns> Camera's position vector </returns>
sf::Vector2f RCE::Camera::getPosition() {
	return sf::Vector2f(x, y);
}
/// <summary>
/// Get view angle
/// </summary>
/// <returns> Camera's view angle </returns>
float RCE::Camera::getViewAngle() {
	return viewAngle;
}
/// <summary>
/// Get FOV
/// </summary>
/// <returns> Camera's FOV </returns>
float RCE::Camera::getFOV() {
	return fov;
}
/// <summary>
/// Get a pointer to the render window of the camera
/// </summary>
/// <returns> Camera's viewport pointer </returns>
sf::RenderWindow* RCE::Camera::getViewport() {
	return viewport;
}
/// <summary>
/// Get the current state of the camera
/// </summary>
/// <returns> Camera's state </returns>
bool RCE::Camera::getActive() {
	return active;
}

/***************************************
*              Setters
****************************************/

/// <summary>
/// Set X position
/// </summary>
/// <param name="x"> New X position </param>
void RCE::Camera::setX(float x) {
	this->x = x;
}
/// <summary>
/// Set Y position
/// </summary>
/// <param name="y"> New Y position </param>
void RCE::Camera::setY(float y) {
	this->y = y;
}
/// <summary>
/// Set position
/// </summary>
/// <param name="pos"> New position </param>
void RCE::Camera::setPosition(sf::Vector2f pos) {
	this->x = pos.x;
	this->y = pos.y;
}
/// <summary>
/// Set view angle
/// </summary>
/// <param name="angle"> New angle </param>
void RCE::Camera::setViewAngle(float angle) {
	viewAngle = RCE::Stay2PI(angle);
}
/// <summary>
/// Set FOV
/// </summary>
/// <param name="fov"> New FOV </param>
void RCE::Camera::setFOV(float fov) {
	this->fov = fov;
}
/// <summary>
/// Set the current render window
/// </summary>
/// <param name="viewport"> New render window</param>
void RCE::Camera::setViewport(sf::RenderWindow viewport) {
	this->viewport = &viewport;
}
/// <summary>
/// Toggle camera
/// </summary>
void RCE::Camera::toggleCam() {
	active = !active;
}