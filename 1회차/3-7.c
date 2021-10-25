#include <stdio.h>

int main(void) {
	unsigned int i = 20;

	printf("%u %u\n", i>>1, i<<1); // i>>1은 우측으로 1비트 시프트 : 2로 나눈 효과, i<<1은 좌측으로 1비트 시프트, 2를 곱한 효과
}
