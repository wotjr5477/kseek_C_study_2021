#include <stdio.h>
#include <time.h> // time, local, asctime, strftime

#define SIZE 124

int main()
{
	time_t time_now;
	struct tm *tm_local;
	char buf[SIZE];
	
	time(&time_now);
	tm_local = localtime(&time_now);
//	struct tm형 시간 정보 tm_local을 문자열로 변환하여 출력
	printf("%s", asctime(tm_local));
	
//	struct tm형 시간정보 tm_local을 서식을 갖춘 시간정보로 변환, 문자열 %c는 지역 날짜와 시간
	strftime(buf, sizeof(buf), "%c", tm_local);
	printf("%s\n", buf);
}
