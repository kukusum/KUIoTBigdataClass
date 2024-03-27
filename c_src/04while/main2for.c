#include <stdio.h>

int main(void)
{
    int num1;
    int num2;

    printf("input num1.. ");
    scanf("%d", &num1);
    printf("input num2.. ");
    scanf("%d", &num2);
    
    if(num1 > num2){
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    int i = num1;
    int sum = 0;
    

    while (i < (num2+1))
    {
        sum = sum + i;
        printf("%d\n", i);
        i++;
    }

    printf("%d to %d is %d\n", num1, num2, sum);

    return 0;
}