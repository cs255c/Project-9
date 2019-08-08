/* Square class implementation
 * Takes a point and a side length, and passes them to the rectangle constructor
 * 4/10/2015
 * Alex Debrecht */

#include "Square.h"

// Default constructor
Square::Square() {

}

// Constructor takes a point and a side (don't need default, since it is at bottom of hierarchy)
Square::Square(Point pt, int side) : Rect(pt,side,side){

}

// Default destructor
Square::~Square() {
}
