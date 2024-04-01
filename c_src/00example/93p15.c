#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[30] = {'\n'};
    char num1_str[10] = {'\n'}, num2_str[10] = {'\n'};
    
    int num1 = 0, num2 = 0;
    char oper = '\0';
    int result = 0;

    int oper_pos = 0;

    printf("? ");
    scanf("%[^\n]", str);
    //gets(str);    // 문자열 입력 (엔터가 눌려질 때까지)

    //피연산자와 연산자를 구분하기 위해 변수에 저장
    //1. 연산자의 위치를 출력...


        if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%')
        {
            printf("%d\n", 0);
            oper_pos = i;
            break;
        }
    

    for (int i = 0; i < (oper_pos-1); i++)
    {
        if(str[(oper_pos+2)+i] == ' ')
        {
            num2_str[(oper_pos+2)+i] = '\0';
            break;
        }
        num2_str[i] = str[(oper_pos+2)+i];
    }
    num2_str[oper_pos-1] = '\0';
    num2 = atoi(num2_str);

    num1_str[0] = str[0];
    num1_str[1] = '\0';
    num1 = atoi(num1_str);

    num2_str[0] = str[4];
    num2_str[1] = str[5];
    num2_str[2] = '\0';
    num2 = atoi(num2_str);

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}
















/*
{
    int num1 = 0, num2 = 0;
    char oper = '\0';
    int result = 0;
    char str[100]; // 문자열을 저장할 배열

    printf("? ");
    fgets(str, sizeof(str), stdin); // 사용자로부터 문자열 입력받음

    // 입력된 문자열에서 숫자와 연산자 추출
    sscanf(str, "%d %c %d", &num1, &oper, &num2);

    // 연산자에 따라 계산 수행
    switch (oper) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // 0으로 나누는 경우를 예외처리
            if (num2 != 0)
                result = num1 / num2;
            else
                printf("Error: Division by zero\n");
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1; // 잘못된 연산자 입력시 프로그램 종료
    }

    // 결과 출력
    printf("Result: %d\n", result);

    return 0;
}
*/