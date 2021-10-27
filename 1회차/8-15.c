#include <stdio.h>
#include <string.h> //trtok 함수가 정의된 헤더 파일

int main(void) {
	char str[] = "Hello Linux C Programing";

	// 어떤 구분자를 기준으로 단어로 자를지 지정하기 위해 이 프로그램에서는
	// 공백문자 ""를 이용하고 만약 구분자로 ;, :를 이용하려면 ";,:"를 이용
	char delim[] = " ";
	char *ptr;
	
	// 문자열 str에서 delim 구분자가 나오면 단어로 자르고 단어의 첫 글자 포인터 반환
	ptr = strtok(str, delim);
	printf("%s\n", ptr);

	// 두번쨰 호출부터는 NULL로 설정해야함
	while(ptr=strtok(NULL, delim))
		printf("%s\n", ptr);
}

