#include <stdio.h>

int main(void)
{
    int seats = 70;
    int audience = 65;

    double seats_double = seats;
    double audience_double = audience;

    double seats_double = seats;
    double audience_double = audience;

    double rate = (audience / seats) * 100.0;

    printf("입장률 : %.1lf\n", rate);

    return 0;
}





/*#include <stdio.h>

int main(void)
{
    int seats = 70;
    int audience = 65;

    int rate;

    double seats_double = seats;
    double audience_double = audience;

    printf("입장률 : %lf\n", rate);

    return 0;
}*/