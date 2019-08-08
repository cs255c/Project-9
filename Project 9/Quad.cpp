/* Quadrilateral class implementation
 * Takes four points and defines the quadrilateral, and allows printing in an
 * easy-to-read format.
 * 4/10/2015
 * Alex Debrecht */

#include "Quad.h"
#include <iostream>
using namespace std;

// Default constructor sets every point to (0,0)
Quad::Quad() {
	static const Point defPt = Point();
	point1 = defPt;
	point2 = defPt;
	point3 = defPt;
	point4 = defPt;
}

// Constructor takes four points
Quad::Quad(Point pt1, Point pt2, Point pt3, Point pt4) {

	point1 = pt1;
	point2 = pt2;
	point3 = pt3;
	point4 = pt4;

}

// Default destructor
Quad::~Quad() {
}

// Prints points in convenient format
void Quad::print() {
	cout << "Bottom left: ";
	point1.print();
	cout << "Top left: ";
	point2.print();
	cout << "Bottom right: ";
	point3.print();
	cout << "Top right: ";
	point4.print();
}
