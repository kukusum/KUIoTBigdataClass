#include <stdio.h>

int main(void)
{
    int start = 1, end = 10;
    int sum = 0;

    for (int i = start; i < (end+1); i++)
    {
        sum = sum + i;
        printf("%d\n", i);
    }

    printf("sum : %d\n", sum);
    printf("%d부터 %d까지의 합은 %d입니다.\n", start, end, sum);

    return 0;
}