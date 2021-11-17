#include <stdoi.h>
#include <time.h> // time

int main(void) {
	time_t time_now;
	
	// 1970년 1월 1일 00:00:00 UTC 이후 시간
	time(&time_now);
	printf("%ld\n", time_now);
}
