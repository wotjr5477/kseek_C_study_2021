#include <stdio.h>
#include <math.h>
#include <errno.h>
#include <stdlib.h>

int main()
{
	double y;
	
	errno = 0;
	y = sqrt(-1); // sqrt 함수의 인수로 음수가 올 수 없음 >> 호출 오류
	
	if(errno != 0) { // errno != 0 >> 오류가 발생했음
		printf("errno = %d\n", errno);
		exit(1);
	}
	exit(0);
}
