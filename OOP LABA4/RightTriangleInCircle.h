#pragma once
#include "RightTriangle.h"
#include "Circle.h"

template <class T>
class RightTriangleInCircle :
    public RightTriangle<T>,
    public Circle<T>
{
public:
    RightTriangleInCircle(T katet1, T katet2);
    T getRadius();
    void setRadius();
    void printProperties(const char*);
};

#include "RightTriangleInCircle.hpp"