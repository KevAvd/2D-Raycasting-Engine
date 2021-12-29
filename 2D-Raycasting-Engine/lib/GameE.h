#ifndef RCE_GAMEE_H
#define RCE_GAMEE_H
#include "Player.h"
#include "Map.h"
#include "Camera.h"
#include "PhysicsE.h"
#include "GraphicsE.h"
#include "DeltaTime.h"
namespace RCE {

	/// <summary>
	/// Limit an angle to 360 degres
	/// </summary>
	/// <returns> Radian between 0 and 2PI </returns>
	float Stay2PI(float angle);

	class GameE {
	private:
		Player player;
		Map map;
		Camera camera;
		PhysicsE phyEngine;
		GraphicsE graEngine;
		DeltaTime deltaTime;
	public:
		//Constructor
		GameE() : player(), map(), camera(), phyEngine(), graEngine(), deltaTime() {}

		//Launch game loop
		void Run();
		//Stop game loop
		void Stop();
		//End game loop
		void End();
	};
}
#endif // !RCE_GAMEE_H

