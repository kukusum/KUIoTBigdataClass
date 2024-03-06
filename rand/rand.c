
int seed; //전역변수

void my_srand(int s)
{
	seed = s;
}

int my_rand(void)
{
	seed = seed * 1103515245 + 12345; // man 3 rand 에서 복사해옴

	return((unsigned)(seed/65536) % 32768); // man 3 rand 에서 복사해옴
}

//지역변수가 전역변수와 이름이같으면안된다 fuction definition?
