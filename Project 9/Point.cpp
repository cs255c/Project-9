/* Point class for quadrilaterals of various description
 * Allows you to construct a point, get the x and y coordinates of a point, and
 * add a length (x direction) or a height (y direction) to a point.
 * 4/10/2015
 * Alex Debrecht */

#include <iostream>
#include "Point.h"
using namespace std;

// Constructor takes two integers as the x and y coordinates
Point::Point(int newX, int newY) {
	x = newX;
	y = newY;
}

// Default destructor
Point::~Point() {
}

// Get the x coordinate
int Point::xGet() {
	return x;
}

// Get the y coordinate
int Point::yGet() {
	return y;
}

// Add a value to the x coordinate, keeping the same y coordinate
Point Point::addLength(int len) {
	Point newPoint = Point();
	int ptX = x + len;
	int ptY = y;
	newPoint = Point(ptX, ptY);
	return newPoint;
}

// Add a value to the y coordinate, keeping the same x coordinate
Point Point::addHeight(int len) {
	Point newPoint = Point();
	int ptX = x;
	int ptY = y + len;
	newPoint = Point(ptX, ptY);
	return newPoint;
}

void Point::print() {
	cout << "(" << x << ", " << y << ")" << endl;
}
