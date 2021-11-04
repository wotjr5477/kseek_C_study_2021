#include <stdio.h>
#include <math.h> // ceil, floor, modf 함수 정의 헤더

int main(void)
{
	double fra, itr;
	// double 형 데이터의 소수점 이하를 올림
	printf("%g\n", ceil(123.45));
	// double 형 데이터의 소수점 이하를 버림
	printf("%g\n", floor(345.67));
	
	// double 형 데이터를 정수와 소수로 분할하여 정수는 itr / 소수는 fra에 저장
	fra = modf(123.45, &itr);
	printf("%g, %g\n", itr, fra);
}
