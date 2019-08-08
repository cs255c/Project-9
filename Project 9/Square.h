/* Square class definition
 * Takes a point and a side length, and passes them to the rectangle constructor
 * 4/10/2015
 * Alex Debrecht */

#ifndef SQUARE_H_
#define SQUARE_H_
#include "Rect.h"

class Square : public Rect {

	// Constructors and destructors
public:
	Square();
	Square(Point,int);
	~Square();

};

#endif /* SQUARE_H_ */
