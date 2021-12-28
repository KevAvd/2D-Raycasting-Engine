#ifndef RCE_MAP_H
#define RCE_MAP_H
#include <iostream>
namespace RCE {
	class Map {
	private:
		float width;
		float height;
		float size;
		float *values;
	public:

		//Constructor
		Map(float width, float height, float values[])
		: width(width), height(height), size(width*height), values(values) {}

		//Getters
		float getWidth();
		float getHeigth();
		float getSize();
		float* getValues();
	};
}
#endif // !RCE_MAP_H

