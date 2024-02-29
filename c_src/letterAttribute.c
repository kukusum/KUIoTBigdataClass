#include <stdio.h>
#define BOLD		(0x01 << 0)	//0x01는 2진수로 바꾸면 0000 0001
#define ITALIC	(0x01 << 1)	//0x02는 2진수로 바꾸면 0000 0010
#define SHADOW	(0x01 << 2)	//0x04는 2진수로 바꾸면 0000 0100
#define UL		(0x01 << 3)	//0x08는 2진수로 바꾸면 0000 1000

int main(void)
{
	unsigned char attr;
	attr = attr ^ attr;						// 0000 0000
	attr = attr | BOLD;						// 0000 0001
	attr = attr | (ITALIC + SHADOW);		// 0000 0111
	attr = attr & ~BOLD; 					// 0000 0110
	
	//printf("attr: 0x%08d\n", (int)attr);
	printf("attr: 0x%02x\n", (int)attr);
	return 0;
}

//int a = 100;
//printf("%d", a);

//char a = 100;
//printf("%d", (int)a);
