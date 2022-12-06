#pragma once

#include "RightTriangleInCircle.h"
#include "Circle.h"
#include "RightTriangle.h"

#include <math.h>
#include <iostream>
#include <fstream>

template <class T>
inline RightTriangleInCircle<T>::RightTriangleInCircle(T katet1, T katet2) :
	RightTriangle<T>(katet1, katet2),
	Circle<T>()
{
}

template<class T>
inline T RightTriangleInCircle<T>::getRadius()
{
    return RightTriangle<T>::getHypotenuse() / 2;
}

//Не можна змінювати власноруч радіус. Бо діаметр кола - гіпотенуза прямокутного трикутника, вписанного у коло. 
template<class T>
inline void RightTriangleInCircle<T>::setRadius()
{
}

template<class T>
inline void RightTriangleInCircle<T>::printProperties(const char* filename)
{
	std::ofstream fout;
	fout.open(filename, std::ofstream::app);

	if (fout.is_open())
	{

		fout << "Right triangle in a circle: {\n\t";

		fout << "Right triangle: "
			<< "{ a = " << RightTriangle<T>::getKatet1()
			<< ", b = " << RightTriangle<T>::getKatet2()
			<< ", c = " << RightTriangle<T>::getHypotenuse()
			<< ", rectangle perimeter = " << RightTriangle<T>::getRectanglePerimeter()
			<< ", area = " << RightTriangle<T>::getTriangleArea()
			<< "};\n\t";

		fout << "Circle: "
			<< "{ radius = " << Circle<T>::getRadius()
			<< ", length = " << Circle<T>::getLength()
			<< ", area = " << Circle<T>::getCircleArea()
			<< "};\n";

		fout << "}";
	}
	else
	{
		std::cout << "Error: cannot open the file";
	}
	
}