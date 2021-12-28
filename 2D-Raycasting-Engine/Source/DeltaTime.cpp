#include <chrono>
#include "DeltaTime.h"

/// <summary>
/// Constructor of the classe "DeltaTime"
/// </summary>
RCE::DeltaTime::DeltaTime() {
	setInitTime();
}
/// <summary>
/// Initialize start time
/// </summary>
void RCE::DeltaTime::setInitTime() {
	initTime = std::chrono::high_resolution_clock::now();
}
/// <summary>
/// Calculate the elapsed time between start time and now
/// </summary>
void RCE::DeltaTime::calcElapsedSeconds() {
	totalElapsedSeconds = (float(std::chrono::duration_cast<std::chrono::nanoseconds> (std::chrono::high_resolution_clock::now() - initTime).count())) / 1e9;
}
/// <summary>
/// Get the delta time
/// </summary>
/// <returns> delta time </returns>
float RCE::DeltaTime::getDeltaTime() {
	return totalElapsedSeconds;
}