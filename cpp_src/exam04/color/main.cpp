#include <iostream>
using namespace std;

class Color
{
    //멤버변수
    int red, green, blue;
//멤버접근지정자
protected:

private:

public:
    // 기본생성자
    Color() 
    {
        red = green = blue = 0;
    }
    // color(인자)값을 갖는 생성자
    Color(int r, int g, int b)
    {
        red = r; green = g; blue = b;
    }
    //멤버함수
    void setColor(int r, int g, int b)
    {
        red = r; green = g; blue = b;
    }
    void show()
    {
        cout << red << ' ' << green << ' ' << blue << endl;
    }
};

int main(void)
{
    Color screenColor(255, 0, 0);
    Color *p;

    p = &screenColor;
    
    p->show();
    Color colors[3];
    p = colors;
    
    p[0].setColor (255, 0, 0);
    p[1].setColor (0, 255, 0);
    p[2].setColor (0, 0, 255);

    for (int i = 0; i < 3; i++)
    {
        p[i].show();
    }

    return 0;
}