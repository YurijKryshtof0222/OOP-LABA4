#pragma once

#include <math.h>
#include <iostream>
#include <fstream>

template <class T>
class Circle
{
private:
	T radius = 1;
protected:
	//Заглушка яка потрібна для класу RightTriangleCircle, яка від цього класу наслідується
	Circle();
public:
	Circle(T radius);

	T getRadius();
	void setRadius(T t);

	T getLength();
	T getCircleArea();

	void printProperties(const char*);
};

#include "Circle.hpp"