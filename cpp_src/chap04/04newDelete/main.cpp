#include <iostream>
using namespace std;
/*
int *pInt = new int;
char *pChar = new char;
Circle *pCircle = new Circle();

delete pInt;
delete pChar;
delete pCircle;
*/
int main(void)
{
    int *p;

    p = new int;
    if(!p)
    {
        cout << "메모리를 할당할 수 없습니다." << endl;

        return 1;
    }
    *p = 5;
    int n = *p;
    cout << "*p = " << *p << endl;
    cout << "n = " << n << endl;

    return 0;
}