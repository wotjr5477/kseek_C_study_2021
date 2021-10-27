#include <stdio.h>
#include <string.h> // strpbrk 함수가 정의된 헤더파일

int main(void) {
	char *ptr;

	// "seoulKorea"에서 "Ka"의 문자들 중 일치하는 첫 문자는 "K"이므로 이 문자에대한 포인터 반환
	ptr = strpbrk("seoulKorea", "Ka");
	printf("%s\n", ptr);
}
