#include <iostream>
using namespace std;

/////////
//-------------------- 클래스 선언... --------------------
class Circle
{
    //멤버접근지정자
protected:
    //
private:
    //
public:                 // 
    int radius;             // 멤버변수...
    Circle();
    Circle(int r);

    double getArea();      // 멤버함수...
    void setRadius(int r); // 멤버함수...
};// 클래스 끝 ; 붙여주기..

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

void Circle::setRadius(int r)
{
    radius = r;
    cout << "반지름 " << radius << "원 생성" << endl;
}

int main()
{
    Circle circleArray[3];

    circleArray[0].setRadius(10);
    circleArray[1].setRadius(20);
    circleArray[2].setRadius(30);

    return 0;
}