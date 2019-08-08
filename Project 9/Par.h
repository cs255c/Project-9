/* Parallelogram class definition
 * Constructor takes two points and a length and passes them to the Trapezoid
 * constructor.
 * 4/10/2015
 * Alex Debrecht */

#ifndef PAR_H_
#define PAR_H_
#include "Trap.h"

class Par : public Trap {

	// Constructors and destructor
public:
	Par();
	Par(Point, Point, int);
	~Par();

};

#endif /* PAR_H_ */
