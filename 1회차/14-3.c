#include <stdio.h>
#include <time.h> // time, localtime

int main()
{
	time_t time_now;
	struct tm *tm;
	// 1970년 1월 1일 이후 시간을 어쩌구 저쩌구
	time(&time_now);
	// time_t 형 시간 정보 time_now를 struct tm형 지역 시간 정보로 변환해서 tm에 저장
	tm = localtime(&time_now);
	printf("%02d/%02d/%4d ", tm -> tm_mon+1, tm -> tm_mday, tm -> tm_year + 1900);
	printf("%02d:%02d:%02d\n", tm -> tm_hour, tm -> tm_min, tm -> tm_sec);
}
