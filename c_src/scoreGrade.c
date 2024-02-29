#include <stdio.h>
int main(void)
{
	int score;
	printf("input score : ");
	scanf("%d", &score);
	
	if (score >= 90) {
		printf("score : %d ---A\n", score);
		//A
	} else if (score >= 80 /* && score < 90 */) {
		printf("score : %d ---B\n", score);
		//B 
	} else if (score >= 70) {	
		printf("score : %d ---C\n", score);
		//C
	} else if (score >= 60) {	
		printf("score : %d ---D\n", score);
		//D
	} else {
		printf("score : %d ---F\n", score);
	}
	
	
	return 0;
}
