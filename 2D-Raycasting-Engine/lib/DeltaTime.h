#ifndef RCE_DELTATIME_H
#define RCE_DELTATIME_H
#include <chrono>
namespace RCE {
	class DeltaTime {
	private:
		float totalElapsedSeconds;
		std::chrono::steady_clock::time_point initTime = std::chrono::high_resolution_clock::now();
	public:
		DeltaTime();
		void setInitTime();
		void calcElapsedSeconds();
		float getDeltaTime();
	};
}
#endif // !RCE_DELTATIME_H

