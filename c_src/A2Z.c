#include <stdio.h>

int main(void)
{
	//int code;
	//scanf("%d", &code);
	char code;
	scanf("%c", &code);
	//int isBig (code >= 65 && code <= 90);
	int isBig = (code >= 'A' && code <= 'Z');
	
	printf("%c is Big : %d\n", code, isBig);
	return 0;
}
