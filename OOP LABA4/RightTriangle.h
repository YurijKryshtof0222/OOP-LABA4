#pragma once

template <class T>
class RightTriangle
{
private:
	T katet1 = 1;
	T katet2 = 1;
public:
	RightTriangle(T katet1, T katet2);
	
	T getKatet1();
	T getKatet2();
	T getHypotenuse();

	void setKatet1(T t);
	void setKatet2(T t);

	T getTriangleArea();
	T getRectanglePerimeter();

	void printProperties(const char*);
};


#include "RightTriangle.hpp"