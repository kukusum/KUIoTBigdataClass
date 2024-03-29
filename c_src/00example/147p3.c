#include <stdio.h>

int main(void)
{
    double temp1;

    int hour, min, sec;
    double time = 3.76;

    hour = (int)time;
    temp1 = time - hour;
//    printf("%d\n", hour);

    temp1 = 60 * temp1;
//    printf("%lf\n", temp1);

    min = (int)temp1;
//    printf("%d\n", min);
    
    temp1 = temp1 - min;
    sec = 60 * temp1;
//    printf("%d\n", sec);
    printf("%.2lf시간은 %d시간 %d분 %d초 입니다.\n", time, hour, min, sec);

    return 0;
}