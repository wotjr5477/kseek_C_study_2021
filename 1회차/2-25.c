#include <stdio.h>
int add(int a, int b);
int main(void) {
	int result;
	result = add(11, 7);
	printf("11 + 7 = %d\n", result);
}

int add(int a, int b) { //함수 정의
	return a + b;
}
