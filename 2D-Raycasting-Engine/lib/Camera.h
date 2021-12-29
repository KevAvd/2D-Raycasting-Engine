#ifndef RCE_CAMERA_H
#define RCE_CAMERA_H
#include <SFML/Graphics.hpp>
namespace RCE {
	class Camera {
	private:
		float x;
		float y;
		float viewAngle;
		float fov;
		sf::RenderWindow* viewport;
		bool active;
	public:

		//Constructors
		Camera() :x(NULL), y(NULL), viewAngle(NULL), fov(NULL), viewport(nullptr), active(NULL) {}
		Camera(float x, float y, float viewAngle, float fov, sf::RenderWindow &viewport, bool active)
		: x(x), y(y), viewAngle(viewAngle), fov(fov), viewport(&viewport), active(active) {}

		//Getters
		float getX();
		float getY();
		sf::Vector2f getPosition();
		float getViewAngle();
		float getFOV();
		sf::RenderWindow* getViewport();
		bool getActive();

		//Setters
		void setX(float x);
		void setY(float y);
		void setPosition(sf::Vector2f pos);
		void setViewAngle(float angle);
		void setFOV(float fov);
		void setViewport(sf::RenderWindow viewport);
		void toggleCam();
	};
}
#endif // !RCE_CAMERA_H
