/* Parallelogram class implementation
 * Constructor takes two points and a length and passes them to the Trapezoid
 * constructor.
 * 4/10/2015
 * Alex Debrecht */

#include "Par.h"

// Default constructor
Par::Par() {

}

// Constructor takes bottom and top left points and a length and passes them to the Trapezoid constructor
Par::Par(Point pt1, Point pt2, int len) : Trap(pt1,pt2,len,len){

}

// Default destructor
Par::~Par() {
}

