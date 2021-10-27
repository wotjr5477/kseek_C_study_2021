#include <stdio.h>
#define DAY 365 // 매크로 day 정의
#define TIME 24 // 매크로 time 정의
#define MINUTE 60 // minute 정의
#define SECOND 60 // second 정의

int main(void) {
	long int sec;
	//매크로를 이용해 전처리 >> 해당 문자열로 바뀜
	sec = DAY*TIME*MINUTE*SECOND;
	printf("one year is %ld second\n", sec);
}

