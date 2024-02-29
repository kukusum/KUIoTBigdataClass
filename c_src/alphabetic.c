#include <stdio.h>

int main(void)
{
	char ch;
	printf("input char : ");
	scanf("%c", &ch);	
	
	int isAlpha = (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
	
	printf("%c is alphabetic : %d\n", ch, isAlpha);
	return 0;
}
