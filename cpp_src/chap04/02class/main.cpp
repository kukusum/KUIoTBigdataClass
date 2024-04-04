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
    Circle circleArray[3]; //(1) class..Circle object array ...생성

    // 배열의 각 원소 객체의 멤버 접근...................(2)
    circleArray[0].setRadius(10);
    circleArray[1].setRadius(20);
    circleArray[2].setRadius(30);

    for(int i = 0; i < 3; i++)
        cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;

    Circle *p;
    p = circleArray;
    
    for(int i = 0; i < 3; i++)
    {
        cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
        p++;
    }

    return 0;
}