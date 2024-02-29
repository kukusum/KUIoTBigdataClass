#include <stdio.h>
int main(void)
{
	int score;
	printf("input score : ");
	scanf("%d", &score);
	
	char grade;
	
//	if (score >= 90) {
//		printf("score : %d ---A\n", score);
//		//A
//	} else if (score >= 80 /* && score < 90 */) {
//		printf("score : %d ---B\n", score);
//		//B 
//	} else if (score >= 70) {	
//		printf("score : %d ---C\n", score);
//		//C
//	} else if (score >= 60) {	
//		printf("score : %d ---D\n", score);
//		//D
//	} else {
//		printf("score : %d ---F\n", score);
//	}
	
	switch (score / 10) {
	case 10:
//		printf("score : %d -- grade : A\n", score);
//		grade = 'A';
		break;
		//A
	case 9:
//		printf("score : %d -- grade : A\n", score);
		grade = 'A';
		break;
		//A
	case 8:
//		printf("score : %d -- grade : B\n", score);
		grade = 'B';
		break;
		//B
	case 7:
//		printf("score : %d -- grade : C\n", score);
		grade = 'C';
		break;
		//C
	case 6:
//		printf("score : %d -- grade : D\n", score);
		grade = 'D';
		break;
		//D
	default: //5, 4, 3, 2, 1, 0
//		printf("score : %d -- grade : F\n", score);
		grade = 'F';
//		break;
		//F
/*		
	case 5:
		//F
	case 4:
		//F
	case 3:
		//F
	case 2:
		//F
	case 1:
		//F
	case 0:
		//F
*/	
/*
	case 100:
		//A
	case 99:
		//A
	case 98:
		//A
	case 97:
		//A
	...
	case 1:
		//F
	case 0:
		//F
*/	
	
	}
	
	printf("score : %d --- grade : %c\n", score, grade);
	return 0;
}
