#include <stdio.h>

int main(void)
{
    int i = 10;
    int sum = 0;

    while (i < 21)
    {
        sum = sum + i;
        printf("%d\n", i);
        i++;
    }

    printf("sum : %d\n", sum);

    return 0;
}