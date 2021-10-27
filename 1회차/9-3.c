#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// +와 -같은 문자 부호 지정 가능
	printf("%d\n", atoi("-567"));
	// 문자열 앞에 있는 공백문자 (' ', '\t', '\n' 등)은 무시
	printf("%d\n", atoi("\t12345"));
	// 문자열에서 정수 형태의 문자까지만 처리하고 그 외의 문자는 처리하지 않음
	printf("%d\n", atoi("5678Hello"));
}

