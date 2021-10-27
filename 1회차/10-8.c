#include <stdio.h>
#include <string.h> // memchr, strlen 함수가 정의된 헤더

int main(void) {
	char *string = "ABCDEABCDEABCDE";

	while(1) {
		// string이 가리키는 영역의 strlen(string) 바이트에서 첫 번째 'A'를 검색하여 발견하면
		// 이에 대한 포인터를 반환하여 string이 이를 가리키고 만약 발견하지 못하면 NULL 반환
		
		if((string=memchr(string, 'A', strlen(string))) == NULL)
			break;
		printf("%s\n", string);
		// string이 다음 문자를 가리키도록 함
		string++;
	}
}
