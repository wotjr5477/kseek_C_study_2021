#include <stdio.h>

int main(void) {
	int i;

	// 10진 정수형태의 문자열 "23"과 "567"을 정수로 변환 : atoi
	i = atoi("23") + atoi("567");
	printf("%d\n", i);
}
