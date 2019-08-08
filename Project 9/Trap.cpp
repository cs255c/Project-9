/* Trapezoid class implementation
 * Passes four points calculated based on trapezoid properties to quadrilateral
 * constructor.
 * 4/10/2015
 * Alex Debrecht */

#include "Trap.h"
#include <iostream>

// Default constructor
Trap::Trap() {
	length = 0;
	length2 = 0;
}

// Constructor passes bottom left and top right points, adds parallel side lengths to create new points
Trap::Trap(Point pt1, Point pt2, int len, int len2) :
		Quad(pt1,pt2,pt1.addLength(len),pt2.addLength(len2)) {
	length = len;
	length2 = len2;

}

// Default destructor
Trap::~Trap() {
}

