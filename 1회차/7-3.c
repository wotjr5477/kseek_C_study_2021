#include <stdio.h>
#define SIZE 1000 // 매크로 size 정의

int main(void) {
	int num;
	num = SIZE;
	printf("%d\n", num);

#undef SIZE // 매크로 size 해제
#define SIZE 5000

	num = SIZE;
	printf("%d\n", num);
}
