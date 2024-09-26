#define _USE_MATH_DEFINES
#include "Cylinder.h"
#include<cmath>

Cylinder::Cylinder(int _x1, int _y1, double R, double H)
{
	Shape(Shapetype::CYLINDER);
	x1 = _x1; y1 = _y1;
	radius = R;
	height = H;

	square = M_PI * R * R + 2 * R * height;
	volume = M_PI * R * R * height;
}