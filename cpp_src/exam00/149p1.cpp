#include <iostream>
using namespace std;

//클래스 생성? 선언? 정의?
class Tower
{
//접근제어지시자
public:
    //멤버함수...
    int Height;

//기본생성자
    Tower();
//
    Tower(int h);
//소멸자
    ~Tower();
    int getHeight();//함수구현
};

//구현
//소멸자
Tower::~Tower()
{
    cout << "a" << endl;
}
//기본생성자
Tower::Tower()
{
    Height = 1;
}
//매개변수를 갖는 생성자
Tower::Tower(int h)
{
    Height = h;
}

//함수구현
int Tower::getHeight()
{
    return Height;
}
//구현끝

//실행
int main(void)
{
    Tower myTower;
    Tower seoulTower(100);      //인자값을갖는 객채
    Tower busanTower(80);       //인자값을갖는 객채

    cout << "높이는 " << myTower.getHeight() << "미터" << endl;
    cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
    cout << "높이는 " << busanTower.getHeight() << "미터" << endl;

    return 0;
}
//종료
