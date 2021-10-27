#include <stdio.h>
#include <string.h> // strcpy함수 정의 헤더
#define MAX 20

int main(void) {
	char buffer1[MAX];
	char buffer2[MAX];

	// 문자열 "Linux"를 buffer1에 복사
	strcpy(buffer1, "Linux");
	printf("%s\n", buffer1);
	strcpy(buffer2, "Programing");
	printf("%s\n", buffer2);
	// buffer1을 buffer2에 복사, buffer2에 있던 내용은 지워짐
	strcpy(buffer2, buffer1);
	printf("%s\n", buffer2);
}
