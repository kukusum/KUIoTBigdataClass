#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sum = 0; // sum 변수를 초기화

    for (int i = 1; i <= 100; i++)
    {
        if ((i % 3 == 0) || (i % 7 == 0)) // 조건 수정
        {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}
//continue...notused...??


/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sum = 0;
    int i;

    for (i = 1; i <= 100; i++)
    {
        
        if ( (( i % 3) == 0) || (( i % 7) == 0) == 0 )
        {
            continue;
        }
        sum += i;
    }
    
    printf("%d", sum);

    return 0;
}
*/