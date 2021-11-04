#include <stdio.h>
#include <stdlib.h> //div, ldiv 정의 헤더
#include <math.h> // fmod 정의 헤더

int main(void)
{
	div_t result1;
	ldiv_t result2;
	
	// int형 나눗셈의 몫과 나머지를 구해 반환한 값이 result1에 저장, 
	// result1.quot에 몫, result.rem에 나머지 저장
	result1 = div(12345, 2345);
	// long형 나눗셈의 몫과 나머지, 위와 동일
	result2 = ldiv(123456789, 12345678);
	
	// result1.quot, result1.rem 각각 몫, 나머지
	printf("%d, %d\n", result1.quot, result1.rem);
	printf("%ld, %ld\n", result2.quot, result2.rem);
	// double 형 나눗셈의 나머지 구하기
	printf("%g\n", fmod(23.456, 2.345));
}
