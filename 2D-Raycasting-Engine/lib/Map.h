#ifndef RCE_MAP_H
#define RCE_MAP_H
#include <iostream>
namespace RCE {
	class Map {
	private:
		float width;
		float height;
		float size;
		int *values;
	public:

		//Constructor
		Map() : width(NULL), height(NULL), size(NULL), values(nullptr) {}
		Map(float width, float height, int values[])
		: width(width), height(height), size(width*height), values(values) {}

		//Getters
		float getWidth();
		float getHeigth();
		float getSize();
		int* getValues();
	};
}
#endif // !RCE_MAP_H

