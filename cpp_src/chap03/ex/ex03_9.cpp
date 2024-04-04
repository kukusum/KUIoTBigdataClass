#include <iostream>
using namespace std;

class PrivateAccessError
{
private:
    /* data */
    int a;
    void f();
public:
    int b;
    //기본생성자
    PrivateAccessError(/* args */);
    //매개변수를 갖는생성자
    PrivateAccessError(int x); 
    void g();
};

PrivateAccessError::PrivateAccessError(/* args */)
{
    a = 1;
    b = 1;
}

PrivateAccessError::PrivateAccessError(int x)
{
    a = x;
    b = x;
}
void PrivateAccessError::f()
{
    a = 5;
    b = 5;
}
void PrivateAccessError::g()
{
    a = 6;
    b = 6;
}


int main(void)
{
    PrivateAccessError objA;
    PrivateAccessError objB(100);

    
    return 0;
}