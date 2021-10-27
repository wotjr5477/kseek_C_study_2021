#include <stdio.h>
#include <stdlib.h> // strtod 함수 정의 헤더

int main(void) {
	char *pt;

	// 소수점 형태의 문자열 "1.23"을 double 형 실수로 변환한 값을 반환
	printf("%g\n", strtod("1.23", NULL));
	// 지수형태의 문자열 "0.12E12"를 실수로 변환한 값을 반환
	printf("%g\n", strtod("0.12E12", NULL));
	// 부호처리(+, -)가능, 실수형태 문자 "-367.177"까지만 처리하고 pt는 종료지점인 'a'
	printf("%g /", strtod("\t-367.177abc", &pt));
	printf("%s\n", pt);
}
