#include <stdio.h>
#include <string.h> //strcpy를 정의하고 있는 헤더 파일
int main(void) {
	char str[4];
	// 문자열 상수를 배열에 저장하기 위해 strcpy사용
	strcpy(str, "abc");
	printf("%s\n", str);
}
