#include <stdio.h>

void func(void);

static int count = 0; // 외부 정적 변수

int main(void) {
	int i;

	for (i=0; i<10; i++)
		func();
	printf("count : %d\n", count);
}
