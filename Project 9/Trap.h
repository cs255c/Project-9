/* Trapezoid header file
 * Passes four points calculated based on trapezoid properties to quadrilateral
 * constructor.
 * 4/10/2015
 * Alex Debrecht */

#ifndef TRAP_H_
#define TRAP_H_
#include "Quad.h"

class Trap : public Quad {

	// Length variables
protected:
	int length;
	int length2;

	//Constructors and destructors
public:
	Trap();
	Trap(Point, Point, int, int);
	~Trap();
};

#endif /* TRAP_H_ */
