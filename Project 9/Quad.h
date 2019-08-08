/* Quadrilateral class definition
 * Takes four points and defines the quadrilateral, and allows printing in an
 * easy-to-read format.
 * 4/10/2015
 * Alex Debrecht */

#ifndef QUAD_H_
#define QUAD_H_
#include "Point.h"

class Quad {

	// Points and the default point are private
	// Point location is defined due to constructors
protected:
	Point point1; // Bottom left point
	Point point2; // Top left point
	Point point3; // Bottom right point
	Point point4; // Top right point
	static const Point defPt;

public:
	// Constructors and destructors
	Quad();
	Quad(Point, Point, Point, Point);
	~Quad();

	// Print method
	void print(); // Prints labeled coordinates in standard (x,y) form
};

#endif /* QUAD_H_ */
