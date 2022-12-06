#pragma once

#include <math.h>
#include <iostream>
#include <fstream>
#include "Circle.h"

//Заглушка яка потрібна для класу RightTriangleCircle, яка від цього класу наслідується
template<class T>
inline Circle<T>::Circle()
{
}

template<class T>
inline Circle<T>::Circle(T radius)
{
	setRadius(radius);
}

template<class T>
inline T Circle<T>::getRadius()
{
	return radius;
}

template<class T>
inline void Circle<T>::setRadius(T t)
{
	if (t > 0)
	{
		this->radius = t;
	}
}

template<class T>
inline T Circle<T>::getLength()
{
	return (T)(2 * 3.141 * radius);
}

template<class T>
inline T Circle<T>::getCircleArea()
{
	return (T)(3.141 * pow(radius, 2));
}

template<class T>
inline void Circle<T>::printProperties(const char* filename)
{
	std::ofstream fout;
	fout.open(filename, std::ofstream::app);

	if (fout.is_open())
	{
		fout << "Circle: "
			<< "{ radius = " << getRadius()
			<< ", length = " << getLength()
			<< ", area = " << getCircleArea()
			<< "};\n";
	}
	else
	{
		std::cout << "Error: cannot open the file";
	}
}