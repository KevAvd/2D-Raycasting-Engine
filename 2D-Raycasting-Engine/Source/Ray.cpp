#include "Ray.h"
#include <SFML/Graphics.hpp>

/***************************************
*              Getters
****************************************/

/// <summary>
/// Get the ray's start point  
/// </summary>
/// <returns> Ray's start point </returns>
sf::Vector2f RCE::Ray::getStartPoint() {
	return sPoint;
}
/// <summary>
/// Get the ray's hit point  
/// </summary>
/// <returns> Ray's hit point </returns>
sf::Vector2f RCE::Ray::getHitPoint() {
	return hPoint;
}
/// <summary>
/// Get the ray's angle
/// </summary>
/// <returns> Ray's angle </returns>
float RCE::Ray::getAngle() {
	return angle;
}
/// <summary>
/// Get the ray's length
/// </summary>
/// <returns> Ray's length </returns>
float RCE::Ray::getLength() {

}
/// <summary>
/// Determine if the ray hit a horizontal wall or not
/// </summary>
/// <returns> True for horizontal wall </returns>
bool RCE::Ray::Horizontal() {
	return horizontal;
}
/// <summary>
/// Determine if the ray has hit something
/// </summary>
/// <returns> true if hitted something </returns>
bool RCE::Ray::HasHit() {
	return HasHit;
}

/***************************************
*              Setters
****************************************/

/// <summary>
/// Set the start point
/// </summary>
/// <param name="sPoint"> Start point position vector </param>
void RCE::Ray::setStartPoint(sf::Vector2f sPoint) {
	this->sPoint = sPoint;
}
/// <summary>
/// Set the hit point
/// </summary>
/// <param name="hPoint"> Hit point position vector </param>
void RCE::Ray::setHitPoint(sf::Vector2f hPoint) {
	this->hPoint = hPoint;
}
/// <summary>
/// Set the angle
/// </summary>
/// <param name="angle"> Angle </param>
void RCE::Ray::setAngle(float angle) {
	this->angle = angle;
}
/// <summary>
/// Set the value that determine if the ray's hit was horizontal or not
/// </summary>
/// <param name="horizontal"> True for horizontal </param>
void RCE::Ray::setHorizontal(bool horizontal) {
	this->horizontal = horizontal;
}
/// <summary>
/// Set the value that determine if the ray's hit something
/// </summary>
/// <param name="hasHit"> True if hitted something </param>
void RCE::Ray::setHasHit(bool hasHit) {
	this->hasHit = hasHit;
}