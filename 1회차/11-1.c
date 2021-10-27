#include <stdio.h> // getchat, putchar 함수 정의 헤더
#include <ctype.h> // tolower 함수 정의 헤더

int main(void) {
	int ch;

	// 표준 입력으로 한 문자를 입력받아 ch에 저장, 입력받은 값이 파일의 끝을 의미하는
	// EOF면 while문을 벗어남
	while((ch=getchar()) != EOF) {
		// ch를 표준 출력으로 출력, 만약 ch가 대문자면 소문자로 변환해 출력
		putchar(tolower(ch));
	}
}
