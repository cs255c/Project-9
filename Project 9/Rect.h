/* Rectangle class definition
 * Takes a point and two lengths and passes two points and a length to the
 * parallelogram constructor.
 * 4/10/2015
 * Alex Debrecht */

#ifndef RECT_H_
#define RECT_H_
#include "Par.h"

class Rect : public Par {

	// Height for rectangle and square
protected:
	int height;

	// Constructors and destructor
public:
	Rect();
	Rect(Point,int,int);
	~Rect();

};

#endif /* RECT_H_ */
