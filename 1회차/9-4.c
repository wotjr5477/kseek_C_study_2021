#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// 소수점 형태의 문자열 "1.23"을 double형 실수로 변환 >> atof, %g = 실수형 자동출력
	printf("%g\n", atof("1.23"));
	// 지수 형태의 문자열 "0.12E12"를 double 형 실수로 변환
	printf("%g\n", atof("0.12E12"));
	// 문자열 앞의 공백은 무시, 실수형태의 문자까지만 처리(+, -포함)
	printf("%g\n", atof("-344.198JB"));
}
