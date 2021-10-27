#include <stdio.h>
#include <ctype.h> // isalpha가 정의된 헤더파일

int main(void) {
	int ch;

	while ((ch = getchar()) != EOF) {
		// ch가 영문자면 참이되고 아니면 거짓
		if(isalpha(ch))
			putchar(ch);
	}
	putchar("\n");
}

