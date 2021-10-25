#include <stdio.h>
int main(void) {
	int i;

	i = (int)10.7 + (int)30.8; // 소수점 아래는 버림
	printf("%d\n", i);
}
