/*#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 5; ++i) {
		for (int j = 1; j <= 5; ++j) {
			if (j == i || j == (6 - i)) {
				printf("*");
			}	else {
				printf(" ");
			}
		}
	printf("\n");
	}
	
	return 0;
}
*/
#include <stdio.h>

int main(void)
{
	for (int i = 1; i <=5; ++i) {
		for (int j = 1; j <= 5; ++j) {
			if (i == j || i + j == 6) {
			printf("*");
		} else {
			printf(" ");
		}
	}
		printf("\n");
	}
	return 0;
}

//	prinf((i == j || i + j == 6) ? "*" : " ");







/*
#include <stdio.h>

int main(void)
{
	for () {
		for () {
			printf("");
	}
	printf("\n");
	}
	
	return 0;
}
*/
/*
#include <stdio.h>

int main(void) 
{
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            printf((j == i || j == (6 - i)) ? "*" : " ");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            if (j == i || j == (6 - i)) {
                printf("*");
            } else {
                printf(" ");
 		}
 		}
        printf("\n");
 		}

    return 0;
}

*/
