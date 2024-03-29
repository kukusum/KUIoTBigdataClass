#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int sum;
    for ( i = 1; i <= 100; i++)
    {
        
        if ((( i % 3) == 0) || (( i % 7) == 0))
        {
            continue;
        }
        sum += i;
    }
    
    printf("%d", sum);

    return 0;
}