#include <stdio.h>
int row = 5;

void star_display(int R, int C);     // 반환

int main(void)
{
    int row = 3, col = 5;

    star_display(row, col);

    return 0;
}

// 함수 정의
void star_display(int R, int C)
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}