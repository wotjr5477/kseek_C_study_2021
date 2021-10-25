#include <stdio.h>
int main(void) {
	printf("%d\n", 27); //10진수 27을 10진 정수(%d)형태로 출력
	printf("%d\n", 0734); // 8진수 >> 10진 정수 출력
	printf("%d\n", 0xA1C); // 16진수 >> 10진 정수 출력
	printf("%f\n", 1.234); // 소수값을 실수(%f) 출력
	printf("%f\n", 0.5E-2); // 지수값을 실수 출력
}

