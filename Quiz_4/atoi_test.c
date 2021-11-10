#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char *str = "4";
	int a = atoi(str);
//	int b = atoi(*str);
	printf("str : %s >>> string\n", str);
	printf("*str : %d >>> integer\n", *str);
	printf("atoi(str) : %d >>> integer\n", a);
//	printf("atoi(*str) : %d\n", b);
	printf("+++++++++++++++++++++++++++++++++\n");
	int i = 4;
	int *ptr = &i; // i의 주소 >> ptr은 포인터형 integer
	printf("i : %d >>> integer\n", i);
	printf("*ptr : %d >>> integer\n", *ptr);
	printf("&i : %s >>> integer\n", &i);
//	printf("*i : %d >>> integer\n", *i);
}
