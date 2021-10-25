#include <stdio.h>
int main(void) {
	char ch;
	printf("Input character :");
	scanf("%c", &ch);

	if ((ch >= 'a') && (ch<='z')) // ch에 저장된 내용이 소문자면
		ch = ch-'a'+'A' ; // 대문자로 변환
	printf("%c\n", ch);
}

