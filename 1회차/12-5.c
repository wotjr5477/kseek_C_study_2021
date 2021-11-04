#include <stdio.h>
#include <stdlib.h> // srand, rand 함수 정의 헤더
#include <time.h> // time 정의 헤더

int main(void)
{
	int i;
	
	// seed에 항상 바뀌는 time을 두어 초기화
	srand((unsigned)time(NULL));
	
	for(i=0;i<10;i++) {
		// 난수를 생성하고 이를 100으로 나눈 나머지 출력
		printf("%d ", rand()%100);
	}
	printf("\n");
}
