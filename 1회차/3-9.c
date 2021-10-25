#include <stdio.h>
int main(void) {
	char ch;

	while ((ch=getchar()) != EOF)
		printf("%c", ((ch>='A')&&(ch<='Z')) ? ch-'A'+'a' : ch); // ch에 저장된 값이 대문자면 소문자로 출력, 나머지는 그대로 출력
}
