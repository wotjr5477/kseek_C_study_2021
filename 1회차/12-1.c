#include <stdio.h>
#include <stdlib.h> // abs, labs 정의 헤더
#include <math.h> // fabs 정의 헤더

int main(void)
{
	// int형 데이터의 절대값 구하기
	printf("%d : %d\n", -345, abs(-345));
	// long 형 데이터의 절대값 구하기
	printf("%d : %ld\n", -123456789, labs(-123456789));
	// double형 데이터의 절대값 구하기
	printf("%g : %g\n", -23.456, fabs(-23.456));
}
