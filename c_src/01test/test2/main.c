#include <stdio.h>

int main(void)
{
    int a = 256;
    float *p = &a;

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);

    return 0;
}