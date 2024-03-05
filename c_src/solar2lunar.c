#include <stdio.h>

int main() {
    int year, month, day;
    int lunar_year, lunar_month, lunar_day;

    // 양력 연도, 월, 일을 입력 받음
    printf("in put yyyy mm dd : ");
    scanf("%d %d %d", &year, &month, &day);

    // 음력으로 변환
    lunar_year = year; // 양력 연도와 음력 연도가 동일하다고 가정
    lunar_month = month - 1; // 간단한 예시로 1개월을 빼는 것으로 가정
    lunar_day = day; // 양력과 음력의 일은 동일하다고 가정

    // 결과 출력
    printf("Solar is : %d %d %d\n", year, month, day);
    printf("To Lunar : %d %d %d\n", lunar_year, lunar_month, lunar_day);

    return 0;
}
