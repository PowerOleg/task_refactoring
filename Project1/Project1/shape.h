#pragma once
#include<string>

enum class Shapetype
{
	SHAPE,
	LINE,
	SQR,
	CUBE,
	CIRCLE,
	CYLINDER
};

class Shape
{


	//transform transform;
public:
	Shape() = default;
	Shape(Shapetype type);
	Shapetype getType() { return type; }
//protected:
	Shapetype type;
	int x1 = 0, y1 = 0, z1 = 0,
		x2 = 0, y2 = 0, z2 = 0,
		x3 = 0, y3 = 0, z3 = 0,
		x4 = 0, y4 = 0, z4 = 0,
		x5 = 0, y5 = 0, z5 = 0,
		x6 = 0, y6 = 0, z6 = 0,
		x7 = 0, y7 = 0, z7 = 0,
		x8 = 0, y8 = 0, z8 = 0;
	double volume = 0;
	double square = 0;
	double height = 0;
	double radius = 0;
	
public:
	class transform
	{
		//private: 
		//Shape shape1;//циклическая ссылка
	public:
		transform();
		void shift(int m, int n, int k);
		Shape scaleX(int a, Shape sh);
		Shape scaleY(int d, Shape sh);
		Shape scaleZ(int e, Shape sh);
		Shape scale(int s, Shape sh);
	};
};