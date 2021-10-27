#include <stdio.h>
#include <string.h> // strcat, strncat함수 정의된 헤더

int main(void) {
	char buf1[20] = "Linux";
	char buf2[20] = "Linux";

	strcat(buf1, " Programing"); // "Programing"을 buf1에 연결
	strncat(buf2, " Programing", 5); // " Programing" 중 5개의 문자를 buf2에 연결

	printf("%s\n%s\n", buf1, buf2);
}
