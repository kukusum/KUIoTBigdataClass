#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int question[3];
	
	srand(time(NULL));
	
	question[0] = rand() % 9 + 1;
	question[1] = rand() % 9 + 1;

	do {
		question[2] = rand() % 9 + 1;
	} while (question[0] == question[2] || question[1] == question[2]);
	
	int strike = 0;
	int ball = 0;
	int count = 0;
	
	while (strike !=3) {
		strike = ball = 0;
		++count;
		
		int answer[3];
		printf("input answer : ");
		scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);
		
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				if (question[i] == answer[j]) {
					if (i == j) {
						++strike;
					} else {
						++ball;
					}
				}
			}
		}

		printf("#strike : %d\t #ball : %d\n", strike, ball);
		
		if (strike == 3) {
			break;
		}
		
	}
	
	
	printf("question : %d %d %d\n", question[0], question[1], question[2]);
		
	return 0;
}

//	question[0] = rand() % 9 + 1;
//	question[1] = rand() % 9 + 1;
	
/*	question[0] = rand() % 9 + 1;
	do {
		question[0] = rand() % 9 + 1;
	} while (question[0] == question[1]); {
	do {
		question[1] = rand() % 9 + 1;
	} while (question[0] == question[1]);
	do {
		question[1] = rand() % 9 + 1;
	} while {
	(question[0] == question[1] || question[1] == question[2]);
	}*/
	
/*	question[2] = rand() % 9 + 1;
	while (question[0] == question[2] || question[1] == question[2]) {
		question[2] = rand() % 9 + 1;
	}*/
	
//	int answer[3];


/*	for (int i = 0; i < 3; i++) {
		if (answer[i] == question[i]) {
			strike++;
	} else {
		for (int j = 0; j < 3; j++) {
			if (answer[i] == question[j]) {
				ball++;
					break;
            }
        }
    }
}*/



/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
//	int question[3];
	int question[3];
	int is_duplicate;

	srand(time(NULL));
	
	for (int i = 0; i < 3; i++) {
		question[i] = rand() % 9 + 1; // 1부터 9까지의 난수 생성
			for (int j = 0; j < i; j++) { // 배열의 이전 요소들과 비교하여 중복 확인
				while (question[i] == question[j]) {
                question[i] = rand() % 9 + 1;
            }
        }
    }
	//question[i] <--- unique! [1, 9] random num.
	
	int answer[3];
	
	int strike;
	int ball;
	
	int count;

	while (strike != 3) {
		//
		
		//
		if (strike == 3) {
			break;
		}
	}
	
	// printf #count
	return 0;
}*/
