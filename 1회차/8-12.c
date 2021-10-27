#include <stdio.h>
#include <string.h> // strstr함수가 정의도니 헤더

int main(void) {
	char *str = "Hello Linux Programing, JB";
	char *ptr;

	// 문자열 str에서 문자열 "Linux"가 처음으로 발견된 위치를 검색, 포인터로 반환
	 ptr = strstr(str, "Linux");
	 printf("%s\n", ptr);
}
