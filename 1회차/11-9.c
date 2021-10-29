#include <stdio.h>
#define MAX 1024

int main(void) {
	FILE *fp;
	char buffer[MAX];
	int ch, chk=0;

	// source 파일을 읽기 전용으로 열기
	fp = fopen("source", "r");

	// fp 파일의 끝까지 반복
	while((ch=fgetc(fp)) != EOF) {
		// 읽지 않은 문자가 'L'이면
		if(ch == 'L') {
			chk = 1;
			break;
		}
	}

	// 방금 전에 읽은 문자가 'L'이면
	if(chk == 1) {
		// fp 파일로 방금 전에 읽은 'L'을 되돌림
		ungetc(ch, fp);
		// fp 파일의 행 끝까지의 문자열을 읽어 
