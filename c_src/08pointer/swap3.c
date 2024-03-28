#include <stdio.h>
#include <stdlib.h> // 동적 메모리 할당을 위해 필요

//Function declaration
int* swap(int *param_a, int *param_b);

int main(void)
{
    int a = 10, b = 20;
    int *pary = swap(&a, &b);
    int x = *(pary);
    int y = *(pary+1);
    printf("a : %d, b : %d\n", x, y);
    free(pary); // 동적으로 할당된 메모리 해제
    return 0;
}

// Function definition..
int* swap(int *param_a, int *param_b)
{
    int temp = *param_a;
    *param_a = *param_b;
    *param_b = temp;

    // 동적 메모리 할당을 사용하여 배열 생성
    int *ary = (int*)malloc(2 * sizeof(int));
    if (ary == NULL) {
        printf("메모리 할당 실패\n");
        exit(1);
    }

    ary[0] = *param_a;
    ary[1] = *param_b;

    return ary;
}
/*
#include <stdio.h>

//Function declaration
int* swap(int *param_a, int *param_b);

int main(void)
{
    int a = 10, b = 20;
    int *pary = swap(&a, &b);
    a = *(pary);
    b = *(pary+1);
    printf("a : %d, b : %d\n", a, b);
}

// Function definition..
int* swap(int *param_a, int *param_b)
{
    int temp = *param_a;
    *param_a = *param_b;
    *param_b = temp;

    int ary[2] = {param_a, param_b};

    return ary;
}
*/