#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int lotto[7];
	
	srand(time(NULL));
	for (int i = 0; i < 7; ++i) {
		lotto[i] = rand() % 45 +1;
		
		int j;
		for (int j = 0; j < i; ++j) {
			if (lotto[i] == lotto[j]) {
				break;
			}
		}
		if (j == i) {
			
		} else {
		
		}
	}
	
	for (int i = 0; i < 7; ++i) {
		printf("%2d ", lotto[i]);
	}
	printf("\n");
	
	return 0;
}



/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOTTO_NUMBERS 6

int main(void) {
    int num[LOTTO_NUMBERS]; // 로또 번호 생성 배열
    int b_num; // 보너스 번호

    srand(time(NULL)); // 난수 발생기 초기화

    // 로또 번호 생성
    for (int i = 0; i < LOTTO_NUMBERS; ++i) {
        do {
            num[i] = rand() % 45 + 1; // 1부터 45 사이의 숫자 생성
        } while (num[i] == num[0] || num[i] == num[1] || num[i] == num[2] || num[i] == num[3] || num[i] == num[4] || (i > 0 && num[i] == b_num)); // 중복 확인
    }

    // 보너스 번호 생성
    do {
        b_num = rand() % 45 + 1; // 1부터 45 사이의 숫자 생성
    } while (b_num == num[0] || b_num == num[1] || b_num == num[2] || b_num == num[3] || b_num == num[4]); // 중복 확인

    // 추첨 결과 출력
    printf("로또 번호: ");
    for (int i = 0; i < LOTTO_NUMBERS; ++i) {
        printf("%d ", num[i]);
    }
    printf("\n보너스 번호: %d\n", b_num);

    return 0;
}*/
