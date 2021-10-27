#include <stdio.h>
#include <stdlib.h> // malloc 함수가 정의된 헤더

int main(void) {
	char *ptr;
	int i;

	// 10바이트 크기의 메모리를 할당하고 ptr이 가리킴
	if((ptr=(char *)malloc(10)) == NULL)
		exit(1);

	// a로 초기화
	for(i=0; i<9; i++)
		ptr[i] = 'a';

	// 문자열의 마지막을 의미
	ptr[i] = '\0';

	printf("%s\n", ptr);

	// 메모리 영역 해제
	free(ptr);
}
