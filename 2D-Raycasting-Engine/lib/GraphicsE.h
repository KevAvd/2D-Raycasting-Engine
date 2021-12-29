#ifndef RCE_GRAPHICS_ENGINE_H
#define RCE_GRAPHICS_ENGINE_H
#include <SFML/Graphics.hpp>
#include "Map.h"
#include "Camera.h"
namespace RCE {
	class GraphicsE {
	private:
		enum Cardinals{North,South,East,West};
	public:
		void RenderCam(Camera* cam, Map* map);
		void CastRay();
		int FoundHitPoint(float x, float y, Map* map);
		float GetDelta(float x, float y, Cardinals card);
	};
}
#endif // !RCE_GRAPHICS_ENGINE_H
