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
    Circle circleArray[5] = {Circle(10), Circle(20), Circle(30), Circle(), Circle()};
    int circleArraySize = sizeof(circleArray);

    cout << circleArraySize << endl;

    for (int i=0; i<5; i++)
    {
        cout <<"Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
    }

    return 0;
}