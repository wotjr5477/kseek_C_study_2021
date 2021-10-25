#include <stdio.h>
int main(void) {
	int i;
	short j;
	long k;
	unsigned l;
	
	// sizeof()는 데이터형 또는 변수의 크기를 알아내는 연산자
	printf("int : %d %d\n", sizeof(int), sizeof(i));
	printf("short : %d %d\n", sizeof(short), sizeof(j));
	printf("long : %d %d\n", sizeof(long), sizeof(k));
	printf("unsigned : %d %d\n", sizeof(unsigned), sizeof(l));
}
