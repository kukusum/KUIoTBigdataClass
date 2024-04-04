#include <iostream>

using namespace std;

// 클래스 선언...
class Circle
{
    public :
    int radius;             // 멤버변수...
    Circle();
    Circld(int r);
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
    return 3.14*radius*radius
};

int main()
{
    Circle pizza;
    pizza.radius = 30;
    area = pizza.getArea();
    count << "pizza 면적은" << area << endl;

    return 0;
}