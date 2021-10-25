#include <stdio.h>

void func(void);

int count = 0; // 외부 변수 count 선언

int main(void) {
	int i;

	for(i=0; i<10; i++)
		func();
	
	printf("count : %d\n", count); // 외부 변수 count 사용
}

void func(void) {
	count++; // 외부변수 count 사용
}
