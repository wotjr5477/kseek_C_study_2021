#include <stdio.h>

int main(void) {
	int i;

	// "23"과 "567"은 정수가 아닌 문자열 >> + 연산 불가
	i = "23" + "567";
	printf("%d\n", i);
}
