#include <stdio.h>

int main(void)
{
    int a=5, b=5;
    int pre, post;

    pre = (++a) * 3;        // a = ( a + 1 ), pre = (a + 1) * 3;
    post = (b++) * 3;       // post = b * 3, post = (b * 3) + 1; ??

 //   ++a;        // a = a + 1;
 //   --b;        // b = b - 1;

    printf("pre : %d\n", pre);
    printf("post : %d\n", post);


    printf("%d\n", (int)10.2);
    printf("%d\n", (int)10.7);

    return 0;
}