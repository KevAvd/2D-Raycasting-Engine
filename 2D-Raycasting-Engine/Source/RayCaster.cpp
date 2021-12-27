#include "Raycaster.h"
#define PI 3.1415926f
using namespace RCEngine;

//RCEngine Functions
void RCEngine::CastRays(float map[], float mapX, unsigned int CellSize, float startPoint, float playerViewAngle, float fov, float nbrOfRays){

}
int RCEngine::FoundMapCell(float x, float z, unsigned int CellSize) {

}

//RCEngine Classes

/// <summary>
/// Renderer's constructor
/// </summary>
/// <param name="window"></param>
/// <param name="lType"></param>
/// <param name="fishEye"></param>
Renderer::Renderer(sf::RenderWindow window, Lighting lType, bool fishEye) {
	this->window = &window;
	this->lType = lType;
	this->fishEye = fishEye;
}
/// <summary>
/// Renderer's destructor
/// </summary>
Renderer::~Renderer() {
	delete window;
}
/// <summary>
/// Draw the map
/// </summary>
/// <param name="info"> Information about casted rays </param>
void Renderer::Draw2DMap(RayInfo info[]) {

}
/// <summary>
/// Draw the player view
/// </summary>
/// <param name="info"> Information about casted rays </param>
void Renderer::Draw3DView(RayInfo info[]) {

}
/// <summary>
/// Set the lighting type
/// </summary>
/// <param name="lType"> Type of lighting </param>
void Renderer::setLightingType(Lighting lType) {
	this->lType = lType;
}
/// <summary>
/// Set the fisheye effect
/// </summary>
/// <param name="fishEye"> activate/desactivate the fisheye effect </param>
void Renderer::setFishEyeEffect(bool fishEye) {
	this->fishEye = fishEye;
}
/// <summary>
/// Set the window where the renderer is going to draw
/// </summary>
/// <param name="window"> Window to use </param>
void Renderer::setWindow(sf::RenderWindow window) {
	this->window = &window;
}
/// <summary>
/// Get the current lighting type
/// </summary>
/// <returns></returns>
Lighting Renderer::getLightingType() {
	return lType;
}
/// <summary>
/// Get the current value of fisheye effect
/// </summary>
/// <returns></returns>
bool Renderer::getFishEyeEffect() {
	return fishEye;
}

/// <summary>
/// RayInfo's Constructor
/// </summary>
/// <param name="sPoint"></param>
/// <param name="hPoint"></param>
/// <param name="angle"></param>
/// <param name="hit"></param>
RayInfo::RayInfo(sf::Vector2f sPoint, sf::Vector2f hPoint, float angle, bool hit) {
	startPoint = sPoint;
	hitPoint = hitPoint;
	this->angle = angle;
	this->hit = hit;

	//Get length
	float dx = hitPoint.x - startPoint.x;
	float dy = hitPoint.y - startPoint.y;
	length = sqrt(dx * dx + dy * dy);
}