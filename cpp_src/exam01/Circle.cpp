#include <iostream>
using namespace std;

#include "Circle.h"

Circle::Circle()
{
    radius = 1;
    cout << "반지름 " << radius;
    cout << "원 생성 " << radius;
}

Circle::Circle(int r)
{
    radius = r;
    cout << "반지름 " << radius;
    cout << "원 생성 " << radius;
}

double Circle::getArea()
{
    return 3.14*radius*radius;
}