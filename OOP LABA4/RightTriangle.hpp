#pragma once

#include <math.h>
#include <iostream>
#include <fstream>
#include "RightTriangle.h" 

template<class T>
inline RightTriangle<T>::RightTriangle(T katet1, T katet2)
{
	setKatet1(katet1);
	setKatet2(katet2);
}

template<class T>
inline T RightTriangle<T>::getKatet1()
{
	return katet1;
}

template<class T>
inline T RightTriangle<T>::getKatet2()
{
	return katet2;
}

template<class T>
inline T RightTriangle<T>::getHypotenuse()
{
	return (T)(sqrtl(katet1*katet1 + katet2*katet2));
}

template<class T>
inline void RightTriangle<T>::setKatet1(T t)
{
	if (t > 0)
	{
		this->katet1 = t;
	}
}

template<class T>
inline void RightTriangle<T>::setKatet2(T t)
{
	if (t > 0)
	{
		this->katet2 = t;
	}
}

template<class T>
inline T RightTriangle<T>::getTriangleArea()
{
	return (katet1 * katet2) / 2;
}

template<class T>
inline T RightTriangle<T>::getRectanglePerimeter()
{
	return 2*katet1 + 2*katet2;
}

template<class T>
inline void RightTriangle<T>::printProperties(const char* filename)
{
	std::ofstream fout;
	fout.open(filename, std::ofstream::app);

	if (fout.is_open())
	{
		fout << "RightTriangle: "
			<< "{ a = " << katet1
			<< ", b = " << katet2
			<< ", c = " << getHypotenuse()
			<< ", rectangle perimeter = " << getRectanglePerimeter()
			<< ", area = " << getTriangleArea()
			<< "};\n";
	}
	else
	{
		std::cout << "Error: cannot open the file";
	}

};