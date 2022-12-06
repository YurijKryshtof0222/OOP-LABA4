#include "Circle.h"
#include "RightTriangle.h"
#include "RightTriangleInCircle.h"

#include <iostream>
#include <fstream>
#include <thread>

const char* filepath = "Output.txt";

void doWork()
{
    Circle<int> circle(5);
    circle.printProperties(filepath);

    RightTriangle<double> rt(12.5, 14.3);
    rt.printProperties(filepath);
}

int main()
{
    std::thread th(doWork);
    th.join();

    RightTriangleInCircle<long> obj(6, 8);
    obj.printProperties(filepath);

    system("pause");
    return 0;
}