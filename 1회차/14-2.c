#include <stdio.h>
#include <time.h> // time, ctime

int main(void) {
	time_t time_now;
	
	time(&time_now);
	// time_t형 시간정보 time_now를 사용자가 알아보기 쉽게 문자열로 변환하여 출력
	printf("ctime(&time_now));
}
