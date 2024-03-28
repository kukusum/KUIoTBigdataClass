#include <stdio.h>

int num1, num2;
    
int sum, difference, product, quotient;

int main (void)
{
    printf("?");
    scanf("%d, %d\n", &num1, &num2);
    sum = num1 + num2;
    printf("=%d\n", sum);

    printf("\n");

    return 0;
}