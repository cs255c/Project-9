/* Rectangle class implementation
 * Takes a point and two lengths and passes two points and a length to the
 * parallelogram constructor.
 * 4/10/2015
 * Alex Debrecht */

#include "Rect.h"

// Default constructor
Rect::Rect() {
	height = 0;
}

// Constructor takes a point, a length, and a height, adds the height to the
// point, and passes the two points and the remaining length to the Parallelogram class constructor
Rect::Rect(Point pt, int len, int height) : Par(pt, pt.addHeight(height), len){
	this->height = height;
}

// Default destructor
Rect::~Rect() {
}

