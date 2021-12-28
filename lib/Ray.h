#ifndef RCE_RAY_H
#define RCE_RAY_H
#include <SFML/Graphics.hpp>
namespace RCE {
	class Ray {
	private:
		sf::Vector2f sPoint;
		sf::Vector2f hPoint;
		float angle;
		bool horizontal;
		bool hasHit;
	public:

		//Constructor
		Ray() : sPoint(sf::Vector2f(0, 0)), hPoint(sf::Vector2f(0, 0)), angle(0), horizontal(false), hasHit(false) {}
		Ray(sf::Vector2f sPoint, sf::Vector2f hPoint, float angle, bool horizontal, bool hasHit)
		: sPoint(sPoint), hPoint(hPoint), angle(angle), horizontal(horizontal), hasHit(hasHit) {}

		//Getters
		sf::Vector2f getStartPoint();
		sf::Vector2f getHitPoint();
		float getAngle();
		float getLength();
		bool Horizontal();
		bool HasHit();

		//Setters
		void setStartPoint(sf::Vector2f sPoint);
		void setHitPoint(sf::Vector2f hPoint);
		void setAngle(float angle);
		void setHorizontal(bool horizontal);
		void setHasHit(bool hasHit);
	};
}
#endif // !RCE_RAY_H
