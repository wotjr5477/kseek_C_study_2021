#include <stdio.h> // gets, puts 함수가 정의된 헤더
#define MAX 128

int main(void) {
	char str[MAX];

	// 표준 입력으로 한 행의 문자열을 입력받아 str에 저장
	while(gets(str) != NULL) {
		puts(str);
	}
}
