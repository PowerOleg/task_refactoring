#include"shape.h"

Shape::Shape()
{
	type = Shapetype::SHAPE;
}

Shape::Shape(Shapetype type)
{
	this->type = type;
}

void Shape::transform::shift(int m, int n, int k)
{
	switch (getType())
	{
	case Shapetype::LINE:
		shape.x1 += m; shape.y1 += n;
		shape.x2 += m; shape.y2 += n;
		break;
	case Shapetype::SQR:
		shape.x1 += m; shape.y1 += n;
		shape.x2 += m; shape.y2 += n;
		shape.x3 += m; shape.y3 += n;
		shape.x4 += m; shape.y4 += n;
		break;
	case Shapetype::CUBE:
		shape.x1 += m; shape.y1 += n; shape.z1 += k;
		shape.x2 += m; shape.y2 += n; shape.z2 += k;
		shape.x3 += m; shape.y3 += n; shape.z3 += k;
		shape.x4 += m; shape.y4 += n; shape.z4 += k;
		shape.x5 += m; shape.y5 += n; shape.z5 += k;
		shape.x6 += m; shape.y6 += n; shape.z6 += k;
		shape.x7 += m; shape.y7 += n; shape.z7 += k;
		shape.x8 += m; shape.y8 += n; shape.z8 += k;
		break;
	}
	//return shape;
}




void Shape::transform::scaleX(int a)
{
	switch (shape.getType())
	{
	case Shapetype::LINE:
		shape.x1 *= a;
		shape.x2 *= a;
		break;
	case Shapetype::SQR:
		shape.x1 *= a;
		shape.x2 *= a;
		shape.x3 *= a;
		shape.x4 *= a;
		break;
	case Shapetype::CUBE:
		shape.x1 *= a;
		shape.x2 *= a;
		shape.x3 *= a;
		shape.x4 *= a;
		shape.x5 *= a;
		shape.x6 *= a;
		shape.x7 *= a;
		shape.x8 *= a;
		break;
	}
	//return shape;
}

void Shape::transform::scaleY(int d)
{
	switch (shape.getType())
	{
	case Shapetype::LINE:
		shape.y1 *= d;
		shape.y2 *= d;
		break;
	case Shapetype::SQR:
		shape.y1 *= d;
		shape.y2 *= d;
		shape.y3 *= d;
		shape.y4 *= d;
		break;
	case Shapetype::CUBE:
		shape.y1 *= d;
		shape.y2 *= d;
		shape.y3 *= d;
		shape.y4 *= d;
		shape.y5 *= d;
		shape.y6 *= d;
		shape.y7 *= d;
		shape.y8 *= d;
		break;
	}
	//return shape;
}

void Shape::transform::scaleZ(int e)
{
	switch (shape.getType())
	{
	case Shapetype::LINE:
		shape.z1 *= e;
		shape.z2 *= e;
		break;
	case Shapetype::SQR:
		shape.z1 *= e;
		shape.z2 *= e;
		shape.z3 *= e;
		shape.z4 *= e;
		break;
	case Shapetype::CUBE:
		shape.z1 *= e;
		shape.y2 *= e;
		shape.z3 *= e;
		shape.z4 *= e;
		shape.z5 *= e;
		shape.z6 *= e;
		shape.z7 *= e;
		shape.z8 *= e;
		break;
	}
	//return shape;
}

void Shape::transform::scale(int s)
{
	switch (shape.getType())
	{
	case Shapetype::LINE:
		shape.x1 /= s; shape.y1 /= s;
		shape.x2 /= s; shape.y2 /= s;
		break;
	case Shapetype::SQR:
		shape.x1 /= s; shape.y1 /= s;
		shape.x2 /= s; shape.y2 /= s;
		shape.x3 /= s; shape.y3 /= s;
		shape.x4 /= s; shape.y4 /= s;
		break;
	case Shapetype::CUBE:
		shape.x1 /= s; shape.y1 /= s; shape.z1 /= s;
		shape.x2 /= s; shape.y2 /= s; shape.z2 /= s;
		shape.x3 /= s; shape.y3 /= s; shape.z3 /= s;
		shape.x4 /= s; shape.y4 /= s; shape.z4 /= s;
		shape.x5 /= s; shape.y5 /= s; shape.z5 /= s;
		shape.x6 /= s; shape.y6 /= s; shape.z6 /= s;
		shape.x7 /= s; shape.y7 /= s; shape.z7 /= s;
		shape.x8 /= s; shape.y8 /= s; shape.z8 /= s;
		break;
	}

	//return shape;
}