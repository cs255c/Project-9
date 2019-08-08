/* Point class definition file
 * Allows you to construct a point, get the x and y coordinates of a point, and
 * add a length (x direction) or a height (y direction) to a point.
 * 4/10/2015
 * Alex Debrecht */

#ifndef POINT_H_
#define POINT_H_

class Point {

	// Coordinates are private
private:
	int x;
	int y;

public:
	// Constructor and destructor
	Point(int x = 0,int y = 0); // Default point is (0,0)
	~Point();

	// Methods
	int xGet();
	int yGet();
	Point addLength(int); // Adds argument to x
	Point addHeight(int); // Adds argument to y
	void print();
};

#endif /* POINT_H_ */
