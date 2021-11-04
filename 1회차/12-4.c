#include <stdio.h>
#include <stdlib.h> // srand, rand 함수 정의 헤더

int main(void)
{
	int i;
	
	// 10으로 초기화
	srand(10);
	
	for(i=0;i<10;i++) {
		// 난수를 생성하고 이를 100으로 나눈 나머지를 출력
		printf("%d ", rand()%100);
	}
	printf("\n");
}
