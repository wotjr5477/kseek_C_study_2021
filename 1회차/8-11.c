#include <stdio.h>
#include <string.h> // strrchr 함수가 정의된 헤더

int main(void) {
	char *str = "ABCABCABCABCABCABC";
	char *ptr;

	// 문자열 str에서 문자 'A'가 마지막으로 발견된 위치를 검색하고 포인터를 반환
	ptr = strrchr(str, 'A');
	printf("%s\n", ptr);
}
