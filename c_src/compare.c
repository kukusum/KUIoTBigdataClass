#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	//int result = a > b;
	
	printf("%d > %d : %d\n", a, b, a > b);
	printf("%d < %d : %d\n", a, b, a < b);
	printf("%d >= %d : %d\n", a, b, a >= b);
	printf("%d <= %d : %d\n", a, b, a <= b);
	printf("%d == %d : %d\n", a, b, a == b);
	printf("%d != %d : %d\n", a, b, a != b);
	
	return 0;
}
