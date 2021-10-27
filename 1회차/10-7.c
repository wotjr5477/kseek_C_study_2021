#include <stdio.h>
#include <string.h> // remmove 함수가 정의된 헤더

int main(void) {
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char balphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	// alphabet 7번째부터 19바이트 크기의 내용을 alphabet 첫 부분에 복사하여 덮어쓰기가 되고,
	// 만약 세번째 인수를 19가 아닌 20으로 설정하면 NULL('\0')문자까지 복사되어 NULL 문자까지 출력
	memmove(alphabet, alphabet+7, 19);
	printf("%s\n", alphabet);
	memmove(balphabet, balphabet+7, 20);
	printf("%s\n", balphabet);
}
