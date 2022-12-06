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
    std::cout << "\t\t\tShapes demo." << std::endl;
    std::cout << "All info about shapes should be written in Output.txt file." << std::endl;
    std::cout << "If there are no error messages in this console,\neverything was written in Output.txt without a problem." << std::endl;
    
    std::thread th(doWork);
    th.join();

    RightTriangleInCircle<long> obj(6, 8);
    obj.printProperties(filepath);

    std::cout << "The process of writing to the file is complete. Press any key to close this programm." << std::endl;
    system("pause");
    return 0;
}