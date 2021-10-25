#include <stdio.h>
int main(void) {
	char ch1, ch2; // char형 변수 선언
	ch1 = 'a';
	//99 = (2진수)1100011, 'c'의 아스키 코드 값
	ch2 = 99;
	// 문자와 10진 정수 형태 출력
	printf("ch1 : %c %d\n", ch1, ch1);
	printf("ch2 : %c %d\n", ch2, ch2);
}

