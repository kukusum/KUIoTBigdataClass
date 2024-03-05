#include <stdio.h>

int main(void)
{
	int a; // 인트형변수 a 선언
	int *p; // 인트형변수 포인터p선언
	
	a = 100;
	p = &a;
	*p  = 200;
	
	printf("a: %d\n", a);
	
	return 0;
}
