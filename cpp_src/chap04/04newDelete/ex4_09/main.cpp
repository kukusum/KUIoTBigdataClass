#include <iostream>
using namespace std;

/////////
//-------------------- 클래스 선언... --------------------
class Circle
{
    int radius;             // 멤버변수...
    //멤버접근지정자
protected:
    //
private:
    //
public:                 // 
    Circle();           // 생성자...
    Circle(int r);      // 인자값을 갖는 생성자..
    ~Circle();          // 소멸자...
    void setRadius(int r)
    {
        radius = r;// 멤버함수...
    }
    double getArea()      // 멤버함수...
    {
        return 3.14*radius*radius;
    }
};// 클래스 끝 ; 붙여주기..

Circle::Circle() 
{
    radius = 1;
    cout << "생성자 실행 radius" << radius << endl;
}
Circle::Circle (int r)
{
    radius = r;
    cout << "생성자 실행 radius" << radius << endl;
}
Circle::~Circle() 
{
    cout << "소멸자 실행 radius" << radius << endl;
}

int main()
{
//    Circle *pArray = new Circle [3];
   
//    pArray[0].setRadius(10);
//    pArray[1].setRadius(20);
//    pArray[2].setRadius(30);

    Circle *pArray = new Circle [3] {Circle(10), Circle(20), Circle(30)};       //??....

    for (int i=0; i<3; i++)
    {
        cout << pArray[i].getArea() << endl;
    }
    Circle *p = pArray;
    for (int i=0; i<3; i++)
    {
        cout << p->getArea() << endl;
        p++;
    }

    delete [] pArray;

    return 0;
}