#include <stdio.h>

int f1(void) // ??없으면 보이드
{

	return 100;
}

void f2(int *pResult)
{
	*pResult = 100;
}	
int main(void)
{
//	int re = f1();
	int re;
	f2(&re);
	
	printf("re : %d\n", re);
	return 0;
}
