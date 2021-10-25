#include <stdio.h>
int main(void) {
	int a, b, max, min;

	//두개의 정수 입력
	printf("Input integer_1 : ");
	scanf("%d", &a);
	printf("Input integer_2 : ");
	scanf("%d", &b);

	if (a>b) { // a가 b보다 크면, 즉 조건 a>b가 참이면 실행
		max = a;
		min = b;
	} else {
		max = b;
		min = a;
	}

	printf("max : %d\t min : %d\n", max, min);
}

