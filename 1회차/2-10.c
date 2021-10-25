#include <stdio.h>
int main(void) {
	//sizeof는 데이터 형의 크기를 알아내는 연사자, 단위:바이트
	printf("int: %d\n", sizeof(int));
	printf("short: %d\n", sizeof(short));
	printf("long: %d\n", sizeof(long));
	printf("unsigned: %d\n", sizeof(unsigned));
}
