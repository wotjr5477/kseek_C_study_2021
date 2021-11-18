#include <stdio.h>
#include <time.h> // time, difftime
#include <unistd.h> // sleep

int main() {
	time_t old, new;
	// 초 단위 현재 시간 얻기
	time(&old);
	// 5초 동안 정지
	sleep(5);
	time(&new);
	// new시간과 old시간의 초단위 시간차 구하기
	printf("%g\n", difftime(new, old));
}

