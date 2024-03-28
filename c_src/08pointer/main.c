#include <stdio.h>

int main(void)
{
    int a;
//    int *pa;
    char *pa;

    pa = &a;
    *pa = 10;

    printf("포인터로 a값 출럭 : %d, 포인터의 주소, %p\n", *pa, pa);
    printf("포인터로 a값 출럭 : %d, 포인터의 주소, %p\n", *(pa+1), pa);
    printf("포인터로 a값 출럭 : %d, 포인터의 주소, %p\n", *pa+1, pa);
    printf("변수명으로 a 값출력 : %d\n", a);


    printf("포인터로 a값 출력 : %d\n", *pa);
    printf("변수명으로 a값 출력 : %d\n", a);
    printf("sizeof(*pa) : %ld\n", sizeof(*pa));
    printf("sizeof(pa) : %ld\n", sizeof(pa));

    return 0;
}