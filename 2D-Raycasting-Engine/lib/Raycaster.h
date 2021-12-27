#ifndef RAY_CASTING_ENGINE_H
#define RAY_CASTING_ENGINE_H
#include <SFML/Graphics.hpp>
namespace RCEngine {
	/// <summary>
	/// Enumerate different types of lighting
	/// </summary>
	enum Lighting {
		foggy, simple, lightsource
	};

	//functions
	void CastRays(float map[], float mapX, unsigned int CellSize, float startPoint, float playerViewAngle, float fov, float nbrOfRays);
	int FoundMapCell(float x, float z, unsigned int CellSize);

	/// <summary>
	/// Handle rendering to screen
	/// </summary>
	class Renderer {
	private:
		//Class variable
		sf::RenderWindow* window = new sf::RenderWindow;
		Lighting lType;
		bool fishEye;
	public:
		//Constructor
		Renderer(sf::RenderWindow window, Lighting lType, bool fishEye);

		//Destructor
		~Renderer();

		//Drawing functions
		void Draw2DMap(RayInfo info[]);
		void Draw3DView(RayInfo info[]);

		//Getters-Setters
		void setLightingType(Lighting lType);
		void setFishEyeEffect(bool fishEye);
		void setWindow(sf::RenderWindow window);
		Lighting getLightingType();
		bool getFishEyeEffect();
	};
	/// <summary>
	/// Contains information about a casted ray
	/// </summary>
	struct RayInfo {
	public:
		//Class variable
		sf::Vector2f startPoint;
		sf::Vector2f hitPoint;
		float length;
		float angle;
		bool hit;

		//Constructor
		RayInfo(sf::Vector2f sPoint, sf::Vector2f hPoint, float angle, bool hit);
	};
}
#endif // !RAY_CASTING_ENGINE_H<

