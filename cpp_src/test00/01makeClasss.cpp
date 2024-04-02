#include <iostream>
using namespace std;

// class 선언
class TV
{
protected:
//
private:
//
public:                 // ???
    //멤버변수
    bool tvpower;       // 초기화 false 기본값...
    int channel;        //
    int volume;         //
    TV();               // 기본생성자
    TV(int ch);         // 채널값을 갖는 생성자

    //멤버함수
    void powerOn();
    void powerOff();
    void increaseChannel();
    void decreaseChannel();
    void increaseVolume();
    void decreaseVolume();
};

// 기본생성자
TV::TV()
{
    tvpower = false;
    channel = 0;
    volume = 0;
}

// 매개변수를 갖는 생성자
TV::TV(int ch)
{
    tvpower = false;
    channel = ch;
    volume = 0;
}


// class 구현

void TV::powerOn()
{
    tvpower = true;
}
void TV::powerOff()
{
    tvpower = false;
}

void TV::increaseChannel()
{
    channel = channel+1;
}
void TV::decreaseChannel()
{
    channel = channel-1;
}

void TV::increaseVolume()
{
    volume = volume+1;
}
void TV::decreaseVolume()
{
    volume = volume-1;
}



int main(void)
{
    TV sams(100), lg(10);     //객체 생성...

    // sams.powerOn();
    // sams.increaseChannel();
    // lg.powerOn();
    // lg.increaseChannel();


    // printf("%d\n", lg.tvpower);
    // printf("%d\n", sams.tvpower);

    cout << "sams의 채널은 " << sams.channel << "입니다." << endl;
    cout << "lg의 채널은 " << lg.channel << "입니다." << endl;
    // printf("%d\n", lg.channel);
    // printf("%d\n", sams.channel);

    return 0;
}