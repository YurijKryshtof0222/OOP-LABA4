#pragma once

#include "RightTriangleInCircle.h"
#include "Circle.h"
#include "RightTriangle.h"

#include <math.h>
#include <iostream>
#include <fstream>
#include <thread>

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

		std::thread th(&RightTriangle<T>::printProperties, filename);
		th.join();

		fout << "\t";

		std::thread th1(&Circle<T>::printProperties, filename);
		th1.join();

		fout << "}";
	}
	else
	{
		std::cout << "Error: cannot open the file";
	}
	
}