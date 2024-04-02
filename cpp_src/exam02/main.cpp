#include <iostream>
using namespace std;

class Adder
{
    int op1, op2;
public:
    Adder(int a, int b);
    int process();
};

Adder::Adder(int a, int b)
{
    op1 = a; op2 = b;
}

int Adder::process()
{
    return op1 + op2;
}

class Calculator
{
public:
    void run();
};

void Calculator::run()
{
    cout << "두 개의 수를 입력하세요>>";
    int a, b;
    cin >> a >> b;
    Adder adder(a, b);
    cout << adder.process();
}

int main(void)
{
    Calculator calc;
    calc.run();

    return 0;
}

/*
#include <iostream>
using namespace std;


//클래스 생성? 선언? 정의?
class Tower
{
public:
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
*/