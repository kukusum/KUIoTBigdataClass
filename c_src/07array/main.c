#include <stdio.h>

int main (void)
{
//    int score[5];
//    float score[5];
    double score[5];
    int i;
    int total = 0;
    double avg;

    printf("score[0] adress : %p\n", score);
    printf("score[1] adress : %p\n", score+1);

    for (i = 0; i < 5; i++)
    {
//        scanf("%d", &score[i]);
    }

    for (i = 0; i < 5; i++)
    {
        total += score[i];
    }
    avg = total / 5.0;

    for (i = 0; i < 5; i++)
    {
//        printf("%5d", score[i]);
    }
    printf("\n");

    printf("avg : %.1lf/n", avg);

    printf("\n");

    return 0;
}