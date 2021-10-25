#include <stdio.h>
int main(void) {
	int i = 10000; // int i와 i = 10000가 한 문장 >> 변수 선언과 동시에 초기화
	long int j = 100000;
	unsigned int k = 50000;
	printf("i : %d\n", i);
	printf("j : %ld\n", j);
	printf("k : %u\n", k);
}

