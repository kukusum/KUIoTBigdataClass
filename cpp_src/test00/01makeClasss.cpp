#include <iostream>
using namespace std;

// class 선언
class TV
{
public:                 // ???
    //멤버변수
    bool tvpower;       // 초기화 false 기본값...
    int channel;        //
    int volume;         //
    //멤버함수
    void powerOn();
    void powerOff();
    void increaseChannel();
    void decreaseChannel();
    void increaseVolume();
    void decreaseVolume();
};

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
    TV samsung, LG;     //객체 생성...

    LG.powerOn();
    LG.increaseChannel();
    
    printf("%d\n", LG.tvpower);
    printf("%d\n", LG.channel);

    return 0;
}