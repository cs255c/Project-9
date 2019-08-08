/* Driver for the class hierarchy based on quadrilaterals
 * 4/10/2015
 * Alex Debrecht */

#include <iostream>
using namespace std;
#include "Square.h"

// function main begins program execution
int main() {

	// Declare variables
	bool ans = true;
	char ansChar;
	int shape, bottomLeftX, bottomLeftY, topLeftX, topLeftY, bottomRightX,
	bottomRightY, topRightX, topRightY, length, length2;

	// To ask for different shape
	while (ans) {

		Point bottomLeft, bottomRight, topLeft, topRight;
		Quad quad;
		Trap trap;
		Rect rect;
		Par par;
		Square square;

		// Ask user what shape they'd like to make
		cout << "What shape would you like to make?" << endl
				<< "Quadrilateral (Enter 1)" << endl
				<< "Trapezoid (Enter 2)" << endl
				<< "Parallelogram (Enter 3)" << endl
				<< "Rectangle (Enter 4)" << endl
				<< "Square (Enter 5)" << endl;

		cin >> shape;

		// Execute based on shape chosen
		switch (shape) {
		case 1: // Enter four points

			cout << "Enter point 1 (x then y)." << endl;
			cin >> bottomLeftX;
			cin >> bottomLeftY;
			bottomLeft = Point(bottomLeftX, bottomLeftY);

			cout << "Enter point 2 (x then y)." << endl;
			cin >> topLeftX;
			cin >> topLeftY;
			topLeft = Point(topLeftX, topLeftY);

			cout << "Enter point 3 (x then y)." << endl;
			cin >> bottomRightX;
			cin >> bottomRightY;
			bottomRight = Point(bottomRightX, bottomRightY);

			cout << "Enter point 4 (x then y)." << endl;
			cin >> topRightX;
			cin >> topRightY;
			topRight = Point(topRightX, topRightY);

			quad = Quad(bottomLeft,topLeft,bottomRight,topRight);
			quad.print();

			break;

		case 2: // Enter two points and two lengths

			cout << "Enter bottom left point (x then y)." << endl;
			cin >> bottomLeftX;
			cin >> bottomLeftY;
			bottomLeft = Point(bottomLeftX, bottomLeftY);

			cout << "Enter top left point (x then y)." << endl;
			cin >> topLeftX;
			cin >> topLeftY;
			topLeft = Point(topLeftX, topLeftY);

			cout << "Enter bottom length." << endl;
			cin >> length;

			cout << "Enter top length." << endl;
			cin >> length2;

			trap = Trap(bottomLeft, topLeft, length, length2);
			trap.print();

			break;

		case 3: // Enter two points and a length

			cout << "Enter bottom left point (x then y)." << endl;
			cin >> bottomLeftX;
			cin >> bottomLeftY;
			bottomLeft = Point(bottomLeftX, bottomLeftY);

			cout << "Enter top left point (x then y)." << endl;
			cin >> topLeftX;
			cin >> topLeftY;
			topLeft = Point(topLeftX, topLeftY);

			cout << "Enter horizontal side length." << endl;
			cin >> length;

			par = Par(bottomLeft, topLeft, length);
			par.print();

			break;

		case 4: // Enter a point and two lengths

			cout << "Enter bottom left point (x then y)." << endl;
			cin >> bottomLeftX;
			cin >> bottomLeftY;
			bottomLeft = Point(bottomLeftX, bottomLeftY);

			cout << "Enter horizontal side length." << endl;
			cin >> length;

			cout << "Enter vertical side length." << endl;
			cin >> length2;

			rect = Rect(bottomLeft, length, length2);
			rect.print();

			break;

		case 5: // Enter a point and a length

			cout << "Enter bottom left point (x then y)." << endl;
			cin >> bottomLeftX;
			cin >> bottomLeftY;
			bottomLeft = Point(bottomLeftX, bottomLeftY);

			cout << "Enter side length." << endl;
			cin >> length;

			square = Square(bottomLeft, length);
			square.print();

			break;

		default:

			break;

		}

		// Ask user if they would like to loop again
		cout << "Would you like to test more shapes?" << endl;
		cin >> ansChar;

		// Set boolean based on answer
		if (ansChar == 'n' || ansChar == 'N') ans = false;

	}

}
