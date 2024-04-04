#include <iostream>
using namespace std;

/////////
// 클래스 선언...
class Circle
{
    public :
    int radius;             // 멤버변수...
    Circle();
    Circle(int r);
    double getArea();      // 멤버함수...
};

Circle::Circle() : Circle(1) 
{
    // 
}

Circle::Circle (int r)
{
    radius = r;
    cout << "반지름 " << radius << "원 생성" << endl;
}

// 클래스 구현...
double Circle::getArea(void)
{
    // to do...
    return 3.14*radius*radius;
}

int main()
{
    Circle donut;
    Circle pizza(30);

    cout << dount.getArea() << endl;

    Circle *p;
    p = &donut;

    cout << p->getAreagetArea() << endl;    // 포인터로접근
    cout << (*p).getArea() << endl;         // 값으로접근
    //cout << *p->getArea() << endl;          //

    p = &pizza;

    cout << p->getArea() << endl;
    cout << (*p).getArea() << endl;

    return 0;
}